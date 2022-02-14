
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct panel_simple {int base; } ;
struct panel_desc_dsi {int lanes; int format; int flags; int desc; } ;
struct of_device_id {struct panel_desc_dsi* data; } ;
struct TYPE_3__ {int of_node; } ;
struct mipi_dsi_device {TYPE_1__ dev; int lanes; int format; int mode_flags; } ;


 int VAR_0 ;
 struct panel_simple* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 struct of_device_id* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(struct mipi_dsi_device *VAR_2)
{
 const struct panel_desc_dsi *VAR_3;
 const struct of_device_id *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2->dev.of_node);
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = VAR_4->data;

 VAR_5 = FUNC_4(&VAR_2->dev, &VAR_3->desc);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->mode_flags = VAR_3->flags;
 VAR_2->format = VAR_3->format;
 VAR_2->lanes = VAR_3->lanes;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5) {
  struct panel_simple *VAR_6 = FUNC_0(&VAR_2->dev);

  FUNC_1(&VAR_6->base);
 }

 return VAR_5;
}
