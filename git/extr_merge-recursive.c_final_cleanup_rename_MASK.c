
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct rename {int pair; } ;
struct TYPE_2__ {struct rename* util; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct string_list*) ;
 int FUNC_2 (struct string_list*,int) ;

__attribute__((used)) static void FUNC_3(struct string_list *VAR_0)
{
 const struct rename *VAR_1;
 int VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++) {
  VAR_1 = VAR_0->items[VAR_2].util;
  FUNC_0(VAR_1->pair);
 }
 FUNC_2(VAR_0, 1);
 FUNC_1(VAR_0);
}
