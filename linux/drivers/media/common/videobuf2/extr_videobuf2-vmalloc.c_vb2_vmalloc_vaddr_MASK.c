
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_vmalloc_buf {void* vaddr; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0)
{
 struct vb2_vmalloc_buf *VAR_1 = VAR_0;

 if (!VAR_1->vaddr) {
  FUNC_0("Address of an unallocated plane requested or cannot map user pointer\n");
  return ((void*)0);
 }

 return VAR_1->vaddr;
}
