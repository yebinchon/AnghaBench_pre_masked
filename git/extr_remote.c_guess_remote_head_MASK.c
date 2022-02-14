
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {char* symref; struct ref* next; int old_oid; int name; } ;


 struct ref* FUNC_0 (struct ref const*) ;
 struct ref const* FUNC_1 (struct ref const*,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,char*) ;

struct ref *FUNC_4(const struct ref *VAR_0,
         const struct ref *VAR_1,
         int VAR_2)
{
 const struct ref *VAR_3;
 struct ref *VAR_4 = ((void*)0);
 struct ref **VAR_5 = &VAR_4;

 if (!VAR_0)
  return ((void*)0);






 if (VAR_0->symref)
  return FUNC_0(FUNC_1(VAR_1, VAR_0->symref));


 if (!VAR_2) {
  VAR_3 = FUNC_1(VAR_1, "refs/heads/master");
  if (VAR_3 && FUNC_2(&VAR_3->old_oid, &VAR_0->old_oid))
   return FUNC_0(VAR_3);
 }


 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3 != VAR_0 &&
      FUNC_3(VAR_3->name, "refs/heads/") &&
      FUNC_2(&VAR_3->old_oid, &VAR_0->old_oid)) {
   *VAR_5 = FUNC_0(VAR_3);
   VAR_5 = &((*VAR_5)->next);
   if (!VAR_2)
    break;
  }
 }

 return VAR_4;
}
