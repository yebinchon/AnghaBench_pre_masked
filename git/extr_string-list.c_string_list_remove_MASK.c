
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {scalar_t__ nr; TYPE_1__* items; scalar_t__ strdup_strings; } ;
struct TYPE_3__ {int util; int string; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct string_list*,char const*,int*) ;

void FUNC_3(struct string_list *VAR_0, const char *VAR_1,
   int VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3);

 if (VAR_3) {
  if (VAR_0->strdup_strings)
   FUNC_1(VAR_0->items[VAR_4].string);
  if (VAR_2)
   FUNC_1(VAR_0->items[VAR_4].util);

  VAR_0->nr--;
  FUNC_0(VAR_0->items + VAR_4, VAR_0->items + VAR_4 + 1, VAR_0->nr - VAR_4);
 }
}
