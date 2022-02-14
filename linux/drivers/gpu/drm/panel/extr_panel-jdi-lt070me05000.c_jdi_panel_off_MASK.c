
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct mipi_dsi_device {int mode_flags; struct device dev; } ;
struct jdi_panel {struct mipi_dsi_device* dsi; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct jdi_panel *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = VAR_1->dsi;
 struct device *VAR_3 = &VAR_1->dsi->dev;
 int VAR_4;

 VAR_2->mode_flags &= ~VAR_0;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0)
  FUNC_0(VAR_3, "failed to set display off: %d\n", VAR_4);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  FUNC_0(VAR_3, "failed to enter sleep mode: %d\n", VAR_4);

 FUNC_3(100);
}
