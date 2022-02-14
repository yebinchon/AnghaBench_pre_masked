
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_vmalloc_buf {scalar_t__ vaddr; int dbuf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct vb2_vmalloc_buf *VAR_2 = VAR_1;

 VAR_2->vaddr = FUNC_0(VAR_2->dbuf);

 return VAR_2->vaddr ? 0 : -VAR_0;
}
