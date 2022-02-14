
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int sorting; int (* get_next ) (TYPE_2__**,TYPE_1__*) ;int (* enqueue ) (TYPE_1__*,TYPE_2__*) ;int walking; TYPE_3__* iterator_reverse; TYPE_3__* iterator_rand; int iterator_topo; scalar_t__ limited; TYPE_3__* user_input; int did_push; } ;
typedef TYPE_1__ git_revwalk ;
struct TYPE_21__ {int seen; scalar_t__ uninteresting; } ;
typedef TYPE_2__ git_commit_list_node ;
struct TYPE_22__ {TYPE_2__* item; struct TYPE_22__* next; } ;
typedef TYPE_3__ git_commit_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__**) ;
 int * FUNC_1 (TYPE_2__*,TYPE_3__**) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__**,TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__**,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(git_revwalk *VAR_7)
{
 int VAR_8 = 0;
 git_commit_list *VAR_9, *VAR_10 = ((void*)0);
 git_commit_list_node *VAR_11;


 if (!VAR_7->did_push) {
  FUNC_3();
  return VAR_0;
 }

 for (VAR_9 = VAR_7->user_input; VAR_9; VAR_9 = VAR_9->next) {
  git_commit_list_node *VAR_12 = VAR_9->item;
  if ((VAR_8 = FUNC_2(VAR_7, VAR_12)) < 0)
   return VAR_8;

  if (VAR_12->uninteresting)
   FUNC_5(VAR_12);

  if (!VAR_12->seen) {
   VAR_12->seen = 1;
   FUNC_1(VAR_12, &VAR_10);
  }
 }

 if (VAR_7->limited && (VAR_8 = FUNC_4(&VAR_10, VAR_7, VAR_10)) < 0)
  return VAR_8;

 if (VAR_7->sorting & VAR_3) {
  VAR_8 = FUNC_6(&VAR_7->iterator_topo, VAR_7, VAR_10);
  FUNC_0(&VAR_10);

  if (VAR_8 < 0)
   return VAR_8;

  VAR_7->get_next = &VAR_5;
 } else if (VAR_7->sorting & VAR_2) {
  for (VAR_9 = VAR_10; VAR_9 && !VAR_8; VAR_9 = VAR_9->next)
   VAR_8 = VAR_7->enqueue(VAR_7, VAR_9->item);

  FUNC_0(&VAR_10);

  if (VAR_8 < 0)
   return VAR_8;
 } else {
  VAR_7->iterator_rand = VAR_10;
  VAR_7->get_next = VAR_6;
 }

 if (VAR_7->sorting & VAR_1) {

  while ((VAR_8 = VAR_7->get_next(&VAR_11, VAR_7)) == 0)
   if (FUNC_1(VAR_11, &VAR_7->iterator_reverse) == ((void*)0))
    return -1;

  if (VAR_8 != VAR_0)
   return VAR_8;

  VAR_7->get_next = &VAR_4;
 }

 VAR_7->walking = 1;
 return 0;
}
