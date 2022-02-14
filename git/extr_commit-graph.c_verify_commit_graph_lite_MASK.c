
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_graph {int chunk_commit_data; int chunk_oid_lookup; int chunk_oid_fanout; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct commit_graph *VAR_0)
{
 if (!VAR_0->chunk_oid_fanout) {
  FUNC_0("commit-graph is missing the OID Fanout chunk");
  return 1;
 }
 if (!VAR_0->chunk_oid_lookup) {
  FUNC_0("commit-graph is missing the OID Lookup chunk");
  return 1;
 }
 if (!VAR_0->chunk_commit_data) {
  FUNC_0("commit-graph is missing the Commit Data chunk");
  return 1;
 }

 return 0;
}
