
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_exception_table {int hash_shift; int hash_mask; } ;
typedef int chunk_t ;



__attribute__((used)) static uint32_t FUNC_0(struct dm_exception_table *VAR_0, chunk_t VAR_1)
{
 return (VAR_1 >> VAR_0->hash_shift) & VAR_0->hash_mask;
}
