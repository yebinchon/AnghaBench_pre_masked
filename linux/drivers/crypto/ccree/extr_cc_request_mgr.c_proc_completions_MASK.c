
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct cc_req_mgr_handle {unsigned int req_queue_tail; unsigned int req_queue_head; unsigned int axi_completed; struct cc_crypto_req* req_queue; } ;
struct cc_drvdata {int irq; struct cc_req_mgr_handle* request_mgr_handle; } ;
struct TYPE_2__ {int slot; int alg; scalar_t__ is_cpp; } ;
struct cc_crypto_req {int user_arg; int (* user_cb ) (struct device*,int ,int) ;TYPE_1__ cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 struct device* FUNC_4 (struct cc_drvdata*) ;
 int FUNC_5 (struct device*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct cc_drvdata *VAR_2)
{
 struct cc_crypto_req *VAR_3;
 struct device *VAR_4 = FUNC_4(VAR_2);
 struct cc_req_mgr_handle *VAR_5 =
      VAR_2->request_mgr_handle;
 unsigned int *VAR_6 = &VAR_5->req_queue_tail;
 unsigned int *VAR_7 = &VAR_5->req_queue_head;
 int VAR_8;
 u32 VAR_9;

 while (VAR_5->axi_completed) {
  VAR_5->axi_completed--;


  if (*VAR_7 == *VAR_6) {




   FUNC_3(VAR_4, "Request queue is empty head == tail %u\n",
    *VAR_7);
   break;
  }

  VAR_3 = &VAR_5->req_queue[*VAR_6];

  if (VAR_3->cpp.is_cpp) {

   FUNC_2(VAR_4, "CPP request completion slot: %d alg:%d\n",
    VAR_3->cpp.slot, VAR_3->cpp.alg);
   VAR_9 = FUNC_0(VAR_3->cpp.alg,
            VAR_3->cpp.slot);
   VAR_8 = (VAR_2->irq & VAR_9 ? -VAR_0 : 0);
   FUNC_2(VAR_4, "Got mask: %x irq: %x rc: %d\n", VAR_9,
    VAR_2->irq, VAR_8);
  } else {
   FUNC_2(VAR_4, "None CPP request completion\n");
   VAR_8 = 0;
  }

  if (VAR_3->user_cb)
   VAR_3->user_cb(VAR_4, VAR_3->user_arg, VAR_8);
  *VAR_6 = (*VAR_6 + 1) & (VAR_1 - 1);
  FUNC_2(VAR_4, "Dequeue request tail=%u\n", *VAR_6);
  FUNC_2(VAR_4, "Request completed. axi_completed=%d\n",
   VAR_5->axi_completed);
  FUNC_1(VAR_4);
 }
}
