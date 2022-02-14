
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {scalar_t__ first_parent_only; scalar_t__ sources; scalar_t__ exclude_promisor_objects; scalar_t__ ignore_missing_links; scalar_t__ no_walk; int include_check_data; int (* include_check ) (struct commit*,int ) ;} ;
struct prio_queue {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct commit*) ;
 scalar_t__ FUNC_3 (struct commit*,int) ;
 int FUNC_4 (struct prio_queue*,struct commit*) ;
 char** FUNC_5 (scalar_t__,struct commit*) ;
 int FUNC_6 (struct commit*,int ) ;
 int FUNC_7 (struct rev_info*,struct commit*) ;

__attribute__((used)) static int FUNC_8(struct rev_info *VAR_4, struct commit *VAR_5,
      struct commit_list **VAR_6, struct prio_queue *VAR_7)
{
 struct commit_list *VAR_8 = VAR_5->parents;
 unsigned VAR_9;

 if (VAR_5->object.flags & VAR_0)
  return 0;
 VAR_5->object.flags |= VAR_0;

 if (VAR_4->include_check &&
     !VAR_4->include_check(VAR_5, VAR_4->include_check_data))
  return 0;
 if (VAR_5->object.flags & VAR_3) {
  while (VAR_8) {
   struct commit *VAR_10 = VAR_8->item;
   VAR_8 = VAR_8->next;
   if (VAR_10)
    VAR_10->object.flags |= VAR_3;
   if (FUNC_3(VAR_10, 1) < 0)
    continue;
   if (VAR_10->parents)
    FUNC_2(VAR_10);
   if (VAR_10->object.flags & VAR_1)
    continue;
   VAR_10->object.flags |= VAR_1;
   if (VAR_6)
    FUNC_0(VAR_10, VAR_6);
   if (VAR_7)
    FUNC_4(VAR_7, VAR_10);
  }
  return 0;
 }






 FUNC_7(VAR_4, VAR_5);

 if (VAR_4->no_walk)
  return 0;

 VAR_9 = (VAR_5->object.flags & VAR_2);

 for (VAR_8 = VAR_5->parents; VAR_8; VAR_8 = VAR_8->next) {
  struct commit *VAR_11 = VAR_8->item;
  int VAR_12 = VAR_4->ignore_missing_links ||
        VAR_4->exclude_promisor_objects;
  if (FUNC_3(VAR_11, VAR_12) < 0) {
   if (VAR_4->exclude_promisor_objects &&
       FUNC_1(&VAR_11->object.oid)) {
    if (VAR_4->first_parent_only)
     break;
    continue;
   }
   return -1;
  }
  if (VAR_4->sources) {
   char **VAR_13 = FUNC_5(VAR_4->sources, VAR_11);

   if (!*VAR_13)
    *VAR_13 = *FUNC_5(VAR_4->sources, VAR_5);
  }
  VAR_11->object.flags |= VAR_9;
  if (!(VAR_11->object.flags & VAR_1)) {
   VAR_11->object.flags |= VAR_1;
   if (VAR_6)
    FUNC_0(VAR_11, VAR_6);
   if (VAR_7)
    FUNC_4(VAR_7, VAR_11);
  }
  if (VAR_4->first_parent_only)
   break;
 }
 return 0;
}
