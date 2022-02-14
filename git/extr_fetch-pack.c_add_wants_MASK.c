
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct ref {int name; scalar_t__ exact_oid; struct object_id old_oid; struct ref* next; } ;
struct object {int flags; } ;


 int VAR_0 ;
 struct object* FUNC_0 (int ,struct object_id const*) ;
 int FUNC_1 (struct object_id const*) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (char*,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(int VAR_2, const struct ref *VAR_3, struct strbuf *VAR_4)
{
 int VAR_5 = FUNC_3("fetch", "ref-in-want", 0);

 for ( ; VAR_3 ; VAR_3 = VAR_3->next) {
  const struct object_id *VAR_6 = &VAR_3->old_oid;
  struct object *VAR_7;
  if (!VAR_2 &&
      ((VAR_7 = FUNC_0(VAR_1, VAR_6)) != ((void*)0)) &&
      (VAR_7->flags & VAR_0)) {
   continue;
  }

  if (!VAR_5 || VAR_3->exact_oid)
   FUNC_2(VAR_4, "want %s\n", FUNC_1(VAR_6));
  else
   FUNC_2(VAR_4, "want-ref %s\n", VAR_3->name);
 }
}
