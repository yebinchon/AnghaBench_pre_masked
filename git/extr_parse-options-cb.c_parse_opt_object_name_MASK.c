
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int value; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (int ,struct object_id*) ;
 int FUNC_4 (int ) ;

int FUNC_5(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct object_id VAR_3;

 if (VAR_2) {
  FUNC_4(VAR_0->value);
  return 0;
 }
 if (!VAR_1)
  return -1;
 if (FUNC_2(VAR_1, &VAR_3))
  return FUNC_1(FUNC_0("malformed object name '%s'"), VAR_1);
 FUNC_3(VAR_0->value, &VAR_3);
 return 0;
}
