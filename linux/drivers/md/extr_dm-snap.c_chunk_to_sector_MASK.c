
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception_store {int chunk_shift; } ;
typedef int sector_t ;
typedef int chunk_t ;



__attribute__((used)) static sector_t FUNC_0(struct dm_exception_store *VAR_0,
    chunk_t VAR_1)
{
 return VAR_1 << VAR_0->chunk_shift;
}
