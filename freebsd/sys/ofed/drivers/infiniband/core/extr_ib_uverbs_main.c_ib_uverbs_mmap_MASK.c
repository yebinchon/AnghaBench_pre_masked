
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct ib_uverbs_file {TYPE_1__* device; int ucontext; } ;
struct ib_device {int (* mmap ) (int ,struct vm_area_struct*) ;} ;
struct file {struct ib_uverbs_file* private_data; } ;
struct TYPE_2__ {int disassociate_srcu; int ib_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_device* FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct ib_uverbs_file *VAR_4 = VAR_2->private_data;
 struct ib_device *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_4->device->disassociate_srcu);
 VAR_5 = FUNC_0(VAR_4->device->ib_dev,
      &VAR_4->device->disassociate_srcu);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 if (!VAR_4->ucontext)
  VAR_6 = -VAR_1;
 else
  VAR_6 = VAR_5->mmap(VAR_4->ucontext, VAR_3);
out:
 FUNC_2(&VAR_4->device->disassociate_srcu, VAR_7);
 return VAR_6;
}
