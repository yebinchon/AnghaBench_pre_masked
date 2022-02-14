
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct merge_parents {int nr; TYPE_1__* item; int alloc; } ;
struct TYPE_2__ {scalar_t__ used; int commit; int given; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_1 (struct merge_parents*,struct object_id*,struct object_id*) ;
 int FUNC_2 (int *,struct object_id*) ;

__attribute__((used)) static void FUNC_3(struct merge_parents *VAR_0,
        struct object_id *VAR_1,
        struct object_id *VAR_2)
{
 if (VAR_0->nr && FUNC_1(VAR_0, VAR_1, VAR_2))
  return;
 FUNC_0(VAR_0->item, VAR_0->nr + 1, VAR_0->alloc);
 FUNC_2(&VAR_0->item[VAR_0->nr].given, VAR_1);
 FUNC_2(&VAR_0->item[VAR_0->nr].commit, VAR_2);
 VAR_0->item[VAR_0->nr].used = 0;
 VAR_0->nr++;
}
