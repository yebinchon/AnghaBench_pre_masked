
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct option {scalar_t__ defval; scalar_t__ value; } ;


 int FUNC_0 (struct string_list*,char const*) ;
 int FUNC_1 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0,
     const char *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_1((struct string_list *)VAR_0->value, 0);
 else if (VAR_1)
  FUNC_0((struct string_list *)VAR_0->value, VAR_1);
 else
  FUNC_0((struct string_list *)VAR_0->value,
       (const char *)VAR_0->defval);

 return 0;
}
