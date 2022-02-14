
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_lvds {char const* label; int data_mirror; TYPE_1__* dev; int bus_format; int height; int width; int video_mode; } ;
struct display_timing {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,struct device_node*,...) ;
 int FUNC_1 (struct device_node*,char*,struct display_timing*) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,char const**) ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct display_timing*,int *) ;

__attribute__((used)) static int FUNC_7(struct panel_lvds *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev->of_node;
 struct display_timing VAR_7;
 const char *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, "panel-timing", &VAR_7);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "%pOF: problems parsing panel-timing (%d)\n",
   VAR_6, VAR_9);
  return VAR_9;
 }

 FUNC_6(&VAR_7, &VAR_5->video_mode);

 VAR_9 = FUNC_4(VAR_6, "width-mm", &VAR_5->width);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "%pOF: invalid or missing %s DT property\n",
   VAR_6, "width-mm");
  return -VAR_1;
 }
 VAR_9 = FUNC_4(VAR_6, "height-mm", &VAR_5->height);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "%pOF: invalid or missing %s DT property\n",
   VAR_6, "height-mm");
  return -VAR_1;
 }

 FUNC_3(VAR_6, "label", &VAR_5->label);

 VAR_9 = FUNC_3(VAR_6, "data-mapping", &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "%pOF: invalid or missing %s DT property\n",
   VAR_6, "data-mapping");
  return -VAR_1;
 }

 if (!FUNC_5(VAR_8, "jeida-18")) {
  VAR_5->bus_format = VAR_2;
 } else if (!FUNC_5(VAR_8, "jeida-24")) {
  VAR_5->bus_format = VAR_3;
 } else if (!FUNC_5(VAR_8, "vesa-24")) {
  VAR_5->bus_format = VAR_4;
 } else {
  FUNC_0(VAR_5->dev, "%pOF: invalid or missing %s DT property\n",
   VAR_6, "data-mapping");
  return -VAR_0;
 }

 VAR_5->data_mirror = FUNC_2(VAR_6, "data-mirror");

 return 0;
}
