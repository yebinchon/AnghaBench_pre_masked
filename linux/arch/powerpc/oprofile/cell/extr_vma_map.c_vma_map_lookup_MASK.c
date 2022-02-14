
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct vma_to_fileoffset_map {unsigned int vma; unsigned int size; unsigned int guard_val; unsigned int offset; scalar_t__ guard_ptr; struct vma_to_fileoffset_map* next; } ;
struct spu {scalar_t__ local_store; } ;



unsigned int
FUNC_0(struct vma_to_fileoffset_map *VAR_0, unsigned int VAR_1,
        const struct spu *VAR_2, int *VAR_3)
{







 u32 VAR_4 = 0x10000000 + VAR_1;
 u32 VAR_5;

 for (; VAR_0; VAR_0 = VAR_0->next) {
  if (VAR_1 < VAR_0->vma || VAR_1 >= VAR_0->vma + VAR_0->size)
   continue;

  if (VAR_0->guard_ptr) {
   VAR_5 = *(u32 *)(VAR_2->local_store + VAR_0->guard_ptr);
   if (VAR_5 != VAR_0->guard_val)
    continue;
   *VAR_3 = VAR_5;
  }
  VAR_4 = VAR_1 - VAR_0->vma + VAR_0->offset;
  break;
 }

 return VAR_4;
}
