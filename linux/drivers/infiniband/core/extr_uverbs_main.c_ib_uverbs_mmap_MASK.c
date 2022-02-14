
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct ib_uverbs_file {TYPE_3__* device; } ;
struct ib_ucontext {TYPE_2__* device; } ;
struct file {struct ib_uverbs_file* private_data; } ;
struct TYPE_6__ {int disassociate_srcu; } ;
struct TYPE_4__ {int (* mmap ) (struct ib_ucontext*,struct vm_area_struct*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 scalar_t__ FUNC_0 (struct ib_ucontext*) ;
 int FUNC_1 (struct ib_ucontext*) ;
 struct ib_ucontext* FUNC_2 (struct ib_uverbs_file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ib_ucontext*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct ib_uverbs_file *VAR_2 = VAR_0->private_data;
 struct ib_ucontext *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_2->device->disassociate_srcu);
 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto out;
 }

 VAR_4 = VAR_3->device->ops.mmap(VAR_3, VAR_1);
out:
 FUNC_4(&VAR_2->device->disassociate_srcu, VAR_5);
 return VAR_4;
}
