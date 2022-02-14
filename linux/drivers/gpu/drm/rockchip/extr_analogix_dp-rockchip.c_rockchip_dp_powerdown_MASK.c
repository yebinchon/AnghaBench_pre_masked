
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dp_device {int pclk; } ;
struct analogix_dp_plat_data {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rockchip_dp_device* FUNC_1 (struct analogix_dp_plat_data*) ;

__attribute__((used)) static int FUNC_2(struct analogix_dp_plat_data *VAR_0)
{
 struct rockchip_dp_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pclk);

 return 0;
}
