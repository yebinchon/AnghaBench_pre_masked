
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_vmalloc_buf {int vaddr; int refcount; } ;


 int FUNC_0 (struct vb2_vmalloc_buf*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct vb2_vmalloc_buf *VAR_1 = VAR_0;

 if (FUNC_1(&VAR_1->refcount)) {
  FUNC_2(VAR_1->vaddr);
  FUNC_0(VAR_1);
 }
}
