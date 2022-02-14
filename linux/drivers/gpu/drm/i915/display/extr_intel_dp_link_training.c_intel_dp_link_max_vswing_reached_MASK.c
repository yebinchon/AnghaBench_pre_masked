
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int lane_count; int* train_set; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct intel_dp *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->lane_count; VAR_2++)
  if ((VAR_1->train_set[VAR_2] &
       VAR_0) == 0)
   return 0;

 return 1;
}
