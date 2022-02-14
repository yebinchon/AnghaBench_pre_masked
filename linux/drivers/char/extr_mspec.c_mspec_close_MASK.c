
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vma_data {int vm_end; int vm_start; unsigned long* maddr; int refcnt; } ;
struct vm_area_struct {struct vma_data* vm_private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vma_data*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,int) ;

__attribute__((used)) static void
FUNC_4(struct vm_area_struct *VAR_2)
{
 struct vma_data *VAR_3;
 int VAR_4, VAR_5;
 unsigned long VAR_6;

 VAR_3 = VAR_2->vm_private_data;

 if (!FUNC_2(&VAR_3->refcnt))
  return;

 VAR_5 = (VAR_3->vm_end - VAR_3->vm_start) >> VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_3->maddr[VAR_4] == 0)
   continue;




  VAR_6 = VAR_3->maddr[VAR_4];
  VAR_3->maddr[VAR_4] = 0;
  FUNC_1((char *)VAR_6, 0, VAR_1);
  FUNC_3(VAR_6, 1);
 }

 FUNC_0(VAR_3);
}
