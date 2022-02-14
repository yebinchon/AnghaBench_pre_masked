
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_vmalloc_buf {scalar_t__ vaddr; int dbuf; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct vb2_vmalloc_buf*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct vb2_vmalloc_buf *VAR_1 = VAR_0;

 if (VAR_1->vaddr)
  FUNC_0(VAR_1->dbuf, VAR_1->vaddr);

 FUNC_1(VAR_1);
}
