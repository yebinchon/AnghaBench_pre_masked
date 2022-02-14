
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int hash; } ;
struct commit_graph {int hash_len; scalar_t__ num_commits_in_base; scalar_t__ num_commits; struct commit_graph* base_graph; scalar_t__ chunk_base_graphs; int oid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct object_id*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct commit_graph *VAR_0,
         struct commit_graph *VAR_1,
         struct object_id *VAR_2,
         int VAR_3)
{
 struct commit_graph *VAR_4 = VAR_1;

 if (VAR_3 && !VAR_0->chunk_base_graphs) {
  FUNC_3(FUNC_0("commit-graph has no base graphs chunk"));
  return 0;
 }

 while (VAR_3) {
  VAR_3--;

  if (!VAR_4 ||
      !FUNC_2(&VAR_2[VAR_3], &VAR_4->oid) ||
      !FUNC_1(VAR_2[VAR_3].hash, VAR_0->chunk_base_graphs + VAR_0->hash_len * VAR_3)) {
   FUNC_3(FUNC_0("commit-graph chain does not match"));
   return 0;
  }

  VAR_4 = VAR_4->base_graph;
 }

 VAR_0->base_graph = VAR_1;

 if (VAR_1)
  VAR_0->num_commits_in_base = VAR_1->num_commits + VAR_1->num_commits_in_base;

 return 1;
}
