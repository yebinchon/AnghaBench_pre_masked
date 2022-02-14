
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int actual_length; struct arpc_response_message* transfer_buffer; TYPE_1__* dev; struct es2_ap_dev* context; } ;
struct es2_ap_dev {int arpc_lock; } ;
struct device {int dummy; } ;
struct arpc_response_message {int id; } ;
struct arpc {int response_received; int resp; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct es2_ap_dev*,struct arpc*) ;
 struct arpc* FUNC_1 (struct es2_ap_dev*,int ) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct arpc_response_message*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_5)
{
 struct es2_ap_dev *VAR_6 = VAR_5->context;
 struct device *VAR_7 = &VAR_5->dev->dev;
 int VAR_8 = FUNC_2(VAR_5);
 struct arpc *VAR_9;
 struct arpc_response_message *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_8) {
  if ((VAR_8 == -VAR_0) || (VAR_8 == -VAR_2))
   goto exit;


  if (VAR_8 == -VAR_1 || VAR_8 == -VAR_3)
   return;

  FUNC_4(VAR_7, "arpc in-urb error %d (dropped)\n", VAR_8);
  return;
 }

 if (VAR_5->actual_length < sizeof(*VAR_10)) {
  FUNC_4(VAR_7, "short aprc response received\n");
  goto exit;
 }

 VAR_10 = VAR_5->transfer_buffer;
 FUNC_7(&VAR_6->arpc_lock, VAR_11);
 VAR_9 = FUNC_1(VAR_6, VAR_10->id);
 if (!VAR_9) {
  FUNC_4(VAR_7, "invalid arpc response id received: %u\n",
   FUNC_5(VAR_10->id));
  FUNC_8(&VAR_6->arpc_lock, VAR_11);
  goto exit;
 }

 FUNC_0(VAR_6, VAR_9);
 FUNC_6(VAR_9->resp, VAR_10, sizeof(*VAR_10));
 FUNC_3(&VAR_9->response_received);
 FUNC_8(&VAR_6->arpc_lock, VAR_11);

exit:

 VAR_12 = FUNC_9(VAR_5, VAR_4);
 if (VAR_12)
  FUNC_4(VAR_7, "failed to resubmit arpc in-urb: %d\n", VAR_12);
}
