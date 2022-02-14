
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct option {struct string_list* value; } ;


 int FUNC_0 (struct string_list*,char const*) ;
 int FUNC_1 (struct string_list*,int ) ;

int FUNC_2(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct string_list *VAR_3 = VAR_0->value;

 if (VAR_2) {
  FUNC_1(VAR_3, 0);
  return 0;
 }

 if (!VAR_1)
  return -1;

 FUNC_0(VAR_3, VAR_1);
 return 0;
}
