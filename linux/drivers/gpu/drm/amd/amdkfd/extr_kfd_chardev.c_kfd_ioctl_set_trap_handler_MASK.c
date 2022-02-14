
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_process_device {int qpd; } ;
struct kfd_process {int mutex; } ;
struct kfd_ioctl_set_trap_handler_args {int tma_addr; int tba_addr; int gpu_id; } ;
struct kfd_dev {TYPE_2__* dqm; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* set_trap_handler ) (TYPE_2__*,int *,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kfd_process_device*) ;
 struct kfd_process_device* FUNC_1 (struct kfd_dev*,struct kfd_process*) ;
 struct kfd_dev* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2,
     struct kfd_process *VAR_3, void *VAR_4)
{
 struct kfd_ioctl_set_trap_handler_args *VAR_5 = VAR_4;
 struct kfd_dev *VAR_6;
 int VAR_7 = 0;
 struct kfd_process_device *VAR_8;

 VAR_6 = FUNC_2(VAR_5->gpu_id);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_3->mutex);

 VAR_8 = FUNC_1(VAR_6, VAR_3);
 if (FUNC_0(VAR_8)) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_6->dqm->ops.set_trap_handler(VAR_6->dqm,
     &VAR_8->qpd,
     VAR_5->tba_addr,
     VAR_5->tma_addr))
  VAR_7 = -VAR_0;

out:
 FUNC_4(&VAR_3->mutex);

 return VAR_7;
}
