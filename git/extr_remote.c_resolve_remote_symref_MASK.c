
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int old_oid; int name; int symref; struct ref* next; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct ref *VAR_0, struct ref *VAR_1)
{
 if (!VAR_0->symref)
  return 0;
 for (; VAR_1; VAR_1 = VAR_1->next)
  if (!FUNC_1(VAR_0->symref, VAR_1->name)) {
   FUNC_0(&VAR_0->old_oid, &VAR_1->old_oid);
   return 0;
  }
 return 1;
}
