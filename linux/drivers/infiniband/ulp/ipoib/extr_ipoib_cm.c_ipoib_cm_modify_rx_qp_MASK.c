
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;
struct ib_qp_attr {unsigned int rq_psn; int qp_state; } ;
struct ib_qp {int dummy; } ;
struct ib_cm_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_cm_id*,struct ib_qp_attr*,int*) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
     struct ib_cm_id *VAR_4, struct ib_qp *VAR_5,
     unsigned int VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_2(VAR_3);
 struct ib_qp_attr VAR_8;
 int VAR_9, VAR_10;

 VAR_8.qp_state = VAR_0;
 VAR_10 = FUNC_0(VAR_4, &VAR_8, &VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to init QP attr for INIT: %d\n", VAR_10);
  return VAR_10;
 }
 VAR_10 = FUNC_1(VAR_5, &VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to modify QP to INIT: %d\n", VAR_10);
  return VAR_10;
 }
 VAR_8.qp_state = VAR_1;
 VAR_10 = FUNC_0(VAR_4, &VAR_8, &VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to init QP attr for RTR: %d\n", VAR_10);
  return VAR_10;
 }
 VAR_8.rq_psn = VAR_6;
 VAR_10 = FUNC_1(VAR_5, &VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to modify QP to RTR: %d\n", VAR_10);
  return VAR_10;
 }
 VAR_8.qp_state = VAR_2;
 VAR_10 = FUNC_0(VAR_4, &VAR_8, &VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to init QP attr for RTS: %d\n", VAR_10);
  return 0;
 }
 VAR_10 = FUNC_1(VAR_5, &VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to modify QP to RTS: %d\n", VAR_10);
  return 0;
 }

 return 0;
}
