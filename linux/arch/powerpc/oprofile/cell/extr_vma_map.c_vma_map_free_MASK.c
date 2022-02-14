
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vma_to_fileoffset_map {struct vma_to_fileoffset_map* next; } ;


 int FUNC_0 (struct vma_to_fileoffset_map*) ;

void FUNC_1(struct vma_to_fileoffset_map *VAR_0)
{
 while (VAR_0) {
  struct vma_to_fileoffset_map *VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
