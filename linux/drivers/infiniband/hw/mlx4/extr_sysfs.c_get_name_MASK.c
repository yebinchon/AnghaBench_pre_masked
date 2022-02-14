
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* persist; } ;
struct TYPE_3__ {int pdev; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct mlx4_ib_dev *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{




 FUNC_1(VAR_1, VAR_3, "%.8s%.2d.%d", FUNC_0(VAR_0->dev->persist->pdev),
   VAR_2 / 8, VAR_2 % 8);
}
