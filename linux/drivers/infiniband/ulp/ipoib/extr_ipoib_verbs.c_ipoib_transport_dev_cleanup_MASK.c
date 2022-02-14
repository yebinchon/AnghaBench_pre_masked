
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int recv_cq; int send_cq; int * qp; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->qp) {
  if (FUNC_1(VAR_1->qp))
   FUNC_3(VAR_1, "ib_qp_destroy failed\n");

  VAR_1->qp = ((void*)0);
 }

 FUNC_0(VAR_1->send_cq);
 FUNC_0(VAR_1->recv_cq);
}
