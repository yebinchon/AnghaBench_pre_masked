
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dummy; } ;
struct dw_mipi_dsi_rockchip {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *) ;
 struct device* FUNC_4 (struct dw_mipi_dsi_rockchip*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(void *VAR_1,
         struct mipi_dsi_device *VAR_2)
{
 struct dw_mipi_dsi_rockchip *VAR_3 = VAR_1;
 struct device *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3->dev, &VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "Failed to register component: %d\n",
     VAR_5);
  return VAR_5;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_4, &VAR_0);
  if (VAR_5) {
   FUNC_0(VAR_4,
          "Failed to register component: %d\n",
          VAR_5);
   return VAR_5;
  }
 }

 return 0;
}
