
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pathspec {int nr; TYPE_2__* items; } ;
struct TYPE_4__ {int attr_match_nr; scalar_t__ attr_check; TYPE_1__* attr_match; TYPE_1__* original; TYPE_1__* match; } ;
struct TYPE_3__ {struct TYPE_3__* value; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct pathspec *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++) {
  FUNC_2(VAR_0->items[VAR_1].match);
  FUNC_2(VAR_0->items[VAR_1].original);

  for (VAR_2 = 0; VAR_2 < VAR_0->items[VAR_1].attr_match_nr; VAR_2++)
   FUNC_2(VAR_0->items[VAR_1].attr_match[VAR_2].value);
  FUNC_2(VAR_0->items[VAR_1].attr_match);

  if (VAR_0->items[VAR_1].attr_check)
   FUNC_1(VAR_0->items[VAR_1].attr_check);
 }

 FUNC_0(VAR_0->items);
 VAR_0->nr = 0;
}
