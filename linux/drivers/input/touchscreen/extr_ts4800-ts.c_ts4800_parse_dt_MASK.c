
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ts4800_ts {int bit; int reg; int regmap; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,char*,int ) ;
 int FUNC_6 (struct device_node*,char*,int,int *) ;
 int FUNC_7 (struct device_node*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1,
      struct ts4800_ts *VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 struct device_node *VAR_4 = VAR_3->of_node;
 struct device_node *VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_5(VAR_4, "syscon", 0);
 if (!VAR_5) {
  FUNC_3(VAR_3, "no syscon property\n");
  return -VAR_0;
 }

 VAR_2->regmap = FUNC_7(VAR_5);
 FUNC_4(VAR_5);
 if (FUNC_1(VAR_2->regmap)) {
  FUNC_3(VAR_3, "cannot get parent's regmap\n");
  return FUNC_2(VAR_2->regmap);
 }

 VAR_8 = FUNC_6(VAR_4, "syscon", 1, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_3(VAR_3, "no offset in syscon\n");
  return VAR_8;
 }

 VAR_2->reg = VAR_6;

 VAR_8 = FUNC_6(VAR_4, "syscon", 2, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_3(VAR_3, "no bit in syscon\n");
  return VAR_8;
 }

 VAR_2->bit = FUNC_0(VAR_7);

 return 0;
}
