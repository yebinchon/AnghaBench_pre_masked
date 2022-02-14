
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 int FUNC_2 (struct oid_array*,struct object_id*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, struct oid_array *VAR_1)
{
 const char *VAR_2;
 if (FUNC_3(VAR_0, "have ", &VAR_2)) {
  struct object_id VAR_3;

  if (FUNC_1(VAR_2, &VAR_3))
   FUNC_0("git upload-pack: expected SHA1 object, got '%s'", VAR_2);
  FUNC_2(VAR_1, &VAR_3);
  return 1;
 }

 return 0;
}
