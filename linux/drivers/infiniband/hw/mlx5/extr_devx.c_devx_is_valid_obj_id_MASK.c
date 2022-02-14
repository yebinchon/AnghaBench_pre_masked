
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int u64 ;
typedef int u16 ;
struct uverbs_attr_bundle {int driver_udata; } ;
struct TYPE_29__ {int qpn; } ;
struct TYPE_30__ {TYPE_6__ mqp; } ;
struct mlx5_ib_sq {int tisn; TYPE_7__ base; } ;
struct TYPE_27__ {int qpn; } ;
struct TYPE_28__ {TYPE_4__ mqp; } ;
struct mlx5_ib_rq {int tirn; TYPE_5__ base; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_sq sq; struct mlx5_ib_rq rq; } ;
struct TYPE_18__ {int qp_type; int qp_num; } ;
struct TYPE_31__ {int qpn; } ;
struct TYPE_32__ {TYPE_8__ mqp; } ;
struct TYPE_17__ {TYPE_9__ mdct; } ;
struct mlx5_ib_qp {int flags; TYPE_11__ ibqp; TYPE_10__ dct; struct mlx5_ib_raw_packet_qp raw_packet_qp; } ;
struct mlx5_ib_dev {TYPE_3__* mdev; } ;
struct TYPE_25__ {int res; } ;
struct mlx5_core_srq {int srqn; TYPE_2__ common; } ;
struct ib_uobject {scalar_t__ object; } ;
struct devx_obj {int obj_id; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_26__ {int issi; } ;
struct TYPE_24__ {int cqn; } ;
struct TYPE_23__ {TYPE_1__ mcq; } ;
struct TYPE_19__ {int qpn; } ;
struct TYPE_22__ {TYPE_12__ core_qp; } ;
struct TYPE_21__ {int rqtn; } ;
struct TYPE_20__ {struct mlx5_core_srq msrq; } ;


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
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;







 int FUNC_0 (void const*) ;
 int FUNC_1 (int ,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int *) ;
 TYPE_16__* FUNC_3 (scalar_t__) ;
 struct mlx5_ib_qp* FUNC_4 (scalar_t__) ;
 TYPE_15__* FUNC_5 (scalar_t__) ;
 TYPE_14__* FUNC_6 (scalar_t__) ;
 TYPE_13__* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ib_uobject*) ;

__attribute__((used)) static bool FUNC_9(struct uverbs_attr_bundle *VAR_15,
     struct ib_uobject *VAR_16, const void *VAR_17)
{
 struct mlx5_ib_dev *VAR_18 = FUNC_2(&VAR_15->driver_udata);
 u64 VAR_19 = FUNC_0(VAR_17);

 if (!VAR_19)
  return 0;

 switch (FUNC_8(VAR_16)) {
 case 132:
  return FUNC_1(VAR_1,
          FUNC_3(VAR_16->object)->mcq.cqn) ==
          VAR_19;

 case 129:
 {
  struct mlx5_core_srq *VAR_20 = &(FUNC_7(VAR_16->object)->msrq);
  u16 VAR_21;

  switch (VAR_20->common.res) {
  case 133:
   VAR_21 = VAR_11;
   break;
  case 134:
   VAR_21 = VAR_12;
   break;
  default:
   if (!VAR_18->mdev->issi)
    VAR_21 = VAR_8;
   else
    VAR_21 = VAR_4;
  }

  return FUNC_1(VAR_21,
          FUNC_7(VAR_16->object)->msrq.srqn) ==
          VAR_19;
 }

 case 131:
 {
  struct mlx5_ib_qp *VAR_22 = FUNC_4(VAR_16->object);
  enum ib_qp_type VAR_23 = VAR_22->ibqp.qp_type;

  if (VAR_23 == VAR_0 ||
      (VAR_22->flags & VAR_14)) {
   struct mlx5_ib_raw_packet_qp *VAR_24 =
        &VAR_22->raw_packet_qp;
   struct mlx5_ib_rq *VAR_25 = &VAR_24->rq;
   struct mlx5_ib_sq *VAR_26 = &VAR_24->sq;

   return (FUNC_1(VAR_5,
            VAR_25->base.mqp.qpn) == VAR_19 ||
    FUNC_1(VAR_7,
            VAR_26->base.mqp.qpn) == VAR_19 ||
    FUNC_1(VAR_9,
            VAR_25->tirn) == VAR_19 ||
    FUNC_1(VAR_10,
            VAR_26->tisn) == VAR_19);
  }

  if (VAR_23 == VAR_13)
   return FUNC_1(VAR_2,
           VAR_22->dct.mdct.mqp.qpn) == VAR_19;

  return FUNC_1(VAR_3,
          VAR_22->ibqp.qp_num) == VAR_19;
 }

 case 128:
  return FUNC_1(VAR_5,
          FUNC_5(VAR_16->object)->core_qp.qpn) ==
          VAR_19;

 case 130:
  return FUNC_1(VAR_6,
          FUNC_6(VAR_16->object)->rqtn) ==
          VAR_19;

 case 135:
  return ((struct devx_obj *)VAR_16->object)->obj_id == VAR_19;

 default:
  return 0;
 }
}
