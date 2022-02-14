
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_engine {int num_siblings; int num_bonds; struct ve_bond* bonds; struct intel_engine_cs const** siblings; } ;
struct ve_bond {int sibling_mask; struct intel_engine_cs const* master; } ;
struct intel_engine_cs {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ve_bond* FUNC_0 (struct ve_bond*,int,int ) ;
 struct virtual_engine* FUNC_1 (struct intel_engine_cs*) ;
 struct ve_bond* FUNC_2 (struct virtual_engine*,struct intel_engine_cs const*) ;

int FUNC_3(struct intel_engine_cs *VAR_3,
         const struct intel_engine_cs *VAR_4,
         const struct intel_engine_cs *VAR_5)
{
 struct virtual_engine *VAR_6 = FUNC_1(VAR_3);
 struct ve_bond *VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_6->num_siblings; VAR_8++)
  if (VAR_5 == VAR_6->siblings[VAR_8])
   break;
 if (VAR_8 == VAR_6->num_siblings)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6, VAR_4);
 if (VAR_7) {
  VAR_7->sibling_mask |= VAR_5->mask;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_6->bonds,
   sizeof(*VAR_7) * (VAR_6->num_bonds + 1),
   VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7[VAR_6->num_bonds].master = VAR_4;
 VAR_7[VAR_6->num_bonds].sibling_mask = VAR_5->mask;

 VAR_6->bonds = VAR_7;
 VAR_6->num_bonds++;

 return 0;
}
