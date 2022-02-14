
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int lanes; int mode_flags; int dev; int format; } ;
struct kingdisplay_panel {struct mipi_dsi_device* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct kingdisplay_panel* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct kingdisplay_panel*) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (struct mipi_dsi_device*,struct kingdisplay_panel*) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_device *VAR_6)
{
 struct kingdisplay_panel *VAR_7;
 int VAR_8;

 VAR_6->lanes = 4;
 VAR_6->format = VAR_2;
 VAR_6->mode_flags = VAR_4 | VAR_5 |
     VAR_3;

 VAR_7 = FUNC_0(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_3(VAR_6, VAR_7);
 VAR_7->link = VAR_6;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_2(VAR_6);
}
