
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct commit_graph {int dummy; } ;
struct commit {scalar_t__ graph_pos; struct tree* maybe_tree; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct tree* FUNC_1 (struct repository*,struct commit_graph*,struct commit*) ;

__attribute__((used)) static struct tree *FUNC_2(struct repository *VAR_1,
       struct commit_graph *VAR_2,
       const struct commit *VAR_3)
{
 if (VAR_3->maybe_tree)
  return VAR_3->maybe_tree;
 if (VAR_3->graph_pos == VAR_0)
  FUNC_0("get_commit_tree_in_graph_one called from non-commit-graph commit");

 return FUNC_1(VAR_1, VAR_2, (struct commit *)VAR_3);
}
