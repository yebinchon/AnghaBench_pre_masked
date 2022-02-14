
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_private_data; int vm_flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct vm_area_struct*) ;

int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3->vm_flags &= ~VAR_1;
 VAR_3->vm_flags |= VAR_0;

 FUNC_2(FUNC_1(VAR_3->vm_private_data), VAR_3);

 return VAR_4;
}
