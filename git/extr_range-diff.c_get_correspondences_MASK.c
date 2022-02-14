
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct patch_util {int matching; int diffsize; int diff; } ;
struct TYPE_2__ {struct patch_util* util; } ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int*,int*,int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct string_list *VAR_1, struct string_list *VAR_2,
    int VAR_3)
{
 int VAR_4 = VAR_1->nr + VAR_2->nr;
 int *VAR_5, VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_5, FUNC_4(VAR_4, VAR_4));
 FUNC_0(VAR_7, VAR_4);
 FUNC_0(VAR_8, VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_1->nr; VAR_9++) {
  struct patch_util *VAR_11 = VAR_1->items[VAR_9].util;

  for (VAR_10 = 0; VAR_10 < VAR_2->nr; VAR_10++) {
   struct patch_util *VAR_12 = VAR_2->items[VAR_10].util;

   if (VAR_11->matching == VAR_10)
    VAR_6 = 0;
   else if (VAR_11->matching < 0 && VAR_12->matching < 0)
    VAR_6 = FUNC_2(VAR_11->diff, VAR_12->diff);
   else
    VAR_6 = VAR_0;
   VAR_5[VAR_9 + VAR_4 * VAR_10] = VAR_6;
  }

  VAR_6 = VAR_11->matching < 0 ?
   VAR_11->diffsize * VAR_3 / 100 : VAR_0;
  for (VAR_10 = VAR_2->nr; VAR_10 < VAR_4; VAR_10++)
   VAR_5[VAR_9 + VAR_4 * VAR_10] = VAR_6;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2->nr; VAR_10++) {
  struct patch_util *VAR_13 = VAR_2->items[VAR_10].util;

  VAR_6 = VAR_13->matching < 0 ?
   VAR_13->diffsize * VAR_3 / 100 : VAR_0;
  for (VAR_9 = VAR_1->nr; VAR_9 < VAR_4; VAR_9++)
   VAR_5[VAR_9 + VAR_4 * VAR_10] = VAR_6;
 }

 for (VAR_9 = VAR_1->nr; VAR_9 < VAR_4; VAR_9++)
  for (VAR_10 = VAR_2->nr; VAR_10 < VAR_4; VAR_10++)
   VAR_5[VAR_9 + VAR_4 * VAR_10] = 0;

 FUNC_1(VAR_4, VAR_4, VAR_5, VAR_7, VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_1->nr; VAR_9++)
  if (VAR_7[VAR_9] >= 0 && VAR_7[VAR_9] < VAR_2->nr) {
   struct patch_util *VAR_14 = VAR_1->items[VAR_9].util;
   struct patch_util *VAR_15 = VAR_2->items[VAR_7[VAR_9]].util;

   VAR_14->matching = VAR_7[VAR_9];
   VAR_15->matching = VAR_9;
  }

 FUNC_3(VAR_5);
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
}
