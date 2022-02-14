
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int node_guid; int node_desc; } ;
struct mlx5_ib_dev {TYPE_3__ ib_dev; TYPE_2__* mdev; } ;
struct TYPE_5__ {TYPE_1__* pdev; int rev_id; } ;
struct TYPE_4__ {int revision; } ;


 int FUNC_0 (struct mlx5_ib_dev*,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_0->ib_dev.node_desc);
 if (VAR_1)
  return VAR_1;

 VAR_0->mdev->rev_id = VAR_0->mdev->pdev->revision;

 return FUNC_1(VAR_0, &VAR_0->ib_dev.node_guid);
}
