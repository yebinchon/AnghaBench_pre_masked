
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {int boundary; scalar_t__ max_count; scalar_t__ skip_count; int boundary_commits; int commits; } ;
struct object {int flags; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_3__ {int flags; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;
struct TYPE_4__ {struct object object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object*,int *,int *) ;
 int FUNC_1 (struct rev_info*) ;
 int FUNC_2 (int *) ;
 struct commit* FUNC_3 (struct rev_info*) ;
 struct commit* FUNC_4 (int *) ;

__attribute__((used)) static struct commit *FUNC_5(struct rev_info *VAR_2)
{
 struct commit *VAR_3 = ((void*)0);
 struct commit_list *VAR_4;

 if (VAR_2->boundary == 2) {






  VAR_3 = FUNC_4(&VAR_2->commits);
  if (VAR_3)
   VAR_3->object.flags |= VAR_1;
  return VAR_3;
 }
 if (VAR_2->max_count) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3) {
   while (VAR_2->skip_count > 0) {
    VAR_2->skip_count--;
    VAR_3 = FUNC_3(VAR_2);
    if (!VAR_3)
     break;
   }
  }

  if (VAR_2->max_count > 0)
   VAR_2->max_count--;
 }

 if (VAR_3)
  VAR_3->object.flags |= VAR_1;

 if (!VAR_2->boundary)
  return VAR_3;

 if (!VAR_3) {





  VAR_2->boundary = 2;





  FUNC_1(VAR_2);

  return FUNC_5(VAR_2);
 }
 for (VAR_4 = VAR_3->parents; VAR_4; VAR_4 = VAR_4->next) {
  struct object *VAR_5;
  VAR_5 = &(VAR_4->item->object);
  if (VAR_5->flags & (VAR_0 | VAR_1))
   continue;
  VAR_5->flags |= VAR_0;
  FUNC_2(&VAR_2->boundary_commits);
  FUNC_0(VAR_5, ((void*)0), &VAR_2->boundary_commits);
 }

 return VAR_3;
}
