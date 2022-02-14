
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int name; int brightness_set; void* default_trigger; } ;
struct syscon_led {int offset; int mask; int state; TYPE_1__ cdev; struct regmap* map; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct syscon_led* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 void* FUNC_6 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (struct platform_device*,struct syscon_led*) ;
 int FUNC_9 (struct regmap*,int,int*) ;
 int FUNC_10 (struct regmap*,int,int,int) ;
 int FUNC_11 (char const*,char*) ;
 int VAR_4 ;
 struct regmap* FUNC_12 (struct device_node*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct device *VAR_8;
 struct regmap *VAR_9;
 struct syscon_led *VAR_10;
 const char *VAR_11;
 int VAR_12;

 VAR_8 = VAR_6->parent;
 if (!VAR_8) {
  FUNC_2(VAR_6, "no parent for syscon LED\n");
  return -VAR_1;
 }
 VAR_9 = FUNC_12(VAR_8->of_node);
 if (FUNC_0(VAR_9)) {
  FUNC_2(VAR_6, "no regmap for syscon LED parent\n");
  return FUNC_1(VAR_9);
 }

 VAR_10 = FUNC_4(VAR_6, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->map = VAR_9;

 if (FUNC_7(VAR_7, "offset", &VAR_10->offset))
  return -VAR_0;
 if (FUNC_7(VAR_7, "mask", &VAR_10->mask))
  return -VAR_0;
 VAR_10->cdev.name =
  FUNC_6(VAR_7, "label", ((void*)0)) ? : VAR_7->name;
 VAR_10->cdev.default_trigger =
  FUNC_6(VAR_7, "linux,default-trigger", ((void*)0));

 VAR_11 = FUNC_6(VAR_7, "default-state", ((void*)0));
 if (VAR_11) {
  if (!FUNC_11(VAR_11, "keep")) {
   u32 VAR_13;

   VAR_12 = FUNC_9(VAR_9, VAR_10->offset, &VAR_13);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_10->state = !!(VAR_13 & VAR_10->mask);
  } else if (!FUNC_11(VAR_11, "on")) {
   VAR_10->state = 1;
   VAR_12 = FUNC_10(VAR_9, VAR_10->offset,
       VAR_10->mask,
       VAR_10->mask);
   if (VAR_12 < 0)
    return VAR_12;
  } else {
   VAR_10->state = 0;
   VAR_12 = FUNC_10(VAR_9, VAR_10->offset,
       VAR_10->mask, 0);
   if (VAR_12 < 0)
    return VAR_12;
  }
 }
 VAR_10->cdev.brightness_set = VAR_4;

 VAR_12 = FUNC_5(VAR_6, &VAR_10->cdev);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_8(VAR_5, VAR_10);
 FUNC_3(VAR_6, "registered LED %s\n", VAR_10->cdev.name);

 return 0;
}
