
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct TYPE_6__ {scalar_t__ port_num; } ;
struct TYPE_5__ {int attr_mask; scalar_t__ port_num; scalar_t__ qp_state; scalar_t__ alt_port_num; scalar_t__ cur_qp_state; TYPE_3__ alt_dest; TYPE_3__ dest; int alt_pkey_index; int alt_timeout; int rnr_retry; int retry_cnt; int timeout; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int en_sqd_async_notify; int pkey_index; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; int path_mig_state; int path_mtu; int qp_handle; } ;
struct ib_uverbs_ex_modify_qp {TYPE_2__ base; int rate_limit; } ;
struct ib_qp_attr {scalar_t__ qp_state; scalar_t__ cur_qp_state; scalar_t__ port_num; scalar_t__ alt_port_num; int alt_ah_attr; int ah_attr; int rate_limit; int alt_pkey_index; int alt_timeout; int rnr_retry; int retry_cnt; int timeout; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int en_sqd_async_notify; int pkey_index; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; int path_mig_state; int path_mtu; } ;
struct ib_qp {int qp_type; int device; TYPE_1__* real_qp; } ;
struct TYPE_4__ {scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
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
 int FUNC_0 (int ,int *,TYPE_3__*) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int ,int *) ;
 int FUNC_2 (struct ib_qp_attr*) ;
 struct ib_qp_attr* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 struct ib_qp* FUNC_6 (struct ib_qp*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_7 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_8(struct uverbs_attr_bundle *VAR_27,
       struct ib_uverbs_ex_modify_qp *VAR_28)
{
 struct ib_qp_attr *VAR_29;
 struct ib_qp *VAR_30;
 int VAR_31;

 VAR_29 = FUNC_3(sizeof(*VAR_29), VAR_2);
 if (!VAR_29)
  return -VAR_1;

 VAR_30 = FUNC_6(VAR_30, VAR_26, VAR_28->base.qp_handle,
          VAR_27);
 if (!VAR_30) {
  VAR_31 = -VAR_0;
  goto out;
 }

 if ((VAR_28->base.attr_mask & VAR_17) &&
     !FUNC_5(VAR_30->device, VAR_28->base.port_num)) {
  VAR_31 = -VAR_0;
  goto release_qp;
 }

 if ((VAR_28->base.attr_mask & VAR_7)) {
  if (!FUNC_5(VAR_30->device, VAR_28->base.dest.port_num)) {
   VAR_31 = -VAR_0;
   goto release_qp;
  }

  if (VAR_28->base.attr_mask & VAR_24 &&
      VAR_28->base.qp_state == VAR_4) {
   if (VAR_28->base.dest.port_num != VAR_30->real_qp->port) {
    VAR_31 = -VAR_0;
    goto release_qp;
   }
  } else {
   if (((VAR_28->base.attr_mask & (VAR_7 | VAR_17))
        == (VAR_7 | VAR_17)) &&
       VAR_28->base.port_num != VAR_28->base.dest.port_num) {
    VAR_31 = -VAR_0;
    goto release_qp;
   }
   if ((VAR_28->base.attr_mask & (VAR_7 | VAR_17))
       == VAR_7) {
    VAR_28->base.attr_mask |= VAR_17;
    VAR_28->base.port_num = VAR_28->base.dest.port_num;
   }
  }
 }

 if ((VAR_28->base.attr_mask & VAR_6) &&
     (!FUNC_5(VAR_30->device, VAR_28->base.alt_port_num) ||
     !FUNC_5(VAR_30->device, VAR_28->base.alt_dest.port_num) ||
     VAR_28->base.alt_port_num != VAR_28->base.alt_dest.port_num)) {
  VAR_31 = -VAR_0;
  goto release_qp;
 }

 if ((VAR_28->base.attr_mask & VAR_8 &&
     VAR_28->base.cur_qp_state > VAR_3) ||
     (VAR_28->base.attr_mask & VAR_24 &&
     VAR_28->base.qp_state > VAR_3)) {
  VAR_31 = -VAR_0;
  goto release_qp;
 }

 if (VAR_28->base.attr_mask & VAR_24)
  VAR_29->qp_state = VAR_28->base.qp_state;
 if (VAR_28->base.attr_mask & VAR_8)
  VAR_29->cur_qp_state = VAR_28->base.cur_qp_state;
 if (VAR_28->base.attr_mask & VAR_15)
  VAR_29->path_mtu = VAR_28->base.path_mtu;
 if (VAR_28->base.attr_mask & VAR_14)
  VAR_29->path_mig_state = VAR_28->base.path_mig_state;
 if (VAR_28->base.attr_mask & VAR_18)
  VAR_29->qkey = VAR_28->base.qkey;
 if (VAR_28->base.attr_mask & VAR_22)
  VAR_29->rq_psn = VAR_28->base.rq_psn;
 if (VAR_28->base.attr_mask & VAR_23)
  VAR_29->sq_psn = VAR_28->base.sq_psn;
 if (VAR_28->base.attr_mask & VAR_9)
  VAR_29->dest_qp_num = VAR_28->base.dest_qp_num;
 if (VAR_28->base.attr_mask & VAR_5)
  VAR_29->qp_access_flags = VAR_28->base.qp_access_flags;
 if (VAR_28->base.attr_mask & VAR_16)
  VAR_29->pkey_index = VAR_28->base.pkey_index;
 if (VAR_28->base.attr_mask & VAR_10)
  VAR_29->en_sqd_async_notify = VAR_28->base.en_sqd_async_notify;
 if (VAR_28->base.attr_mask & VAR_12)
  VAR_29->max_rd_atomic = VAR_28->base.max_rd_atomic;
 if (VAR_28->base.attr_mask & VAR_11)
  VAR_29->max_dest_rd_atomic = VAR_28->base.max_dest_rd_atomic;
 if (VAR_28->base.attr_mask & VAR_13)
  VAR_29->min_rnr_timer = VAR_28->base.min_rnr_timer;
 if (VAR_28->base.attr_mask & VAR_17)
  VAR_29->port_num = VAR_28->base.port_num;
 if (VAR_28->base.attr_mask & VAR_25)
  VAR_29->timeout = VAR_28->base.timeout;
 if (VAR_28->base.attr_mask & VAR_20)
  VAR_29->retry_cnt = VAR_28->base.retry_cnt;
 if (VAR_28->base.attr_mask & VAR_21)
  VAR_29->rnr_retry = VAR_28->base.rnr_retry;
 if (VAR_28->base.attr_mask & VAR_6) {
  VAR_29->alt_port_num = VAR_28->base.alt_port_num;
  VAR_29->alt_timeout = VAR_28->base.alt_timeout;
  VAR_29->alt_pkey_index = VAR_28->base.alt_pkey_index;
 }
 if (VAR_28->base.attr_mask & VAR_19)
  VAR_29->rate_limit = VAR_28->rate_limit;

 if (VAR_28->base.attr_mask & VAR_7)
  FUNC_0(VAR_30->device, &VAR_29->ah_attr,
      &VAR_28->base.dest);

 if (VAR_28->base.attr_mask & VAR_6)
  FUNC_0(VAR_30->device, &VAR_29->alt_ah_attr,
      &VAR_28->base.alt_dest);

 VAR_31 = FUNC_1(VAR_30, VAR_29,
          FUNC_4(VAR_30->qp_type,
           VAR_28->base.attr_mask),
          &VAR_27->driver_udata);

release_qp:
 FUNC_7(VAR_30);
out:
 FUNC_2(VAR_29);

 return VAR_31;
}
