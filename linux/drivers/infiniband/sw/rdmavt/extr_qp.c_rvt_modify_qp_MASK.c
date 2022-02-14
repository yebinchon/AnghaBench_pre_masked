
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ qp_type; int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rvt_qp {int state; scalar_t__ port_num; scalar_t__ s_mig_state; int s_draining; scalar_t__ s_pkey_index; scalar_t__ remote_qpn; int s_next_psn; int s_psn; int s_sending_psn; int s_last_psn; int s_sending_hpsn; int r_psn; scalar_t__ s_alt_pkey_index; int s_retry_cnt; int s_retry; int s_rnr_retry_cnt; int s_rnr_retry; int r_min_rnr_timer; scalar_t__ r_max_rd_atomic; int r_lock; int s_hlock; int s_lock; TYPE_3__ ibqp; int s_max_rd_atomic; int qkey; int timeout; int timeout_jiffies; int pmtu; int log_pmtu; int alt_ah_attr; int remote_ah_attr; int s_srate; int srate_mbps; int qp_access_flags; int s_cur; int s_last; int r_flags; } ;
struct TYPE_10__ {int (* get_pmtu_from_attr ) (struct rvt_dev_info*,struct rvt_qp*,struct ib_qp_attr*) ;int (* modify_qp ) (struct rvt_qp*,struct ib_qp_attr*,int,struct ib_udata*) ;int (* mtu_from_qp ) (struct rvt_dev_info*,struct rvt_qp*,int) ;scalar_t__ (* check_modify_qp ) (struct rvt_qp*,struct ib_qp_attr*,int,struct ib_udata*) ;} ;
struct TYPE_7__ {scalar_t__ max_rdma_atomic; int psn_modify_mask; } ;
struct rvt_dev_info {TYPE_4__ driver_f; TYPE_1__ dparms; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; scalar_t__ alt_pkey_index; scalar_t__ pkey_index; int min_rnr_timer; scalar_t__ port_num; scalar_t__ dest_qp_num; int retry_cnt; int rnr_retry; scalar_t__ path_mig_state; scalar_t__ max_dest_rd_atomic; int sq_psn; int rq_psn; int max_rd_atomic; int qkey; int timeout; int alt_ah_attr; int ah_attr; int qp_access_flags; } ;
struct ib_qp {int qp_type; TYPE_5__* device; } ;
struct TYPE_8__ {TYPE_3__* qp; } ;
struct ib_event {int event; TYPE_2__ element; int device; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_11__ {scalar_t__ phys_port_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;


 int VAR_8 ;


 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (int ) ;
 struct rvt_dev_info* FUNC_3 (TYPE_5__*) ;
 struct rvt_qp* FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_5__*,scalar_t__) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct rvt_qp*,int ) ;
 scalar_t__ FUNC_14 (struct rvt_dev_info*) ;
 int FUNC_15 (struct rvt_dev_info*,struct rvt_qp*) ;
 int FUNC_16 (struct rvt_dev_info*,struct rvt_qp*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (struct rvt_qp*,struct ib_qp_attr*,int,struct ib_udata*) ;
 int FUNC_23 (struct rvt_dev_info*,struct rvt_qp*,struct ib_qp_attr*) ;
 int FUNC_24 (struct rvt_dev_info*,struct rvt_qp*,int) ;
 int FUNC_25 (struct rvt_qp*,struct ib_qp_attr*,int,struct ib_udata*) ;
 int FUNC_26 (struct ib_event*,int ) ;
 int FUNC_27 (struct ib_event*,int ) ;

int FUNC_28(struct ib_qp *VAR_35, struct ib_qp_attr *VAR_36,
    int VAR_37, struct ib_udata *VAR_38)
{
 struct rvt_dev_info *VAR_39 = FUNC_3(VAR_35->device);
 struct rvt_qp *VAR_40 = FUNC_4(VAR_35);
 enum ib_qp_state VAR_41, VAR_42;
 struct ib_event VAR_43;
 int VAR_44 = 0;
 int VAR_45 = 0;
 int VAR_46 = 0;
 int VAR_47;

 FUNC_19(&VAR_40->r_lock);
 FUNC_18(&VAR_40->s_hlock);
 FUNC_18(&VAR_40->s_lock);

 VAR_41 = VAR_37 & VAR_15 ?
  VAR_36->cur_qp_state : VAR_40->state;
 VAR_42 = VAR_37 & VAR_29 ? VAR_36->qp_state : VAR_41;
 VAR_47 = FUNC_10(VAR_35->device, VAR_40->port_num);

 if (!FUNC_1(VAR_41, VAR_42, VAR_35->qp_type,
    VAR_37))
  goto inval;

 if (VAR_39->driver_f.check_modify_qp &&
     VAR_39->driver_f.check_modify_qp(VAR_40, VAR_36, VAR_37, VAR_38))
  goto inval;

 if (VAR_37 & VAR_14) {
  if (VAR_47) {
   if (FUNC_7(&VAR_36->ah_attr) >=
    FUNC_6(VAR_32))
    goto inval;
  } else {
   if (FUNC_7(&VAR_36->ah_attr) >=
    FUNC_0(VAR_6))
    goto inval;
  }

  if (FUNC_12(VAR_40->ibqp.device, &VAR_36->ah_attr))
   goto inval;
 }

 if (VAR_37 & VAR_13) {
  if (VAR_47) {
   if (FUNC_7(&VAR_36->alt_ah_attr) >=
    FUNC_6(VAR_32))
    goto inval;
  } else {
   if (FUNC_7(&VAR_36->alt_ah_attr) >=
    FUNC_0(VAR_6))
    goto inval;
  }

  if (FUNC_12(VAR_40->ibqp.device, &VAR_36->alt_ah_attr))
   goto inval;
  if (VAR_36->alt_pkey_index >= FUNC_14(VAR_39))
   goto inval;
 }

 if (VAR_37 & VAR_22)
  if (VAR_36->pkey_index >= FUNC_14(VAR_39))
   goto inval;

 if (VAR_37 & VAR_19)
  if (VAR_36->min_rnr_timer > 31)
   goto inval;

 if (VAR_37 & VAR_23)
  if (VAR_40->ibqp.qp_type == VAR_11 ||
      VAR_40->ibqp.qp_type == VAR_9 ||
      VAR_36->port_num == 0 ||
      VAR_36->port_num > VAR_35->device->phys_port_cnt)
   goto inval;

 if (VAR_37 & VAR_16)
  if (VAR_36->dest_qp_num > VAR_33)
   goto inval;

 if (VAR_37 & VAR_25)
  if (VAR_36->retry_cnt > 7)
   goto inval;

 if (VAR_37 & VAR_26)
  if (VAR_36->rnr_retry > 7)
   goto inval;
 if (VAR_37 & VAR_21) {
  VAR_46 = VAR_39->driver_f.get_pmtu_from_attr(VAR_39, VAR_40, VAR_36);
  if (VAR_46 < 0)
   goto inval;
 }

 if (VAR_37 & VAR_20) {
  if (VAR_36->path_mig_state == VAR_5) {
   if (VAR_40->s_mig_state == VAR_3)
    goto inval;
   if (VAR_42 != VAR_8)
    goto inval;
  } else if (VAR_36->path_mig_state == VAR_4) {
   if (VAR_40->s_mig_state == VAR_5)
    goto inval;
   if (VAR_42 != VAR_8 && VAR_42 != 129)
    goto inval;
   if (VAR_40->s_mig_state == VAR_3)
    VAR_45 = 1;
  } else {
   goto inval;
  }
 }

 if (VAR_37 & VAR_17)
  if (VAR_36->max_dest_rd_atomic > VAR_39->dparms.max_rdma_atomic)
   goto inval;

 switch (VAR_42) {
 case 131:
  if (VAR_40->state != 131)
   FUNC_16(VAR_39, VAR_40, VAR_35->qp_type);
  break;

 case 130:

  VAR_40->r_flags &= ~VAR_34;
  VAR_40->state = VAR_42;
  break;

 case 129:
  VAR_40->s_draining = VAR_40->s_last != VAR_40->s_cur;
  VAR_40->state = VAR_42;
  break;

 case 128:
  if (VAR_40->ibqp.qp_type == VAR_10)
   goto inval;
  VAR_40->state = VAR_42;
  break;

 case 132:
  VAR_44 = FUNC_13(VAR_40, VAR_31);
  break;

 default:
  VAR_40->state = VAR_42;
  break;
 }

 if (VAR_37 & VAR_22)
  VAR_40->s_pkey_index = VAR_36->pkey_index;

 if (VAR_37 & VAR_23)
  VAR_40->port_num = VAR_36->port_num;

 if (VAR_37 & VAR_16)
  VAR_40->remote_qpn = VAR_36->dest_qp_num;

 if (VAR_37 & VAR_28) {
  VAR_40->s_next_psn = VAR_36->sq_psn & VAR_39->dparms.psn_modify_mask;
  VAR_40->s_psn = VAR_40->s_next_psn;
  VAR_40->s_sending_psn = VAR_40->s_next_psn;
  VAR_40->s_last_psn = VAR_40->s_next_psn - 1;
  VAR_40->s_sending_hpsn = VAR_40->s_last_psn;
 }

 if (VAR_37 & VAR_27)
  VAR_40->r_psn = VAR_36->rq_psn & VAR_39->dparms.psn_modify_mask;

 if (VAR_37 & VAR_12)
  VAR_40->qp_access_flags = VAR_36->qp_access_flags;

 if (VAR_37 & VAR_14) {
  FUNC_11(&VAR_40->remote_ah_attr, &VAR_36->ah_attr);
  VAR_40->s_srate = FUNC_9(&VAR_36->ah_attr);
  VAR_40->srate_mbps = FUNC_2(VAR_40->s_srate);
 }

 if (VAR_37 & VAR_13) {
  FUNC_11(&VAR_40->alt_ah_attr, &VAR_36->alt_ah_attr);
  VAR_40->s_alt_pkey_index = VAR_36->alt_pkey_index;
 }

 if (VAR_37 & VAR_20) {
  VAR_40->s_mig_state = VAR_36->path_mig_state;
  if (VAR_45) {
   VAR_40->remote_ah_attr = VAR_40->alt_ah_attr;
   VAR_40->port_num = FUNC_8(&VAR_40->alt_ah_attr);
   VAR_40->s_pkey_index = VAR_40->s_alt_pkey_index;
  }
 }

 if (VAR_37 & VAR_21) {
  VAR_40->pmtu = VAR_39->driver_f.mtu_from_qp(VAR_39, VAR_40, VAR_46);
  VAR_40->log_pmtu = FUNC_5(VAR_40->pmtu);
 }

 if (VAR_37 & VAR_25) {
  VAR_40->s_retry_cnt = VAR_36->retry_cnt;
  VAR_40->s_retry = VAR_36->retry_cnt;
 }

 if (VAR_37 & VAR_26) {
  VAR_40->s_rnr_retry_cnt = VAR_36->rnr_retry;
  VAR_40->s_rnr_retry = VAR_36->rnr_retry;
 }

 if (VAR_37 & VAR_19)
  VAR_40->r_min_rnr_timer = VAR_36->min_rnr_timer;

 if (VAR_37 & VAR_30) {
  VAR_40->timeout = VAR_36->timeout;
  VAR_40->timeout_jiffies = FUNC_17(VAR_40->timeout);
 }

 if (VAR_37 & VAR_24)
  VAR_40->qkey = VAR_36->qkey;

 if (VAR_37 & VAR_17)
  VAR_40->r_max_rd_atomic = VAR_36->max_dest_rd_atomic;

 if (VAR_37 & VAR_18)
  VAR_40->s_max_rd_atomic = VAR_36->max_rd_atomic;

 if (VAR_39->driver_f.modify_qp)
  VAR_39->driver_f.modify_qp(VAR_40, VAR_36, VAR_37, VAR_38);

 FUNC_20(&VAR_40->s_lock);
 FUNC_20(&VAR_40->s_hlock);
 FUNC_21(&VAR_40->r_lock);

 if (VAR_41 == 131 && VAR_42 == VAR_7)
  FUNC_15(VAR_39, VAR_40);

 if (VAR_44) {
  VAR_43.device = VAR_40->ibqp.device;
  VAR_43.element.qp = &VAR_40->ibqp;
  VAR_43.event = VAR_2;
  VAR_40->ibqp.event_handler(&VAR_43, VAR_40->ibqp.qp_context);
 }
 if (VAR_45) {
  VAR_43.device = VAR_40->ibqp.device;
  VAR_43.element.qp = &VAR_40->ibqp;
  VAR_43.event = VAR_1;
  VAR_40->ibqp.event_handler(&VAR_43, VAR_40->ibqp.qp_context);
 }
 return 0;

inval:
 FUNC_20(&VAR_40->s_lock);
 FUNC_20(&VAR_40->s_hlock);
 FUNC_21(&VAR_40->r_lock);
 return -VAR_0;
}
