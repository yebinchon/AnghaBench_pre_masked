
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int old_oid; int name; struct ref* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,int ,int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(const struct ref *VAR_1, const char *VAR_2)
{
 const struct ref *VAR_3;
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if (!FUNC_2(VAR_3->name, "refs/tags/"))
   continue;
  if (FUNC_0(VAR_3->name, "^{}"))
   continue;
  if (!FUNC_1(&VAR_3->old_oid))
   continue;
  FUNC_3(VAR_2, VAR_3->name, &VAR_3->old_oid, ((void*)0), 0,
      VAR_0);
 }
}
