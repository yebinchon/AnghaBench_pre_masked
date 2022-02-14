
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {int pgoff; int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_pgoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static vm_fault_t FUNC_1(struct vm_fault *VAR_4)
{
 struct vm_area_struct *VAR_5 = VAR_4->vma;

 switch (VAR_4->pgoff - VAR_5->vm_pgoff) {
 case 0:
 case 1:
  return VAR_2;
 case 2:
  FUNC_0(VAR_5, VAR_4->address, VAR_3 >> VAR_0);
  return VAR_1;
 case 3:
 default:
  return VAR_2;
 }
}
