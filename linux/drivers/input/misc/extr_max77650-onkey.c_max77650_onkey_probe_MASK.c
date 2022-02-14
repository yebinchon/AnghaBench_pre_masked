
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct max77650_onkey {TYPE_2__* input; int code; } ;
struct TYPE_5__ {int bustype; } ;
struct TYPE_6__ {char* name; char* phys; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct regmap* FUNC_0 (struct device*,int *) ;
 scalar_t__ FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int *) ;
 TYPE_2__* FUNC_3 (struct device*) ;
 struct max77650_onkey* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int ,int ,char*,struct max77650_onkey*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,unsigned int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct platform_device*,char*) ;
 int FUNC_9 (struct regmap*,int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;
 struct max77650_onkey *VAR_19;
 struct device *VAR_20, *VAR_21;
 struct regmap *VAR_22;
 unsigned int VAR_23;

 VAR_20 = &VAR_14->dev;
 VAR_21 = VAR_20->parent;

 VAR_22 = FUNC_0(VAR_21, ((void*)0));
 if (!VAR_22)
  return -VAR_1;

 VAR_19 = FUNC_4(VAR_20, sizeof(*VAR_19), VAR_5);
 if (!VAR_19)
  return -VAR_2;

 VAR_17 = FUNC_2(VAR_20, "linux,code", &VAR_19->code);
 if (VAR_17)
  VAR_19->code = VAR_7;

 if (FUNC_1(VAR_20, "maxim,onkey-slide")) {
  VAR_18 = VAR_10;
  VAR_23 = VAR_4;
 } else {
  VAR_18 = VAR_9;
  VAR_23 = VAR_3;
 }

 VAR_17 = FUNC_9(VAR_22, VAR_11,
       VAR_8, VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_16 = FUNC_8(VAR_14, "nEN_F");
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15 = FUNC_8(VAR_14, "nEN_R");
 if (VAR_15 < 0)
  return VAR_15;

 VAR_19->input = FUNC_3(VAR_20);
 if (!VAR_19->input)
  return -VAR_2;

 VAR_19->input->name = "max77650_onkey";
 VAR_19->input->phys = "max77650_onkey/input0";
 VAR_19->input->id.bustype = VAR_0;
 FUNC_7(VAR_19->input, VAR_23, VAR_19->code);

 VAR_17 = FUNC_5(VAR_20, VAR_16, VAR_12,
          VAR_6, "onkey-down", VAR_19);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_5(VAR_20, VAR_15, VAR_13,
          VAR_6, "onkey-up", VAR_19);
 if (VAR_17 < 0)
  return VAR_17;

 return FUNC_6(VAR_19->input);
}
