
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd101t2587_panel {int base; int default_mode; struct mipi_dsi_device* dsi; } ;
struct of_device_id {int data; } ;
struct TYPE_2__ {int of_node; } ;
struct mipi_dsi_device {int lanes; int mode_flags; TYPE_1__ dev; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct osd101t2587_panel* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (struct mipi_dsi_device*,struct osd101t2587_panel*) ;
 struct of_device_id* FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct osd101t2587_panel*) ;

__attribute__((used)) static int FUNC_6(struct mipi_dsi_device *VAR_9)
{
 struct osd101t2587_panel *VAR_10;
 const struct of_device_id *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_8, VAR_9->dev.of_node);
 if (!VAR_11)
  return -VAR_0;

 VAR_9->lanes = 4;
 VAR_9->format = VAR_3;
 VAR_9->mode_flags = VAR_5 |
     VAR_6 |
     VAR_7 |
     VAR_4;

 VAR_10 = FUNC_0(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_3(VAR_9, VAR_10);

 VAR_10->dsi = VAR_9;
 VAR_10->default_mode = VAR_11->data;

 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_9);
 if (VAR_12)
  FUNC_1(&VAR_10->base);

 return VAR_12;
}
