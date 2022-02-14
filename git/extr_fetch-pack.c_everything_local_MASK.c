
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct ref {int name; struct object_id old_oid; struct ref* next; } ;
struct object {int flags; } ;
struct fetch_pack_args {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct object* FUNC_1 (int ,struct object_id const*) ;
 int FUNC_2 (struct object_id const*) ;
 int FUNC_3 (struct fetch_pack_args*,char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct fetch_pack_args *VAR_2,
       struct ref **VAR_3)
{
 struct ref *VAR_4;
 int VAR_5;

 for (VAR_5 = 1, VAR_4 = *VAR_3; VAR_4 ; VAR_4 = VAR_4->next) {
  const struct object_id *VAR_6 = &VAR_4->old_oid;
  struct object *VAR_7;

  VAR_7 = FUNC_1(VAR_1, VAR_6);
  if (!VAR_7 || !(VAR_7->flags & VAR_0)) {
   VAR_5 = 0;
   FUNC_3(VAR_2, "want %s (%s)", FUNC_2(VAR_6),
          VAR_4->name);
   continue;
  }
  FUNC_3(VAR_2, FUNC_0("already have %s (%s)"), FUNC_2(VAR_6),
         VAR_4->name);
 }

 return VAR_5;
}
