
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int hash; } ;
struct commit_graph {scalar_t__ num_commits_in_base; unsigned char* chunk_commit_data; struct commit_graph* base_graph; } ;
struct commit {scalar_t__ graph_pos; struct tree* maybe_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (struct repository*,struct object_id*) ;
 int FUNC_2 (struct commit*,int ) ;

__attribute__((used)) static struct tree *FUNC_3(struct repository *VAR_1,
      struct commit_graph *VAR_2,
      struct commit *VAR_3)
{
 struct object_id VAR_4;
 const unsigned char *VAR_5;

 while (VAR_3->graph_pos < VAR_2->num_commits_in_base)
  VAR_2 = VAR_2->base_graph;

 VAR_5 = VAR_2->chunk_commit_data +
   VAR_0 * (VAR_3->graph_pos - VAR_2->num_commits_in_base);

 FUNC_0(VAR_4.hash, VAR_5);
 FUNC_2(VAR_3, FUNC_1(VAR_1, &VAR_4));

 return VAR_3->maybe_tree;
}
