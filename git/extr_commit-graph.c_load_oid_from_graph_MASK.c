
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct object_id {int hash; } ;
struct commit_graph {scalar_t__ num_commits_in_base; scalar_t__ num_commits; scalar_t__ hash_len; scalar_t__ chunk_oid_lookup; struct commit_graph* base_graph; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct commit_graph *VAR_0,
    uint32_t VAR_1,
    struct object_id *VAR_2)
{
 uint32_t VAR_3;

 while (VAR_0 && VAR_1 < VAR_0->num_commits_in_base)
  VAR_0 = VAR_0->base_graph;

 if (!VAR_0)
  FUNC_0("NULL commit-graph");

 if (VAR_1 >= VAR_0->num_commits + VAR_0->num_commits_in_base)
  FUNC_2(FUNC_1("invalid commit position. commit-graph is likely corrupt"));

 VAR_3 = VAR_1 - VAR_0->num_commits_in_base;

 FUNC_3(VAR_2->hash, VAR_0->chunk_oid_lookup + VAR_0->hash_len * VAR_3);
}
