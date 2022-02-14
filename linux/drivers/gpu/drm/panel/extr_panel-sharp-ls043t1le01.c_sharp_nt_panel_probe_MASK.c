
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharp_nt_panel {struct mipi_dsi_device* dsi; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int dev; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sharp_nt_panel* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct mipi_dsi_device*,struct sharp_nt_panel*) ;
 int FUNC_3 (struct sharp_nt_panel*) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_device *VAR_7)
{
 struct sharp_nt_panel *VAR_8;
 int VAR_9;

 VAR_7->lanes = 2;
 VAR_7->format = VAR_3;
 VAR_7->mode_flags = VAR_5 |
   VAR_6 |
   VAR_2 |
   VAR_4;

 VAR_8 = FUNC_0(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(VAR_7, VAR_8);

 VAR_8->dsi = VAR_7;

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_1(VAR_7);
}
