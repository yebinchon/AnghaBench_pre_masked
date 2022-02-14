
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dp_device {int pclk; int dev; } ;
struct analogix_dp_plat_data {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rockchip_dp_device*) ;
 struct rockchip_dp_device* FUNC_4 (struct analogix_dp_plat_data*) ;

__attribute__((used)) static int FUNC_5(struct analogix_dp_plat_data *VAR_0)
{
 struct rockchip_dp_device *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->pclk);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "failed to enable pclk %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "failed to dp pre init %d\n", VAR_2);
  FUNC_1(VAR_1->pclk);
  return VAR_2;
 }

 return VAR_2;
}
