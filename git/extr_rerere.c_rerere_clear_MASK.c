
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct rerere_id {int dummy; } ;
struct repository {int dummy; } ;
struct TYPE_2__ {struct rerere_id* util; } ;


 int FUNC_0 (struct repository*) ;
 int FUNC_1 (struct rerere_id*) ;
 int FUNC_2 (struct rerere_id*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct repository*,struct string_list*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rerere_id*) ;
 int VAR_0 ;

void FUNC_8(struct repository *VAR_1, struct string_list *VAR_2)
{
 int VAR_3;

 if (FUNC_5(VAR_1, VAR_2, 0) < 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr; VAR_3++) {
  struct rerere_id *VAR_4 = VAR_2->items[VAR_3].util;
  if (!FUNC_1(VAR_4)) {
   FUNC_7(VAR_4);
   FUNC_3(FUNC_2(VAR_4, ((void*)0)));
  }
 }
 FUNC_6(FUNC_0(VAR_1));
 FUNC_4(&VAR_0);
}
