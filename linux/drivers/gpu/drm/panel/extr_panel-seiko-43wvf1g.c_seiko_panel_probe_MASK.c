
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seiko_panel_desc {int dummy; } ;
struct TYPE_3__ {int * funcs; struct device* dev; } ;
struct seiko_panel {int enabled; int prepared; TYPE_1__ base; int backlight; void* avdd; void* dvdd; struct seiko_panel_desc const* desc; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,struct seiko_panel*) ;
 struct seiko_panel* FUNC_3 (struct device*,int,int ) ;
 void* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (int ,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4,
     const struct seiko_panel_desc *VAR_5)
{
 struct device_node *VAR_6;
 struct seiko_panel *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_4, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->enabled = 0;
 VAR_7->prepared = 0;
 VAR_7->desc = VAR_5;

 VAR_7->dvdd = FUNC_4(VAR_4, "dvdd");
 if (FUNC_0(VAR_7->dvdd))
  return FUNC_1(VAR_7->dvdd);

 VAR_7->avdd = FUNC_4(VAR_4, "avdd");
 if (FUNC_0(VAR_7->avdd))
  return FUNC_1(VAR_7->avdd);

 VAR_6 = FUNC_9(VAR_4->of_node, "backlight", 0);
 if (VAR_6) {
  VAR_7->backlight = FUNC_7(VAR_6);
  FUNC_8(VAR_6);

  if (!VAR_7->backlight)
   return -VAR_1;
 }

 FUNC_6(&VAR_7->base);
 VAR_7->base.dev = VAR_4;
 VAR_7->base.funcs = &VAR_3;

 VAR_8 = FUNC_5(&VAR_7->base);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(VAR_4, VAR_7);

 return 0;
}
