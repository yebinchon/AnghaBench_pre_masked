
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (char*,char const*,char*,char const*) ;

__attribute__((used)) static void FUNC_1(const struct string_list *VAR_0,
     const char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++)
  FUNC_0("%s%s%s", VAR_1, VAR_0->items[VAR_3].string, VAR_2);
}
