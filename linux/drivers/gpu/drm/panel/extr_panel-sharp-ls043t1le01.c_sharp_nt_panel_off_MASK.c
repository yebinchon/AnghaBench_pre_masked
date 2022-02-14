
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharp_nt_panel {struct mipi_dsi_device* dsi; } ;
struct mipi_dsi_device {int mode_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mipi_dsi_device*) ;
 int FUNC_1 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_2(struct sharp_nt_panel *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = VAR_1->dsi;
 int VAR_3;

 VAR_2->mode_flags &= ~VAR_0;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
