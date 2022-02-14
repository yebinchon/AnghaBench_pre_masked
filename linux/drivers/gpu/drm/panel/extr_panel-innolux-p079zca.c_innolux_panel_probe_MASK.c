
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_desc {int lanes; int format; int flags; } ;
struct mipi_dsi_device {int lanes; int format; int mode_flags; int dev; } ;


 int FUNC_0 (struct mipi_dsi_device*,struct panel_desc const*) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 struct panel_desc* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mipi_dsi_device *VAR_0)
{
 const struct panel_desc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(&VAR_0->dev);
 VAR_0->mode_flags = VAR_1->flags;
 VAR_0->format = VAR_1->format;
 VAR_0->lanes = VAR_1->lanes;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_0);
}
