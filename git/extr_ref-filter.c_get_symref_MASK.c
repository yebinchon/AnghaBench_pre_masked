
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refname; } ;
struct used_atom {TYPE_1__ u; } ;
struct ref_array_item {int symref; } ;


 char const* FUNC_0 (int *,int ) ;
 char const* FUNC_1 (char*) ;

__attribute__((used)) static const char *FUNC_2(struct used_atom *VAR_0, struct ref_array_item *VAR_1)
{
 if (!VAR_1->symref)
  return FUNC_1("");
 else
  return FUNC_0(&VAR_0->u.refname, VAR_1->symref);
}
