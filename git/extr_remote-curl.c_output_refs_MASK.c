
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {char* symref; char* name; int old_oid; struct ref* next; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ref *VAR_1)
{
 struct ref *VAR_2;
 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->symref)
   FUNC_2("@%s %s\n", VAR_2->symref, VAR_2->name);
  else
   FUNC_2("%s %s\n", FUNC_1(&VAR_2->old_oid), VAR_2->name);
 }
 FUNC_2("\n");
 FUNC_0(VAR_0);
}
