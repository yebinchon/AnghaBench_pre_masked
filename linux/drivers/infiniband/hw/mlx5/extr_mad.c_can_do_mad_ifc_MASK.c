
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {TYPE_3__* mdev; } ;
struct TYPE_4__ {scalar_t__ mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct TYPE_6__ {TYPE_2__* port_caps; } ;
struct TYPE_5__ {int has_smi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct mlx5_ib_dev *VAR_2, u8 VAR_3,
      struct ib_mad *VAR_4)
{
 if (VAR_4->mad_hdr.mgmt_class != VAR_1 &&
     VAR_4->mad_hdr.mgmt_class != VAR_0)
  return 1;
 return VAR_2->mdev->port_caps[VAR_3 - 1].has_smi;
}
