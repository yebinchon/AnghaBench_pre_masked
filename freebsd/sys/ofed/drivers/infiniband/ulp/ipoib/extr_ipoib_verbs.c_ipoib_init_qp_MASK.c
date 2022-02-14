
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_1 (struct ipoib_dev_priv*,char*,...) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct ipoib_dev_priv *VAR_10)
{
 int VAR_11;
 struct ib_qp_attr VAR_12;
 int VAR_13;

 if (!FUNC_2(VAR_9, &VAR_10->flags))
  return -1;

 VAR_12.qp_state = VAR_0;
 VAR_12.qkey = 0;
 VAR_12.port_num = VAR_10->port;
 VAR_12.pkey_index = VAR_10->pkey_index;
 VAR_13 =
     VAR_6 |
     VAR_5 |
     VAR_4 |
     VAR_8;

 VAR_11 = FUNC_0(VAR_10->qp, &VAR_12, VAR_13);
 if (VAR_11) {
  FUNC_1(VAR_10, "failed to modify QP to init, ret = %d\n", VAR_11);
  goto out_fail;
 }

 VAR_12.qp_state = VAR_2;

 VAR_13 &= ~VAR_5;
 VAR_11 = FUNC_0(VAR_10->qp, &VAR_12, VAR_13);
 if (VAR_11) {
  FUNC_1(VAR_10, "failed to modify QP to RTR, ret = %d\n", VAR_11);
  goto out_fail;
 }

 VAR_12.qp_state = VAR_3;
 VAR_12.sq_psn = 0;
 VAR_13 |= VAR_7;
 VAR_13 &= ~VAR_4;
 VAR_11 = FUNC_0(VAR_10->qp, &VAR_12, VAR_13);
 if (VAR_11) {
  FUNC_1(VAR_10, "failed to modify QP to RTS, ret = %d\n", VAR_11);
  goto out_fail;
 }

 return 0;

out_fail:
 VAR_12.qp_state = VAR_1;
 if (FUNC_0(VAR_10->qp, &VAR_12, VAR_8))
  FUNC_1(VAR_10, "Failed to modify QP to RESET state\n");

 return VAR_11;
}
