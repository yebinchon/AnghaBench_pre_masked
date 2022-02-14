
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_private_data; int * vm_ops; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 if (VAR_6->vm_end < VAR_6->vm_start)
  return -VAR_0;

 if (FUNC_0(VAR_6) != 1)
  return -VAR_0;

 VAR_6->vm_flags |= VAR_3 | VAR_1 | VAR_2;
 VAR_6->vm_ops = &VAR_4;
 VAR_6->vm_private_data = VAR_5->private_data;

 return 0;
}
