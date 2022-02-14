
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct versatile_panel_type {scalar_t__ ib2; int name; int magic; } ;
struct TYPE_3__ {int * funcs; struct device* dev; } ;
struct versatile_panel {TYPE_1__ panel; struct regmap* ib2_map; struct versatile_panel_type const* panel_type; struct regmap* map; struct device* dev; } ;
struct regmap {int dummy; } ;
struct device {int of_node; struct device* parent; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct versatile_panel_type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct versatile_panel* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct regmap*,int ,int *) ;
 struct regmap* FUNC_9 (int ) ;
 struct regmap* FUNC_10 (char*) ;
 int VAR_5 ;
 struct versatile_panel_type* VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct versatile_panel *VAR_9;
 struct device *VAR_10;
 struct regmap *VAR_11;
 int VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_10 = VAR_8->parent;
 if (!VAR_10) {
  FUNC_3(VAR_8, "no parent for versatile panel\n");
  return -VAR_0;
 }
 VAR_11 = FUNC_9(VAR_10->of_node);
 if (FUNC_1(VAR_11)) {
  FUNC_3(VAR_8, "no regmap for versatile panel parent\n");
  return FUNC_2(VAR_11);
 }

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_12 = FUNC_8(VAR_11, VAR_3, &VAR_13);
 if (VAR_12) {
  FUNC_3(VAR_8, "cannot access syscon regs\n");
  return VAR_12;
 }

 VAR_13 &= VAR_4;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_6); VAR_14++) {
  const struct versatile_panel_type *VAR_15;

  VAR_15 = &VAR_6[VAR_14];
  if (VAR_15->magic == VAR_13) {
   VAR_9->panel_type = VAR_15;
   break;
  }
 }


 if (VAR_14 == FUNC_0(VAR_6)) {
  FUNC_4(VAR_8, "no panel detected\n");
  return -VAR_0;
 }

 FUNC_4(VAR_8, "detected: %s\n", VAR_9->panel_type->name);
 VAR_9->dev = VAR_8;
 VAR_9->map = VAR_11;


 if (VAR_9->panel_type->ib2) {
  VAR_9->ib2_map = FUNC_10(
   "arm,versatile-ib2-syscon");
  if (FUNC_1(VAR_9->ib2_map))
   VAR_9->ib2_map = ((void*)0);
  else
   FUNC_4(VAR_8, "panel mounted on IB2 daughterboard\n");
 }

 FUNC_7(&VAR_9->panel);
 VAR_9->panel.dev = VAR_8;
 VAR_9->panel.funcs = &VAR_5;

 return FUNC_6(&VAR_9->panel);
}
