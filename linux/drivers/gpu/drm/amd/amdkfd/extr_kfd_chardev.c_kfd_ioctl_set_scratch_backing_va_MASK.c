
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vmid; int sh_hidden_private_base; } ;
struct kfd_process_device {TYPE_3__ qpd; } ;
struct kfd_process {int mutex; } ;
struct kfd_ioctl_set_scratch_backing_va_args {int va_addr; int gpu_id; } ;
struct kfd_dev {int kgd; TYPE_2__* kfd2kgd; TYPE_1__* dqm; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int (* set_scratch_backing_va ) (int ,int ,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ sched_policy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kfd_process_device*) ;
 scalar_t__ VAR_1 ;
 long FUNC_1 (struct kfd_process_device*) ;
 struct kfd_process_device* FUNC_2 (struct kfd_dev*,struct kfd_process*) ;
 struct kfd_dev* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2,
     struct kfd_process *VAR_3, void *VAR_4)
{
 struct kfd_ioctl_set_scratch_backing_va_args *VAR_5 = VAR_4;
 struct kfd_process_device *VAR_6;
 struct kfd_dev *VAR_7;
 long VAR_8;

 VAR_7 = FUNC_3(VAR_5->gpu_id);
 if (!VAR_7)
  return -VAR_0;

 FUNC_4(&VAR_3->mutex);

 VAR_6 = FUNC_2(VAR_7, VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  goto bind_process_to_device_fail;
 }

 VAR_6->qpd.sh_hidden_private_base = VAR_5->va_addr;

 FUNC_5(&VAR_3->mutex);

 if (VAR_7->dqm->sched_policy == VAR_1 &&
     VAR_6->qpd.vmid != 0)
  VAR_7->kfd2kgd->set_scratch_backing_va(
   VAR_7->kgd, VAR_5->va_addr, VAR_6->qpd.vmid);

 return 0;

bind_process_to_device_fail:
 FUNC_5(&VAR_3->mutex);
 return VAR_8;
}
