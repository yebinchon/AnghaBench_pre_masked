
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct patch_util {int i; int matching; scalar_t__ diff; int e; scalar_t__ diff_offset; scalar_t__ patch; } ;
struct hashmap {int dummy; } ;
typedef int hashmap_cmp_fn ;
struct TYPE_2__ {scalar_t__ string; struct patch_util* util; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct hashmap*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct hashmap*) ;
 int FUNC_4 (struct hashmap*,int ,int *,int ) ;
 struct patch_util* FUNC_5 (struct hashmap*,struct patch_util*,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct string_list *VAR_2, struct string_list *VAR_3)
{
 struct hashmap VAR_4;
 int VAR_5;

 FUNC_4(&VAR_4, (hashmap_cmp_fn)VAR_1, ((void*)0), 0);


 for (VAR_5 = 0; VAR_5 < VAR_2->nr; VAR_5++) {
  struct patch_util *VAR_6 = VAR_2->items[VAR_5].util;

  VAR_6->i = VAR_5;
  VAR_6->patch = VAR_2->items[VAR_5].string;
  VAR_6->diff = VAR_6->patch + VAR_6->diff_offset;
  FUNC_2(&VAR_6->e, FUNC_6(VAR_6->diff));
  FUNC_1(&VAR_4, &VAR_6->e);
 }


 for (VAR_5 = 0; VAR_5 < VAR_3->nr; VAR_5++) {
  struct patch_util *VAR_7 = VAR_3->items[VAR_5].util, *VAR_8;

  VAR_7->i = VAR_5;
  VAR_7->patch = VAR_3->items[VAR_5].string;
  VAR_7->diff = VAR_7->patch + VAR_7->diff_offset;
  FUNC_2(&VAR_7->e, FUNC_6(VAR_7->diff));
  VAR_8 = FUNC_5(&VAR_4, VAR_7, VAR_0, ((void*)0));
  if (VAR_8) {
   if (VAR_8->matching >= 0)
    FUNC_0("already assigned!");

   VAR_8->matching = VAR_5;
   VAR_7->matching = VAR_8->i;
  }
 }

 FUNC_3(&VAR_4);
}
