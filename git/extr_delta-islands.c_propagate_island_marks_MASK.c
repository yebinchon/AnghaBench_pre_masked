
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct island_bitmap {int dummy; } ;
struct commit_list {TYPE_1__* item; struct commit_list* next; } ;
struct TYPE_5__ {int oid; } ;
struct commit {struct commit_list* parents; TYPE_2__ object; } ;
typedef scalar_t__ khiter_t ;
struct TYPE_6__ {int object; } ;
struct TYPE_4__ {int object; } ;


 TYPE_3__* FUNC_0 (struct commit*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct island_bitmap* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct commit*) ;
 int FUNC_5 (int *,struct island_bitmap*) ;

void FUNC_6(struct commit *VAR_1)
{
 khiter_t VAR_2 = FUNC_2(VAR_0, VAR_1->object.oid);

 if (VAR_2 < FUNC_1(VAR_0)) {
  struct commit_list *VAR_3;
  struct island_bitmap *VAR_4 = FUNC_3(VAR_0, VAR_2);

  FUNC_4(VAR_1);
  FUNC_5(&FUNC_0(VAR_1)->object, VAR_4);
  for (VAR_3 = VAR_1->parents; VAR_3; VAR_3 = VAR_3->next)
   FUNC_5(&VAR_3->item->object, VAR_4);
 }
}
