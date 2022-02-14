
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_field {int dummy; } ;
struct reg_field {int reg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int syscfg_eng; struct device* cpu; } ;


 scalar_t__ FUNC_0 (struct regmap_field*) ;
 int FUNC_1 (struct regmap_field*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct regmap_field* FUNC_3 (struct device*,int ,struct reg_field) ;
 int FUNC_4 (struct regmap_field*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(const struct reg_field *VAR_1,
       int VAR_2, int VAR_3)
{
 struct regmap_field *VAR_4;
 struct reg_field VAR_5 = VAR_1[VAR_3];
 struct device *VAR_6 = VAR_0.cpu;
 unsigned int VAR_7;
 int VAR_8;

 VAR_5.reg = VAR_2;
 VAR_4 = FUNC_3(VAR_6,
            VAR_0.syscfg_eng,
            VAR_5);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_6, "Failed to allocate reg field\n");
  return FUNC_1(VAR_4);
 }

 VAR_8 = FUNC_4(VAR_4, &VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_6, "Failed to read %s code\n",
   VAR_3 ? "SUBSTRATE" : "PCODE");
  return VAR_8;
 }

 return VAR_7;
}
