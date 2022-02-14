
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {scalar_t__ inlen; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; int sq_psn; int qkey; int en_sqd_async_notify; } ;
struct ib_qp {int device; } ;
struct efa_qp {int state; int qp_handle; } ;
struct efa_dev {int edev; int ibdev; } ;
struct efa_com_modify_qp_params {int modify_mask; int cur_qp_state; int qp_state; int sq_psn; int qkey; int sq_drained_async_notify; int qp_handle; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int FUNC_0 (int ) ;
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
 int VAR_10 ;
 int FUNC_1 (int *,struct efa_com_modify_qp_params*) ;
 int FUNC_2 (struct efa_dev*,struct efa_qp*,struct ib_qp_attr*,int,int,int) ;
 int FUNC_3 (struct ib_udata*,int ,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 struct efa_dev* FUNC_5 (int ) ;
 struct efa_qp* FUNC_6 (struct ib_qp*) ;

int FUNC_7(struct ib_qp *VAR_11, struct ib_qp_attr *VAR_12,
    int VAR_13, struct ib_udata *VAR_14)
{
 struct efa_dev *VAR_15 = FUNC_5(VAR_11->device);
 struct efa_com_modify_qp_params VAR_16 = {};
 struct efa_qp *VAR_17 = FUNC_6(VAR_11);
 enum ib_qp_state VAR_18;
 enum ib_qp_state VAR_19;
 int VAR_20;

 if (VAR_14->inlen &&
     !FUNC_3(VAR_14, 0, VAR_14->inlen)) {
  FUNC_4(&VAR_15->ibdev,
     "Incompatible ABI params, udata not cleared\n");
  return -VAR_5;
 }

 VAR_18 = VAR_13 & VAR_6 ? VAR_12->cur_qp_state :
           VAR_17->state;
 VAR_19 = VAR_13 & VAR_10 ? VAR_12->qp_state : VAR_18;

 VAR_20 = FUNC_2(VAR_15, VAR_17, VAR_12, VAR_13, VAR_18,
         VAR_19);
 if (VAR_20)
  return VAR_20;

 VAR_16.qp_handle = VAR_17->qp_handle;

 if (VAR_13 & VAR_10) {
  VAR_16.modify_mask |= FUNC_0(VAR_2) |
          FUNC_0(VAR_0);
  VAR_16.cur_qp_state = VAR_12->cur_qp_state;
  VAR_16.qp_state = VAR_12->qp_state;
 }

 if (VAR_13 & VAR_7) {
  VAR_16.modify_mask |=
   FUNC_0(VAR_3);
  VAR_16.sq_drained_async_notify = VAR_12->en_sqd_async_notify;
 }

 if (VAR_13 & VAR_8) {
  VAR_16.modify_mask |= FUNC_0(VAR_1);
  VAR_16.qkey = VAR_12->qkey;
 }

 if (VAR_13 & VAR_9) {
  VAR_16.modify_mask |= FUNC_0(VAR_4);
  VAR_16.sq_psn = VAR_12->sq_psn;
 }

 VAR_20 = FUNC_1(&VAR_15->edev, &VAR_16);
 if (VAR_20)
  return VAR_20;

 VAR_17->state = VAR_19;

 return 0;
}
