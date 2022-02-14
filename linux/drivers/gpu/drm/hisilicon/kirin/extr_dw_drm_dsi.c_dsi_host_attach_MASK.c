
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; } ;
struct dw_dsi {int lanes; int mode_flags; int format; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct dw_dsi* FUNC_1 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_2(struct mipi_dsi_host *VAR_1,
      struct mipi_dsi_device *VAR_2)
{
 struct dw_dsi *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->lanes < 1 || VAR_2->lanes > 4) {
  FUNC_0("dsi device params invalid\n");
  return -VAR_0;
 }

 VAR_3->lanes = VAR_2->lanes;
 VAR_3->format = VAR_2->format;
 VAR_3->mode_flags = VAR_2->mode_flags;

 return 0;
}
