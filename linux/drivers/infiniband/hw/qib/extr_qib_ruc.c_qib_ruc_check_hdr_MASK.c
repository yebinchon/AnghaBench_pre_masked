
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_15__ {int qp_num; } ;
struct rvt_qp {scalar_t__ s_mig_state; scalar_t__ port_num; int remote_ah_attr; TYPE_7__ ibqp; int s_pkey_index; int s_lock; int alt_ah_attr; int s_alt_pkey_index; } ;
struct TYPE_9__ {int gid_prefix; } ;
struct qib_ibport {TYPE_1__ rvp; } ;
struct TYPE_10__ {int sgid; int dgid; } ;
struct TYPE_11__ {TYPE_2__ grh; } ;
struct TYPE_12__ {TYPE_3__ l; } ;
struct ib_header {int * lrh; TYPE_4__ u; } ;
struct TYPE_13__ {int interface_id; int subnet_prefix; } ;
struct TYPE_14__ {TYPE_5__ global; } ;
struct ib_global_route {TYPE_6__ dgid; int sgid_index; } ;
typedef int __be64 ;
struct TYPE_16__ {scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_ibport*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_8__* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_ibport*,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct qib_ibport*,int ) ;
 int FUNC_6 (struct rvt_qp*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 struct ib_global_route* FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

int FUNC_14(struct qib_ibport *VAR_4, struct ib_header *VAR_5,
        int VAR_6, struct rvt_qp *VAR_7, u32 VAR_8)
{
 __be64 VAR_9;
 unsigned long VAR_10;

 if (VAR_7->s_mig_state == VAR_2 && (VAR_8 & VAR_1)) {
  if (!VAR_6) {
   if (FUNC_8(&VAR_7->alt_ah_attr) &
       VAR_0)
    goto err;
  } else {
   const struct ib_global_route *VAR_11;

   if (!(FUNC_8(&VAR_7->alt_ah_attr) &
         VAR_0))
    goto err;
   VAR_11 = FUNC_11(&VAR_7->alt_ah_attr);
   VAR_9 = FUNC_1(VAR_4, VAR_11->sgid_index);
   if (!FUNC_2(&VAR_5->u.l.grh.dgid,
        VAR_4->rvp.gid_prefix, VAR_9))
    goto err;
   if (!FUNC_2(&VAR_5->u.l.grh.sgid,
       VAR_11->dgid.global.subnet_prefix,
       VAR_11->dgid.global.interface_id))
    goto err;
  }
  if (!FUNC_7((u16)VAR_8,
     FUNC_5(VAR_4, VAR_7->s_alt_pkey_index))) {
   FUNC_4(VAR_4,
         (u16)VAR_8,
         (FUNC_0(VAR_5->lrh[0]) >> 4) & 0xF,
         0, VAR_7->ibqp.qp_num,
         VAR_5->lrh[3], VAR_5->lrh[1]);
   goto err;
  }

  if ((FUNC_0(VAR_5->lrh[3]) !=
       FUNC_9(&VAR_7->alt_ah_attr)) ||
      FUNC_3(VAR_4)->port !=
       FUNC_10(&VAR_7->alt_ah_attr))
   goto err;
  FUNC_12(&VAR_7->s_lock, VAR_10);
  FUNC_6(VAR_7);
  FUNC_13(&VAR_7->s_lock, VAR_10);
 } else {
  if (!VAR_6) {
   if (FUNC_8(&VAR_7->remote_ah_attr) &
       VAR_0)
    goto err;
  } else {
   const struct ib_global_route *VAR_12;

   if (!(FUNC_8(&VAR_7->remote_ah_attr) &
         VAR_0))
    goto err;
   VAR_12 = FUNC_11(&VAR_7->remote_ah_attr);
   VAR_9 = FUNC_1(VAR_4, VAR_12->sgid_index);
   if (!FUNC_2(&VAR_5->u.l.grh.dgid,
        VAR_4->rvp.gid_prefix, VAR_9))
    goto err;
   if (!FUNC_2(&VAR_5->u.l.grh.sgid,
       VAR_12->dgid.global.subnet_prefix,
       VAR_12->dgid.global.interface_id))
    goto err;
  }
  if (!FUNC_7((u16)VAR_8,
     FUNC_5(VAR_4, VAR_7->s_pkey_index))) {
   FUNC_4(VAR_4,
         (u16)VAR_8,
         (FUNC_0(VAR_5->lrh[0]) >> 4) & 0xF,
         0, VAR_7->ibqp.qp_num,
         VAR_5->lrh[3], VAR_5->lrh[1]);
   goto err;
  }

  if (FUNC_0(VAR_5->lrh[3]) !=
      FUNC_9(&VAR_7->remote_ah_attr) ||
      FUNC_3(VAR_4)->port != VAR_7->port_num)
   goto err;
  if (VAR_7->s_mig_state == VAR_3 &&
      !(VAR_8 & VAR_1))
   VAR_7->s_mig_state = VAR_2;
 }

 return 0;

err:
 return 1;
}
