
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct object_id {int hash; } ;
struct multi_pack_index {int chunk_oid_lookup; int chunk_oid_fanout; } ;
struct TYPE_2__ {int rawsz; } ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(const struct object_id *VAR_1, struct multi_pack_index *VAR_2, uint32_t *VAR_3)
{
 return FUNC_0(VAR_1->hash, VAR_2->chunk_oid_fanout, VAR_2->chunk_oid_lookup,
       VAR_0->rawsz, VAR_3);
}
