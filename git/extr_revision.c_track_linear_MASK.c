
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rev_info {int linear; struct commit_list* previous_parents; scalar_t__ reverse; scalar_t__ track_first_time; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_6__ {int flags; int oid; } ;
struct commit {int parents; TYPE_3__ object; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 int VAR_0 ;
 struct commit_list* FUNC_0 (int ) ;
 int FUNC_1 (struct commit_list*) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_1, struct commit *VAR_2)
{
 if (VAR_1->track_first_time) {
  VAR_1->linear = 1;
  VAR_1->track_first_time = 0;
 } else {
  struct commit_list *VAR_3;
  for (VAR_3 = VAR_1->previous_parents; VAR_3; VAR_3 = VAR_3->next)
   if (VAR_3->item == ((void*)0) ||
       FUNC_2(&VAR_3->item->object.oid, &VAR_2->object.oid))
    break;
  VAR_1->linear = VAR_3 != ((void*)0);
 }
 if (VAR_1->reverse) {
  if (VAR_1->linear)
   VAR_2->object.flags |= VAR_0;
 }
 FUNC_1(VAR_1->previous_parents);
 VAR_1->previous_parents = FUNC_0(VAR_2->parents);
}
