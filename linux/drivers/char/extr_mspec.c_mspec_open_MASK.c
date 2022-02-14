
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vma_data {int refcnt; } ;
struct vm_area_struct {struct vma_data* vm_private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vm_area_struct *VAR_0)
{
 struct vma_data *VAR_1;

 VAR_1 = VAR_0->vm_private_data;
 FUNC_0(&VAR_1->refcnt);
}
