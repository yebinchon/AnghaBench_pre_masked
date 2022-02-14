
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mipi_dsi_device {int lanes; int format; int mode_flags; int dev; } ;
struct TYPE_3__ {int * funcs; int * dev; } ;
struct feiyang {TYPE_1__ panel; void* backlight; void* reset; void* avdd; void* dvdd; struct mipi_dsi_device* dsi; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct feiyang* FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_9 (struct mipi_dsi_device*) ;
 int FUNC_10 (struct mipi_dsi_device*,struct feiyang*) ;

__attribute__((used)) static int FUNC_11(struct mipi_dsi_device *VAR_6)
{
 struct feiyang *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_10(VAR_6, VAR_7);
 VAR_7->dsi = VAR_6;

 FUNC_8(&VAR_7->panel);
 VAR_7->panel.dev = &VAR_6->dev;
 VAR_7->panel.funcs = &VAR_5;

 VAR_7->dvdd = FUNC_6(&VAR_6->dev, "dvdd");
 if (FUNC_1(VAR_7->dvdd)) {
  FUNC_0(&VAR_6->dev, "Couldn't get dvdd regulator\n");
  return FUNC_2(VAR_7->dvdd);
 }

 VAR_7->avdd = FUNC_6(&VAR_6->dev, "avdd");
 if (FUNC_1(VAR_7->avdd)) {
  FUNC_0(&VAR_6->dev, "Couldn't get avdd regulator\n");
  return FUNC_2(VAR_7->avdd);
 }

 VAR_7->reset = FUNC_3(&VAR_6->dev, "reset", VAR_2);
 if (FUNC_1(VAR_7->reset)) {
  FUNC_0(&VAR_6->dev, "Couldn't get our reset GPIO\n");
  return FUNC_2(VAR_7->reset);
 }

 VAR_7->backlight = FUNC_5(&VAR_6->dev);
 if (FUNC_1(VAR_7->backlight))
  return FUNC_2(VAR_7->backlight);

 VAR_8 = FUNC_7(&VAR_7->panel);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->mode_flags = VAR_4;
 VAR_6->format = VAR_3;
 VAR_6->lanes = 4;

 return FUNC_9(VAR_6);
}
