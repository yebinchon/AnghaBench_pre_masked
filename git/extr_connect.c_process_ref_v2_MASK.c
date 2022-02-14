
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct ref {struct ref* next; int old_oid; int name; int symref; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {char const* string; } ;


 struct string_list VAR_0 ;
 struct ref* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,struct object_id*) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 int FUNC_5 (struct string_list*,int ) ;
 int FUNC_6 (struct string_list*,char const*,char,int) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(const char *VAR_1, struct ref ***VAR_2)
{
 int VAR_3 = 1;
 int VAR_4 = 0;
 struct object_id VAR_5;
 struct ref *VAR_6;
 struct string_list VAR_7 = VAR_0;
 const char *VAR_8;







 if (FUNC_6(&VAR_7, VAR_1, ' ', -1) < 2) {
  VAR_3 = 0;
  goto out;
 }

 if (FUNC_3(VAR_7.items[VAR_4++].string, &VAR_5, &VAR_8) ||
     *VAR_8) {
  VAR_3 = 0;
  goto out;
 }

 VAR_6 = FUNC_0(VAR_7.items[VAR_4++].string);

 FUNC_2(&VAR_6->old_oid, &VAR_5);
 **VAR_2 = VAR_6;
 *VAR_2 = &VAR_6->next;

 for (; VAR_4 < VAR_7.nr; VAR_4++) {
  const char *VAR_9 = VAR_7.items[VAR_4].string;
  if (FUNC_4(VAR_9, "symref-target:", &VAR_9))
   VAR_6->symref = FUNC_7(VAR_9);

  if (FUNC_4(VAR_9, "peeled:", &VAR_9)) {
   struct object_id VAR_10;
   char *VAR_11;
   struct ref *VAR_12;
   if (FUNC_3(VAR_9, &VAR_10, &VAR_8) || *VAR_8) {
    VAR_3 = 0;
    goto out;
   }

   VAR_11 = FUNC_8("%s^{}", VAR_6->name);
   VAR_12 = FUNC_0(VAR_11);

   FUNC_2(&VAR_12->old_oid, &VAR_10);
   **VAR_2 = VAR_12;
   *VAR_2 = &VAR_12->next;

   FUNC_1(VAR_11);
  }
 }

out:
 FUNC_5(&VAR_7, 0);
 return VAR_3;
}
