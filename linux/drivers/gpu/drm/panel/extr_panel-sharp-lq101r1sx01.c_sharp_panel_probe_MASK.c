
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sharp_panel {struct mipi_dsi_device* link1; struct mipi_dsi_device* link2; } ;
struct TYPE_3__ {int of_node; } ;
struct mipi_dsi_device {int lanes; TYPE_1__ dev; int mode_flags; int format; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sharp_panel* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct mipi_dsi_device*,struct sharp_panel*) ;
 struct mipi_dsi_device* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct sharp_panel*) ;
 int FUNC_8 (struct sharp_panel*) ;

__attribute__((used)) static int FUNC_9(struct mipi_dsi_device *VAR_5)
{
 struct mipi_dsi_device *VAR_6 = ((void*)0);
 struct sharp_panel *VAR_7;
 struct device_node *VAR_8;
 int VAR_9;

 VAR_5->lanes = 4;
 VAR_5->format = VAR_3;
 VAR_5->mode_flags = VAR_4;


 VAR_8 = FUNC_5(VAR_5->dev.of_node, "link2", 0);
 if (VAR_8) {
  VAR_6 = FUNC_3(VAR_8);
  FUNC_4(VAR_8);

  if (!VAR_6)
   return -VAR_1;
 }


 if (VAR_6) {
  VAR_7 = FUNC_0(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
  if (!VAR_7) {
   FUNC_6(&VAR_6->dev);
   return -VAR_0;
  }

  FUNC_2(VAR_5, VAR_7);

  VAR_7->link2 = VAR_6;
  VAR_7->link1 = VAR_5;

  VAR_9 = FUNC_7(VAR_7);
  if (VAR_9 < 0) {
   FUNC_6(&VAR_6->dev);
   return VAR_9;
  }
 }

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 < 0) {
  if (VAR_6)
   FUNC_8(VAR_7);

  return VAR_9;
 }

 return 0;
}
