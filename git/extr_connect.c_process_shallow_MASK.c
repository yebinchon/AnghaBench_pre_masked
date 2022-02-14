
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 int FUNC_4 (struct oid_array*,struct object_id*) ;
 int FUNC_5 (char const*,char*,char const**) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, int VAR_1,
      struct oid_array *VAR_2)
{
 const char *VAR_3;
 struct object_id VAR_4;

 if (!FUNC_5(VAR_0, "shallow ", &VAR_3))
  return 0;

 if (FUNC_3(VAR_3, &VAR_4))
  FUNC_2(FUNC_0("protocol error: expected shallow sha-1, got '%s'"), VAR_3);
 if (!VAR_2)
  FUNC_2(FUNC_0("repository on the other end cannot be shallow"));
 FUNC_4(VAR_2, &VAR_4);
 FUNC_1(VAR_0, VAR_1);
 return 1;
}
