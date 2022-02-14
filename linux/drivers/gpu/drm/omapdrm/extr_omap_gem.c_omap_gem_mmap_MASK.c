
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_private_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int FUNC_2 (int ,struct vm_area_struct*) ;

int FUNC_3(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0("mmap failed: %d", VAR_2);
  return VAR_2;
 }

 return FUNC_2(VAR_1->vm_private_data, VAR_1);
}
