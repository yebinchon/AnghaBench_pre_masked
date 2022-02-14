
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;
 struct regmap* FUNC_3 (char*) ;

void FUNC_4(struct device *VAR_2)
{
 struct regmap *VAR_3;





 VAR_3 =
  FUNC_3("stericsson,nomadik-pmu");
 if (FUNC_0(VAR_3))
  return;






 FUNC_2(VAR_3,
      VAR_1,
      VAR_0,
      0);
 FUNC_1(VAR_2, "set Nomadik PMU mux to CLCD mode\n");
}
