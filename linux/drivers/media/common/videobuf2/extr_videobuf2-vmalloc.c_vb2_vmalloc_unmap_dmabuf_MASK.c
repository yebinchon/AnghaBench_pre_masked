
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_vmalloc_buf {int * vaddr; int dbuf; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct vb2_vmalloc_buf *VAR_1 = VAR_0;

 FUNC_0(VAR_1->dbuf, VAR_1->vaddr);
 VAR_1->vaddr = ((void*)0);
}
