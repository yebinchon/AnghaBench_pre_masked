
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int pd; int recv_cq; int send_cq; int flags; int * qp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ipoib_dev_priv*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*) ;

void FUNC_6(struct ipoib_dev_priv *VAR_1)
{

 if (VAR_1->qp) {
  if (FUNC_3(VAR_1->qp))
   FUNC_5(VAR_1, "ib_qp_destroy failed\n");

  VAR_1->qp = ((void*)0);
  FUNC_0(VAR_0, &VAR_1->flags);
 }

 if (FUNC_2(VAR_1->send_cq))
  FUNC_5(VAR_1, "ib_cq_destroy (send) failed\n");

 if (FUNC_2(VAR_1->recv_cq))
  FUNC_5(VAR_1, "ib_cq_destroy (recv) failed\n");

 FUNC_4(VAR_1);

 FUNC_1(VAR_1->pd);
}
