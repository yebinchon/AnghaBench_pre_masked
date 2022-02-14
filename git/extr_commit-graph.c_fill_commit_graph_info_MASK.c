
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct commit_graph {scalar_t__ num_commits_in_base; unsigned char* chunk_commit_data; int hash_len; struct commit_graph* base_graph; } ;
struct commit {int generation; scalar_t__ graph_pos; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static void FUNC_1(struct commit *VAR_1, struct commit_graph *VAR_2, uint32_t VAR_3)
{
 const unsigned char *VAR_4;
 uint32_t VAR_5;

 while (VAR_3 < VAR_2->num_commits_in_base)
  VAR_2 = VAR_2->base_graph;

 VAR_5 = VAR_3 - VAR_2->num_commits_in_base;
 VAR_4 = VAR_2->chunk_commit_data + VAR_0 * VAR_5;
 VAR_1->graph_pos = VAR_3;
 VAR_1->generation = FUNC_0(VAR_4 + VAR_2->hash_len + 8) >> 2;
}
