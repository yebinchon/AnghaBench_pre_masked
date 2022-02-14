
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct todo_list {int nr; scalar_t__ current; struct todo_item* items; } ;
struct todo_item {scalar_t__ command; TYPE_5__* commit; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_9__ {int oid; } ;
struct TYPE_10__ {TYPE_4__ object; TYPE_3__* parents; } ;
struct TYPE_8__ {TYPE_2__* item; scalar_t__ next; } ;
struct TYPE_6__ {struct object_id oid; } ;
struct TYPE_7__ {TYPE_1__ object; } ;


 int FUNC_0 (struct todo_item*,struct todo_item*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct object_id*,int *) ;
 int FUNC_7 (struct object_id*,struct object_id*) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct todo_list*,int ) ;
 char* FUNC_10 () ;
 int FUNC_11 (struct object_id*,int ) ;
 scalar_t__ FUNC_12 (struct repository*,struct todo_list*,char const*,int *,int *,int,int ) ;

__attribute__((used)) static int FUNC_13(struct repository *VAR_2,
      struct todo_list *VAR_3,
      struct object_id *VAR_4)
{
 struct object_id *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->nr; VAR_6++) {
  struct todo_item *VAR_7 = VAR_3->items + VAR_6;

  if (VAR_7->command >= VAR_0)
   continue;
  if (VAR_7->command != VAR_1)
   break;
  if (FUNC_8(VAR_7->commit)) {
   return FUNC_2(FUNC_1("could not parse commit '%s'"),
    FUNC_5(&VAR_7->commit->object.oid));
  }
  if (!VAR_7->commit->parents)
   break;
  if (VAR_7->commit->parents->next)
   break;
  VAR_5 = &VAR_7->commit->parents->item->object.oid;
  if (!FUNC_7(VAR_5, VAR_4))
   break;
  FUNC_6(VAR_4, &VAR_7->commit->object.oid);
 }
 if (VAR_6 > 0) {
  const char *VAR_8 = FUNC_10();

  if (FUNC_12(VAR_2, VAR_3, VAR_8, ((void*)0), ((void*)0), VAR_6, 0)) {
   FUNC_3(FUNC_1("could not write to '%s'"), VAR_8);
   return -1;
  }

  FUNC_0(VAR_3->items, VAR_3->items + VAR_6, VAR_3->nr - VAR_6);
  VAR_3->nr -= VAR_6;
  VAR_3->current = 0;

  if (FUNC_4(FUNC_9(VAR_3, 0)))
   FUNC_11(VAR_4, FUNC_9(VAR_3, 0));
 }

 return 0;
}
