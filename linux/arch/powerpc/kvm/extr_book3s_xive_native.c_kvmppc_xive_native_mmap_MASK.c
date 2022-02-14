
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_pgoff; int vm_flags; TYPE_1__* vm_file; int vm_page_prot; int * vm_ops; } ;
struct kvmppc_xive {int mapping; } ;
struct kvm_device {struct kvmppc_xive* private; } ;
struct TYPE_2__ {int f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct kvm_device *VAR_8,
       struct vm_area_struct *VAR_9)
{
 struct kvmppc_xive *VAR_10 = VAR_8->private;


 if (VAR_9->vm_pgoff == VAR_3) {
  if (FUNC_1(VAR_9) > 4)
   return -VAR_0;
  VAR_9->vm_ops = &VAR_7;
 } else if (VAR_9->vm_pgoff == VAR_2) {
  if (FUNC_1(VAR_9) > VAR_1 * 2)
   return -VAR_0;
  VAR_9->vm_ops = &VAR_6;
 } else {
  return -VAR_0;
 }

 VAR_9->vm_flags |= VAR_4 | VAR_5;
 VAR_9->vm_page_prot = FUNC_0(VAR_9->vm_page_prot);






 VAR_10->mapping = VAR_9->vm_file->f_mapping;
 return 0;
}
