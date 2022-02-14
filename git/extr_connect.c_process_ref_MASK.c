
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* next; int old_oid; } ;
struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 struct ref* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct oid_array*,struct object_id*) ;
 int FUNC_6 (int *,struct object_id*) ;
 scalar_t__ FUNC_7 (char const*,struct object_id*,char const**) ;
 int FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_0, int VAR_1, struct ref ***VAR_2,
         unsigned int VAR_3, struct oid_array *VAR_4)
{
 struct object_id VAR_5;
 const char *VAR_6;

 if (FUNC_7(VAR_0, &VAR_5, &VAR_6))
  return 0;
 if (*VAR_6 != ' ')
  return 0;
 VAR_6++;

 if (VAR_4 && !FUNC_8(VAR_6, ".have")) {
  FUNC_5(VAR_4, &VAR_5);
 } else if (!FUNC_8(VAR_6, "capabilities^{}")) {
  FUNC_4(FUNC_0("protocol error: unexpected capabilities^{}"));
 } else if (FUNC_3(VAR_6, VAR_3)) {
  struct ref *VAR_7 = FUNC_1(VAR_6);
  FUNC_6(&VAR_7->old_oid, &VAR_5);
  **VAR_2 = VAR_7;
  *VAR_2 = &VAR_7->next;
 }
 FUNC_2(VAR_0, VAR_1);
 return 1;
}
