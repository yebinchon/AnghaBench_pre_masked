
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* persist; } ;
struct TYPE_3__ {int num_vfs; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct mlx4_ib_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_0)
{
 int VAR_1;

 if (!FUNC_0(VAR_0->dev))
  return 0;

 for (VAR_1 = 0; VAR_1 <= VAR_0->dev->persist->num_vfs; ++VAR_1)
  FUNC_1(VAR_0, VAR_1);

 return 0;
}
