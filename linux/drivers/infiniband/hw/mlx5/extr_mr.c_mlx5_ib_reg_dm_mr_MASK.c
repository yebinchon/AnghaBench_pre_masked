
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct uverbs_attr_bundle {int dummy; } ;
struct mlx5_ib_dm {int type; scalar_t__ dev_addr; } ;
struct mlx5_core_dev {int pdev; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {int dummy; } ;
struct ib_dm_mr_attr {int access_flags; int length; scalar_t__ offset; } ;
struct ib_dm {int device; } ;
struct TYPE_2__ {struct mlx5_core_dev* mdev; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 struct ib_mr* FUNC_1 (struct ib_pd*,scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 struct mlx5_ib_dm* FUNC_4 (struct ib_dm*) ;

struct ib_mr *FUNC_5(struct ib_pd *VAR_5, struct ib_dm *VAR_6,
    struct ib_dm_mr_attr *VAR_7,
    struct uverbs_attr_bundle *VAR_8)
{
 struct mlx5_ib_dm *VAR_9 = FUNC_4(VAR_6);
 struct mlx5_core_dev *VAR_10 = FUNC_3(VAR_6->device)->mdev;
 u64 VAR_11 = VAR_9->dev_addr + VAR_7->offset;
 int VAR_12;

 switch (VAR_9->type) {
 case 129:
  if (VAR_7->access_flags & ~VAR_1)
   return FUNC_0(-VAR_0);

  VAR_12 = VAR_3;
  VAR_11 -= FUNC_2(VAR_10->pdev, 0);
  break;
 case 128:
 case 130:
  if (VAR_7->access_flags & ~VAR_2)
   return FUNC_0(-VAR_0);

  VAR_12 = VAR_4;
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 return FUNC_1(VAR_5, VAR_11, VAR_7->length,
     VAR_7->access_flags, VAR_12);
}
