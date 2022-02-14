
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dst_mac; } ;
struct TYPE_7__ {TYPE_2__ val; } ;
union ib_flow_spec {scalar_t__ type; TYPE_3__ eth; } ;
typedef int u64 ;
struct TYPE_5__ {scalar_t__ tunnel_offload_mode; scalar_t__ dmfs_high_steer_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct ib_qp {int qp_num; int device; } ;
struct ib_flow_attr {int num_of_specs; int priority; int port; } ;
struct TYPE_8__ {struct mlx4_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,int ,int ,int ,int,int *) ;
 TYPE_4__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ib_qp *VAR_4, struct ib_flow_attr *VAR_5,
        u64 *VAR_6)
{
 void *VAR_7;
 union ib_flow_spec *VAR_8;
 struct mlx4_dev *VAR_9 = FUNC_1(VAR_4->device)->dev;
 int VAR_10 = 0;

 if (VAR_9->caps.tunnel_offload_mode != VAR_3 ||
     VAR_9->caps.dmfs_high_steer_mode == VAR_2)
  return 0;

 VAR_7 = VAR_5 + 1;
 VAR_8 = (union ib_flow_spec *)VAR_7;

 if (VAR_8->type != VAR_0 || VAR_5->num_of_specs != 1)
  return 0;

 VAR_10 = FUNC_0(FUNC_1(VAR_4->device)->dev, VAR_8->eth.val.dst_mac,
        VAR_5->port, VAR_4->qp_num,
        VAR_1 | (VAR_5->priority & 0xff),
        VAR_6);
 return VAR_10;
}
