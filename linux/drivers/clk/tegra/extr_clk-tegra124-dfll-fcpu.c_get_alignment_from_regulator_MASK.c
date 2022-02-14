
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct rail_alignment {int step_uv; int offset_uv; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 struct regulator* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct regulator*) ;
 int FUNC_4 (struct regulator*) ;
 int FUNC_5 (struct regulator*,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0,
      struct rail_alignment *VAR_1)
{
 struct regulator *VAR_2 = FUNC_2(VAR_0, "vdd-cpu");

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->offset_uv = FUNC_5(VAR_2, 0);
 VAR_1->step_uv = FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 return 0;
}
