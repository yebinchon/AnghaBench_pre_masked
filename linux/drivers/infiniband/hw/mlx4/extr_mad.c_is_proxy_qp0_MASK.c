
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_3__ {int base_proxy_sqpn; } ;
struct TYPE_4__ {TYPE_1__ phys_caps; } ;



__attribute__((used)) static int FUNC_0(struct mlx4_ib_dev *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->dev->phys_caps.base_proxy_sqpn + 8 * VAR_2;

 return (VAR_1 >= VAR_3 && VAR_1 <= VAR_3 + 1);
}
