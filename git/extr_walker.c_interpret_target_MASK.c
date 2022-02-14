
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker {int (* fetch_ref ) (struct walker*,struct ref*) ;} ;
struct ref {int old_oid; } ;
struct object_id {int dummy; } ;


 struct ref* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct ref*) ;
 int FUNC_3 (char*,struct object_id*) ;
 int FUNC_4 (struct object_id*,int *) ;
 int FUNC_5 (struct walker*,struct ref*) ;

__attribute__((used)) static int FUNC_6(struct walker *VAR_0, char *VAR_1, struct object_id *VAR_2)
{
 if (!FUNC_3(VAR_1, VAR_2))
  return 0;
 if (!FUNC_1(VAR_1, 0)) {
  struct ref *VAR_3 = FUNC_0(VAR_1);
  if (!VAR_0->fetch_ref(VAR_0, VAR_3)) {
   FUNC_4(VAR_2, &VAR_3->old_oid);
   FUNC_2(VAR_3);
   return 0;
  }
  FUNC_2(VAR_3);
 }
 return -1;
}
