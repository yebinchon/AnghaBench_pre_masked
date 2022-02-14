
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int min_age; int min_parents; scalar_t__ max_parents; scalar_t__ dense; scalar_t__ prune; scalar_t__ unpacked; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;
typedef enum commit_action { ____Placeholder_commit_action } commit_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct commit_list*) ;
 int FUNC_1 (struct commit*,struct rev_info*) ;
 int VAR_4 ;
 int FUNC_2 (struct rev_info*,struct commit*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct rev_info*) ;

enum commit_action FUNC_6(struct rev_info *VAR_5, struct commit *VAR_6)
{
 if (VAR_6->object.flags & VAR_0)
  return VAR_3;
 if (VAR_5->unpacked && FUNC_3(&VAR_6->object.oid))
  return VAR_3;
 if (VAR_6->object.flags & VAR_2)
  return VAR_3;
 if (VAR_5->min_age != -1 &&
     FUNC_2(VAR_5, VAR_6) > VAR_5->min_age)
   return VAR_3;
 if (VAR_5->min_parents || (VAR_5->max_parents >= 0)) {
  int VAR_7 = FUNC_0(VAR_6->parents);
  if ((VAR_7 < VAR_5->min_parents) ||
      ((VAR_5->max_parents >= 0) && (VAR_7 > VAR_5->max_parents)))
   return VAR_3;
 }
 if (!FUNC_1(VAR_6, VAR_5))
  return VAR_3;
 if (VAR_5->prune && VAR_5->dense) {

  if (VAR_6->object.flags & VAR_1) {
   int VAR_8;
   struct commit_list *VAR_9;

   if (!FUNC_5(VAR_5))
    return VAR_3;







   for (VAR_8 = 0, VAR_9 = VAR_6->parents; VAR_9; VAR_9 = VAR_9->next)
    if (FUNC_4(VAR_9->item))
     if (++VAR_8 >= 2)
      return VAR_4;
   return VAR_3;
  }
 }
 return VAR_4;
}
