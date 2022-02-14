
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int reverse_output_stage; int linear; int * previous_parents; scalar_t__ graph; scalar_t__ track_linear; struct commit_list* commits; scalar_t__ reverse; } ;
struct commit_list {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rev_info*) ;
 struct commit* FUNC_3 (struct rev_info*) ;
 int FUNC_4 (scalar_t__,struct commit*) ;
 struct commit* FUNC_5 (struct commit_list**) ;

struct commit *FUNC_6(struct rev_info *VAR_1)
{
 struct commit *VAR_2;
 struct commit_list *VAR_3;

 if (VAR_1->reverse) {
  VAR_3 = ((void*)0);
  while ((VAR_2 = FUNC_3(VAR_1)))
   FUNC_0(VAR_2, &VAR_3);
  VAR_1->commits = VAR_3;
  VAR_1->reverse = 0;
  VAR_1->reverse_output_stage = 1;
 }

 if (VAR_1->reverse_output_stage) {
  VAR_2 = FUNC_5(&VAR_1->commits);
  if (VAR_1->track_linear)
   VAR_1->linear = !!(VAR_2 && VAR_2->object.flags & VAR_0);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 && VAR_1->graph)
  FUNC_4(VAR_1->graph, VAR_2);
 if (!VAR_2) {
  FUNC_2(VAR_1);
  if (VAR_1->previous_parents) {
   FUNC_1(VAR_1->previous_parents);
   VAR_1->previous_parents = ((void*)0);
  }
 }
 return VAR_2;
}
