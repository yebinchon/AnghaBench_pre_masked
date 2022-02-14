
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_type {int name; } ;
struct intel_gvt {int num_types; struct intel_vgpu_type* types; } ;
struct attribute_group {int attrs; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 struct attribute_group** VAR_2 ;
 int FUNC_1 (struct attribute_group*) ;
 struct attribute_group* FUNC_2 (int,int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_gvt *VAR_3)
{
 int VAR_4, VAR_5;
 struct intel_vgpu_type *VAR_6;
 struct attribute_group *VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_types; VAR_4++) {
  VAR_6 = &VAR_3->types[VAR_4];

  VAR_7 = FUNC_2(sizeof(struct attribute_group), VAR_0);
  if (FUNC_0(!VAR_7))
   goto unwind;

  VAR_7->name = VAR_6->name;
  VAR_7->attrs = VAR_1;
  VAR_2[VAR_4] = VAR_7;
 }

 return 1;

unwind:
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = VAR_2[VAR_5];
  FUNC_1(VAR_7);
 }

 return 0;
}
