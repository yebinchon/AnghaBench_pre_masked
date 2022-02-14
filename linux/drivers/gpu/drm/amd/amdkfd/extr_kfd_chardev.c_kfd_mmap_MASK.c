
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; } ;
struct kfd_process {int dummy; } ;
struct kfd_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kfd_process*) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;


 unsigned long VAR_2 ;


 int FUNC_3 (struct kfd_process*) ;
 int VAR_3 ;
 struct kfd_dev* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct kfd_dev*,struct kfd_process*,struct vm_area_struct*) ;
 int FUNC_6 (struct kfd_process*,struct vm_area_struct*) ;
 struct kfd_process* FUNC_7 (int ) ;
 int FUNC_8 (struct kfd_dev*,struct kfd_process*,struct vm_area_struct*) ;
 int FUNC_9 (struct kfd_dev*,struct kfd_process*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct kfd_process *VAR_6;
 struct kfd_dev *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 unsigned int VAR_9;

 VAR_6 = FUNC_7(VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_3(VAR_6);

 VAR_8 = VAR_5->vm_pgoff;
 VAR_5->vm_pgoff = FUNC_2(VAR_8);
 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9)
  VAR_7 = FUNC_4(VAR_9);

 switch (VAR_8 & VAR_2) {
 case 131:
  if (!VAR_7)
   return -VAR_1;
  return FUNC_5(VAR_7, VAR_6, VAR_5);

 case 130:
  return FUNC_6(VAR_6, VAR_5);

 case 128:
  if (!VAR_7)
   return -VAR_1;
  return FUNC_9(VAR_7, VAR_6, VAR_5);
 case 129:
  if (!VAR_7)
   return -VAR_1;
  return FUNC_8(VAR_7, VAR_6, VAR_5);
 }

 return -VAR_0;
}
