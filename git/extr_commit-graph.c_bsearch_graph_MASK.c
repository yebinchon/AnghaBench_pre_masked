
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct object_id {int hash; } ;
struct commit_graph {int hash_len; int chunk_oid_lookup; int chunk_oid_fanout; } ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct commit_graph *VAR_0, struct object_id *VAR_1, uint32_t *VAR_2)
{
 return FUNC_0(VAR_1->hash, VAR_0->chunk_oid_fanout,
       VAR_0->chunk_oid_lookup, VAR_0->hash_len, VAR_2);
}
