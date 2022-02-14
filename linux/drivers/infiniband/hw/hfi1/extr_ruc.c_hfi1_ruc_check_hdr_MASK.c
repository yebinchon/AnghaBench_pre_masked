
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_12__ {int qp_num; } ;
struct rvt_qp {scalar_t__ s_mig_state; scalar_t__ port_num; int remote_ah_attr; TYPE_5__ ibqp; int s_lock; int alt_ah_attr; } ;
struct TYPE_10__ {int interface_id; int subnet_prefix; } ;
struct TYPE_11__ {TYPE_3__ global; } ;
struct ib_global_route {TYPE_4__ dgid; int sgid_index; } ;
struct hfi1_packet {scalar_t__ dlid; scalar_t__ slid; scalar_t__ sl; int migrated; scalar_t__ etype; TYPE_2__* grh; int pkey; struct rvt_qp* qp; } ;
struct TYPE_8__ {int gid_prefix; } ;
struct hfi1_ibport {TYPE_1__ rvp; int * sl_to_sc; } ;
typedef int __be64 ;
struct TYPE_13__ {scalar_t__ port; } ;
struct TYPE_9__ {int sgid; int dgid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hfi1_ibport*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct hfi1_ibport*,int ,scalar_t__,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct rvt_qp*) ;
 TYPE_6__* FUNC_4 (struct hfi1_ibport*) ;
 int FUNC_5 (TYPE_6__*,int ,int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 struct ib_global_route* FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int ) ;

int FUNC_14(struct hfi1_ibport *VAR_4, struct hfi1_packet *VAR_5)
{
 __be64 VAR_6;
 unsigned long VAR_7;
 struct rvt_qp *VAR_8 = VAR_5->qp;
 u8 VAR_9 = VAR_4->sl_to_sc[FUNC_9(&VAR_8->remote_ah_attr)];
 u32 VAR_10 = VAR_5->dlid;
 u32 VAR_11 = VAR_5->slid;
 u32 VAR_12 = VAR_5->sl;
 bool VAR_13 = VAR_5->migrated;
 u16 VAR_14 = VAR_5->pkey;

 if (VAR_8->s_mig_state == VAR_1 && VAR_13) {
  if (!VAR_5->grh) {
   if ((FUNC_6(&VAR_8->alt_ah_attr) &
        VAR_0) &&
       (VAR_5->etype != VAR_3))
    return 1;
  } else {
   const struct ib_global_route *VAR_15;

   if (!(FUNC_6(&VAR_8->alt_ah_attr) &
         VAR_0))
    return 1;
   VAR_15 = FUNC_10(&VAR_8->alt_ah_attr);
   VAR_6 = FUNC_0(VAR_4, VAR_15->sgid_index);
   if (!FUNC_1(&VAR_5->grh->dgid, VAR_4->rvp.gid_prefix,
        VAR_6))
    return 1;
   if (!FUNC_1(
    &VAR_5->grh->sgid,
    VAR_15->dgid.global.subnet_prefix,
    VAR_15->dgid.global.interface_id))
    return 1;
  }
  if (FUNC_13(FUNC_5(FUNC_4(VAR_4), VAR_14,
         VAR_9, VAR_11))) {
   FUNC_2(VAR_4, VAR_14, VAR_12, 0, VAR_8->ibqp.qp_num,
          VAR_11, VAR_10);
   return 1;
  }

  if (VAR_11 != FUNC_7(&VAR_8->alt_ah_attr) ||
      FUNC_4(VAR_4)->port !=
   FUNC_8(&VAR_8->alt_ah_attr))
   return 1;
  FUNC_11(&VAR_8->s_lock, VAR_7);
  FUNC_3(VAR_8);
  FUNC_12(&VAR_8->s_lock, VAR_7);
 } else {
  if (!VAR_5->grh) {
   if ((FUNC_6(&VAR_8->remote_ah_attr) &
        VAR_0) &&
       (VAR_5->etype != VAR_3))
    return 1;
  } else {
   const struct ib_global_route *VAR_16;

   if (!(FUNC_6(&VAR_8->remote_ah_attr) &
         VAR_0))
    return 1;
   VAR_16 = FUNC_10(&VAR_8->remote_ah_attr);
   VAR_6 = FUNC_0(VAR_4, VAR_16->sgid_index);
   if (!FUNC_1(&VAR_5->grh->dgid, VAR_4->rvp.gid_prefix,
        VAR_6))
    return 1;
   if (!FUNC_1(
        &VAR_5->grh->sgid,
        VAR_16->dgid.global.subnet_prefix,
        VAR_16->dgid.global.interface_id))
    return 1;
  }
  if (FUNC_13(FUNC_5(FUNC_4(VAR_4), VAR_14,
         VAR_9, VAR_11))) {
   FUNC_2(VAR_4, VAR_14, VAR_12, 0, VAR_8->ibqp.qp_num,
          VAR_11, VAR_10);
   return 1;
  }

  if ((VAR_11 != FUNC_7(&VAR_8->remote_ah_attr)) ||
      FUNC_4(VAR_4)->port != VAR_8->port_num)
   return 1;
  if (VAR_8->s_mig_state == VAR_2 && !VAR_13)
   VAR_8->s_mig_state = VAR_1;
 }

 return 0;
}
