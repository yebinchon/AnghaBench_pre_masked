
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u8 ;
struct TYPE_13__ {TYPE_1__* demux; } ;
struct mlx4_ib_dev {TYPE_8__* dev; TYPE_2__ sriov; } ;
struct ib_wc {int wc_flags; TYPE_7__* qp; } ;
struct ib_sa_mad {int dummy; } ;
struct TYPE_16__ {int mgmt_class; int method; int tid; } ;
struct ib_mad {TYPE_5__ mad_hdr; } ;
struct TYPE_14__ {scalar_t__ interface_id; scalar_t__ subnet_prefix; } ;
struct TYPE_15__ {TYPE_3__ global; int raw; } ;
struct ib_grh {TYPE_4__ dgid; } ;
struct ib_device {int dummy; } ;
struct TYPE_17__ {int sqp_demux; } ;
struct TYPE_19__ {TYPE_6__ caps; } ;
struct TYPE_18__ {int qp_type; } ;
struct TYPE_12__ {int subnet_prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ib_grh*,union ib_gid*,union ib_gid*) ;
 int FUNC_3 (TYPE_8__*,int,int ,int*) ;
 scalar_t__ FUNC_4 (struct ib_device*,int,int*,struct ib_mad*) ;
 int FUNC_5 (struct ib_device*,int,int,struct ib_sa_mad*) ;
 int FUNC_6 (struct ib_device*,int,scalar_t__) ;
 int FUNC_7 (struct mlx4_ib_dev*,int,int,int ,struct ib_wc*,struct ib_grh*,struct ib_mad*) ;
 int FUNC_8 (struct ib_device*,char*,...) ;
 scalar_t__ FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_8__*,int,int) ;
 int FUNC_12 (char*,int,int,...) ;
 scalar_t__ FUNC_13 (struct ib_device*,int) ;
 struct mlx4_ib_dev* FUNC_14 (struct ib_device*) ;

__attribute__((used)) static int FUNC_15(struct ib_device *VAR_8, u8 VAR_9,
   struct ib_wc *VAR_10, struct ib_grh *VAR_11,
   struct ib_mad *VAR_12)
{
 struct mlx4_ib_dev *VAR_13 = FUNC_14(VAR_8);
 int VAR_14, VAR_15;
 int VAR_16 = -1;
 u8 *VAR_17;
 int VAR_18 = 0;

 if (FUNC_13(VAR_8, VAR_9) == VAR_3)
  VAR_18 = 0;
 else
  VAR_18 = 1;

 if (VAR_18) {
  union ib_gid VAR_19;
  union ib_gid VAR_20;

  if (FUNC_2(VAR_11, &VAR_20, &VAR_19))
   return -VAR_0;
  if (!(VAR_10->wc_flags & VAR_7)) {
   FUNC_8(VAR_8, "RoCE grh not present.\n");
   return -VAR_0;
  }
  if (VAR_12->mad_hdr.mgmt_class != 132) {
   FUNC_8(VAR_8, "RoCE mgmt class is not CM\n");
   return -VAR_0;
  }
  VAR_14 = FUNC_3(VAR_13->dev, VAR_9, VAR_19.raw, &VAR_16);
  if (VAR_14 && FUNC_9(VAR_13->dev)) {
   VAR_15 = (VAR_9 == 1) ? 2 : 1;
   VAR_14 = FUNC_3(VAR_13->dev, VAR_15, VAR_19.raw, &VAR_16);
   if (!VAR_14) {
    VAR_9 = VAR_15;
    FUNC_12("resolved slave %d from gid %pI6 wire port %d other %d\n",
      VAR_16, VAR_11->dgid.raw, VAR_9, VAR_15);
   }
  }
  if (VAR_14) {
   FUNC_8(VAR_8, "failed matching grh\n");
   return -VAR_1;
  }
  if (VAR_16 >= VAR_13->dev->caps.sqp_demux) {
   FUNC_8(VAR_8, "slave id: %d is bigger than allowed:%d\n",
         VAR_16, VAR_13->dev->caps.sqp_demux);
   return -VAR_1;
  }

  if (FUNC_4(VAR_8, VAR_9, ((void*)0), VAR_12))
   return 0;

  VAR_14 = FUNC_7(VAR_13, VAR_16, VAR_9, VAR_10->qp->qp_type, VAR_10, VAR_11, VAR_12);
  if (VAR_14)
   FUNC_12("failed sending to slave %d via tunnel qp (%d)\n",
     VAR_16, VAR_14);
  return 0;
 }


 VAR_16 = FUNC_10(VAR_13->dev);


 if (VAR_12->mad_hdr.method & 0x80) {
  VAR_17 = (u8 *) &VAR_12->mad_hdr.tid;
  VAR_16 = *VAR_17;
  if (VAR_16 != 255)
   *VAR_17 = 0;
 }


 if (VAR_10->wc_flags & VAR_7) {
  if (VAR_11->dgid.global.interface_id ==
   FUNC_1(VAR_6) &&
      VAR_11->dgid.global.subnet_prefix == FUNC_1(
   FUNC_0(&VAR_13->sriov.demux[VAR_9 - 1].subnet_prefix))) {
   VAR_16 = 0;
  } else {
   VAR_16 = FUNC_6(VAR_8, VAR_9,
            VAR_11->dgid.global.interface_id);
   if (VAR_16 < 0) {
    FUNC_8(VAR_8, "failed matching grh\n");
    return -VAR_1;
   }
  }
 }

 switch (VAR_12->mad_hdr.mgmt_class) {
 case 128:
 case 129:

  if (VAR_16 != 255 && VAR_16 != FUNC_10(VAR_13->dev)) {
   if (!FUNC_11(VAR_13->dev, VAR_16, VAR_9))
    return -VAR_2;

   if (!(VAR_12->mad_hdr.method & VAR_5)) {
    FUNC_8(VAR_8, "demux QP0. rejecting unsolicited mad for slave %d class 0x%x, method 0x%x\n",
          VAR_16, VAR_12->mad_hdr.mgmt_class,
          VAR_12->mad_hdr.method);
    return -VAR_0;
   }
  }
  break;
 case 130:
  if (FUNC_5(VAR_8, VAR_9, VAR_16,
          (struct ib_sa_mad *) VAR_12))
   return 0;
  break;
 case 132:
  if (FUNC_4(VAR_8, VAR_9, &VAR_16, VAR_12))
   return 0;
  break;
 case 131:
  if (VAR_12->mad_hdr.method != VAR_4)
   return 0;
  break;
 default:

  if (VAR_16 != FUNC_10(VAR_13->dev)) {
   FUNC_12("dropping unsupported ingress mad from class:%d "
     "for slave:%d\n", VAR_12->mad_hdr.mgmt_class, VAR_16);
   return 0;
  }
 }

 if (VAR_16 >= VAR_13->dev->caps.sqp_demux) {
  FUNC_8(VAR_8, "slave id: %d is bigger than allowed:%d\n",
        VAR_16, VAR_13->dev->caps.sqp_demux);
  return -VAR_1;
 }

 VAR_14 = FUNC_7(VAR_13, VAR_16, VAR_9, VAR_10->qp->qp_type, VAR_10, VAR_11, VAR_12);
 if (VAR_14)
  FUNC_12("failed sending to slave %d via tunnel qp (%d)\n",
    VAR_16, VAR_14);
 return 0;
}
