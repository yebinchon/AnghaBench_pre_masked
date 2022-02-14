
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int transmit_me; int trans_id; int tx_count; TYPE_3__* base; int timeout_event; TYPE_1__* ns; } ;
struct TYPE_5__ {int global_timeout; } ;
struct TYPE_4__ {int choked; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct request*,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char*,struct request*,...) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_7(struct request *VAR_3) {
 int VAR_4 = 0, VAR_5;

 FUNC_0(VAR_3->base);
 FUNC_1(VAR_3);


 VAR_3->transmit_me = 1;
 FUNC_2(VAR_3->trans_id != 0xffff);

 if (!VAR_3->ns)
 {

  return 1;
 }

 if (VAR_3->ns->choked) {


  return 1;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_3->ns);
 switch (VAR_5) {
 case 1:

  VAR_3->ns->choked = 1;
  FUNC_6(VAR_3->ns, 1);
  return 1;
 case 2:



  VAR_4 = 1;
  VAR_2;
 default:

  FUNC_5(VAR_0,
      "Setting timeout for request %p, sent to nameserver %p", VAR_3, VAR_3->ns);
  if (FUNC_4(&VAR_3->timeout_event, &VAR_3->base->global_timeout) < 0) {
   FUNC_5(VAR_1,
        "Error from libevent when adding timer for request %p",
       VAR_3);

  }
  VAR_3->tx_count++;
  VAR_3->transmit_me = 0;
  return VAR_4;
 }
}
