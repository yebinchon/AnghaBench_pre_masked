
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packer_context {void* context; int nr_bits; int fn; } ;
struct dm_disk_bitset {int array_info; } ;
typedef int dm_block_t ;
typedef int bit_value_fn ;


 int FUNC_0 (int *,int *,int ,int ,struct packer_context*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;

int FUNC_2(struct dm_disk_bitset *VAR_1, dm_block_t *VAR_2,
    uint32_t VAR_3, bit_value_fn VAR_4, void *VAR_5)
{
 struct packer_context VAR_6;
 VAR_6.fn = VAR_4;
 VAR_6.nr_bits = VAR_3;
 VAR_6.context = VAR_5;

 return FUNC_0(&VAR_1->array_info, VAR_2, FUNC_1(VAR_3, 64), VAR_0, &VAR_6);
}
