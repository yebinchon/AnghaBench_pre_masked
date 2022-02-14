
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct option {struct string_list* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct string_list*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_1,
    const char *VAR_2, int VAR_3)
{
 struct string_list *VAR_4 = VAR_1->value;

 FUNC_0(VAR_3);

 VAR_0 = 1;
 FUNC_1(VAR_4, VAR_2);

 return 0;
}
