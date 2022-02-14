
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_flags; } ;
struct file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 unsigned long VAR_4 = VAR_3->vm_flags;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;




 VAR_3->vm_flags = VAR_4 | VAR_1 | VAR_0;
 return 0;
}
