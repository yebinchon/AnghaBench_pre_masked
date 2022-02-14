
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct vm_area_struct *VAR_3)
{

 return -VAR_0;

 if (VAR_3->vm_flags & VAR_1)
  return FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 return 0;
}
