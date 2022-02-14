
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt {int num_types; } ;
struct attribute_group {int dummy; } ;


 struct attribute_group** VAR_0 ;
 int FUNC_0 (struct attribute_group*) ;

__attribute__((used)) static void FUNC_1(struct intel_gvt *VAR_1)
{
 int VAR_2;
 struct attribute_group *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_types; VAR_2++) {
  VAR_3 = VAR_0[VAR_2];
  VAR_0[VAR_2] = ((void*)0);
  FUNC_0(VAR_3);
 }
}
