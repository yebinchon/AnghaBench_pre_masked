
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_graph {int num_parents; int prev_commit_index; int commit_index; scalar_t__ state; int num_columns; scalar_t__ expansion_row; struct commit* commit; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct commit_list* FUNC_0 (struct git_graph*) ;
 int FUNC_1 (struct git_graph*) ;
 struct commit_list* FUNC_2 (struct git_graph*,struct commit_list*) ;

void FUNC_3(struct git_graph *VAR_4, struct commit *VAR_5)
{
 struct commit_list *VAR_6;




 VAR_4->commit = VAR_5;




 VAR_4->num_parents = 0;
 for (VAR_6 = FUNC_0(VAR_4);
      VAR_6;
      VAR_6 = FUNC_2(VAR_4, VAR_6))
 {
  VAR_4->num_parents++;
 }






 VAR_4->prev_commit_index = VAR_4->commit_index;





 FUNC_1(VAR_4);

 VAR_4->expansion_row = 0;
 if (VAR_4->state != VAR_1)
  VAR_4->state = VAR_3;
 else if (VAR_4->num_parents >= 3 &&
   VAR_4->commit_index < (VAR_4->num_columns - 1))
  VAR_4->state = VAR_2;
 else
  VAR_4->state = VAR_0;
}
