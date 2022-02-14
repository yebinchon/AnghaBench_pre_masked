
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_panel {int panel; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 struct rad_panel* FUNC_3 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_device *VAR_0)
{
 struct rad_panel *VAR_1 = FUNC_3(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  FUNC_0(VAR_2, "Failed to detach from host (%d)\n",
         VAR_3);

 FUNC_1(&VAR_1->panel);

 return 0;
}
