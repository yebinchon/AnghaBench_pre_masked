
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const struct string_list *VAR_0)
{
 int VAR_1;
 if (!VAR_0->nr)
  FUNC_0("-\n");
 else {
  FUNC_0("%s", VAR_0->items[0].string);
  for (VAR_1 = 1; VAR_1 < VAR_0->nr; VAR_1++)
   FUNC_0(":%s", VAR_0->items[VAR_1].string);
  FUNC_0("\n");
 }
}
