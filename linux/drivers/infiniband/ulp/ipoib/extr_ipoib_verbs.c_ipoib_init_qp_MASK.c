
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int qp; int pkey_index; int port; int flags; } ;
struct ib_qp_attr {int qp_state; scalar_t__ sq_psn; int pkey_index; int port_num; scalar_t__ qkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,...) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct net_device *VAR_10)
{
 struct ipoib_dev_priv *VAR_11 = FUNC_1(VAR_10);
 int VAR_12;
 struct ib_qp_attr VAR_13;
 int VAR_14;

 if (!FUNC_3(VAR_9, &VAR_11->flags))
  return -1;

 VAR_13.qp_state = VAR_0;
 VAR_13.qkey = 0;
 VAR_13.port_num = VAR_11->port;
 VAR_13.pkey_index = VAR_11->pkey_index;
 VAR_14 =
     VAR_6 |
     VAR_5 |
     VAR_4 |
     VAR_8;
 VAR_12 = FUNC_0(VAR_11->qp, &VAR_13, VAR_14);
 if (VAR_12) {
  FUNC_2(VAR_11, "failed to modify QP to init, ret = %d\n", VAR_12);
  goto out_fail;
 }

 VAR_13.qp_state = VAR_2;

 VAR_14 &= ~VAR_5;
 VAR_12 = FUNC_0(VAR_11->qp, &VAR_13, VAR_14);
 if (VAR_12) {
  FUNC_2(VAR_11, "failed to modify QP to RTR, ret = %d\n", VAR_12);
  goto out_fail;
 }

 VAR_13.qp_state = VAR_3;
 VAR_13.sq_psn = 0;
 VAR_14 |= VAR_7;
 VAR_14 &= ~VAR_4;
 VAR_12 = FUNC_0(VAR_11->qp, &VAR_13, VAR_14);
 if (VAR_12) {
  FUNC_2(VAR_11, "failed to modify QP to RTS, ret = %d\n", VAR_12);
  goto out_fail;
 }

 return 0;

out_fail:
 VAR_13.qp_state = VAR_1;
 if (FUNC_0(VAR_11->qp, &VAR_13, VAR_8))
  FUNC_2(VAR_11, "Failed to modify QP to RESET state\n");

 return VAR_12;
}
