
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process_device {struct file* drm_file; } ;
struct kfd_process {int mutex; } ;
struct kfd_ioctl_acquire_vm_args {int drm_fd; int gpu_id; } ;
struct kfd_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 struct kfd_dev* FUNC_2 (int ) ;
 struct kfd_process_device* FUNC_3 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_4 (struct kfd_process_device*,struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2, struct kfd_process *VAR_3,
    void *VAR_4)
{
 struct kfd_ioctl_acquire_vm_args *VAR_5 = VAR_4;
 struct kfd_process_device *VAR_6;
 struct kfd_dev *VAR_7;
 struct file *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_5->gpu_id);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_5->drm_fd);
 if (!VAR_8)
  return -VAR_1;

 FUNC_5(&VAR_3->mutex);

 VAR_6 = FUNC_3(VAR_7, VAR_3);
 if (!VAR_6) {
  VAR_9 = -VAR_1;
  goto err_unlock;
 }

 if (VAR_6->drm_file) {
  VAR_9 = VAR_6->drm_file == VAR_8 ? 0 : -VAR_0;
  goto err_unlock;
 }

 VAR_9 = FUNC_4(VAR_6, VAR_8);
 if (VAR_9)
  goto err_unlock;

 FUNC_6(&VAR_3->mutex);

 return 0;

err_unlock:
 FUNC_6(&VAR_3->mutex);
 FUNC_1(VAR_8);
 return VAR_9;
}
