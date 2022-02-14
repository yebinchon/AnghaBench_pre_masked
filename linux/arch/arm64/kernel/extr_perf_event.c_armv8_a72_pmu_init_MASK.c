
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_pmu {char* name; int ** attr_groups; int map_event; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arm_pmu*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct arm_pmu *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->name = "armv8_cortex_a72";
 VAR_5->map_event = VAR_2;
 VAR_5->attr_groups[VAR_0] =
  &VAR_3;
 VAR_5->attr_groups[VAR_1] =
  &VAR_4;

 return 0;
}
