
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct object_id {int hash; } ;
struct multi_pack_index {int num_objects; int hash_len; scalar_t__ chunk_oid_lookup; } ;


 int FUNC_0 (int ,scalar_t__) ;

struct object_id *FUNC_1(struct object_id *VAR_0,
     struct multi_pack_index *VAR_1,
     uint32_t VAR_2)
{
 if (VAR_2 >= VAR_1->num_objects)
  return ((void*)0);

 FUNC_0(VAR_0->hash, VAR_1->chunk_oid_lookup + VAR_1->hash_len * VAR_2);
 return VAR_0;
}
