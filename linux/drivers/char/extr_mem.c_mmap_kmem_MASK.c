
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct vm_area_struct {unsigned long vm_pgoff; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 unsigned long VAR_4;


 VAR_4 = FUNC_0((u64)VAR_3->vm_pgoff << VAR_1) >> VAR_1;
 if (!FUNC_2(VAR_4))
  return -VAR_0;

 VAR_3->vm_pgoff = VAR_4;
 return FUNC_1(VAR_2, VAR_3);
}
