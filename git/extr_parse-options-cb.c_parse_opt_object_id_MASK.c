
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct object_id* value; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 struct object_id VAR_0 ;

int FUNC_3(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct object_id VAR_4;
 struct object_id *VAR_5 = VAR_1->value;

 if (VAR_3) {
  *VAR_5 = VAR_0;
  return 0;
 }
 if (!VAR_2)
  return -1;
 if (FUNC_2(VAR_2, &VAR_4))
  return FUNC_1(FUNC_0("malformed object name '%s'"), VAR_2);
 *VAR_5 = VAR_4;
 return 0;
}
