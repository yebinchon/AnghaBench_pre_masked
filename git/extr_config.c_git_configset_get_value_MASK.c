
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct config_set {int dummy; } ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (int) ;
 struct string_list* FUNC_1 (struct config_set*,char const*) ;

int FUNC_2(struct config_set *VAR_0, const char *VAR_1, const char **VAR_2)
{
 const struct string_list *VAR_3 = ((void*)0);





 VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_3)
  return 1;
 FUNC_0(VAR_3->nr > 0);
 *VAR_2 = VAR_3->items[VAR_3->nr - 1].string;
 return 0;
}
