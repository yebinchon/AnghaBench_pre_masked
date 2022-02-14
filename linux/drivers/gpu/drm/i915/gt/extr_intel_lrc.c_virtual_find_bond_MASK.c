
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_engine {int num_bonds; struct ve_bond* bonds; } ;
struct ve_bond {struct intel_engine_cs const* master; } ;
struct intel_engine_cs {int dummy; } ;



__attribute__((used)) static struct ve_bond *
FUNC_0(struct virtual_engine *VAR_0,
    const struct intel_engine_cs *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_bonds; VAR_2++) {
  if (VAR_0->bonds[VAR_2].master == VAR_1)
   return &VAR_0->bonds[VAR_2];
 }

 return ((void*)0);
}
