
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refname; } ;
struct used_atom {TYPE_1__ u; } ;
struct ref_array_item {int kind; int refname; } ;


 int VAR_0 ;
 char const* FUNC_0 () ;
 char const* FUNC_1 (int *,int ) ;

__attribute__((used)) static const char *FUNC_2(struct used_atom *VAR_1, struct ref_array_item *VAR_2)
{
 if (VAR_2->kind & VAR_0)
  return FUNC_0();
 return FUNC_1(&VAR_1->u.refname, VAR_2->refname);
}
