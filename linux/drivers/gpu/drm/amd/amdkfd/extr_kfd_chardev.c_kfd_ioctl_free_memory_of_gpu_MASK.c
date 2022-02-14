
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_mem {int dummy; } ;
struct kfd_process_device {int dummy; } ;
struct kfd_process {int mutex; } ;
struct kfd_ioctl_free_memory_of_gpu_args {int handle; } ;
struct kfd_dev {int kgd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct kgd_mem*) ;
 struct kfd_dev* FUNC_3 (int ) ;
 struct kfd_process_device* FUNC_4 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_5 (struct kfd_process_device*,int ) ;
 void* FUNC_6 (struct kfd_process_device*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_1,
     struct kfd_process *VAR_2, void *VAR_3)
{
 struct kfd_ioctl_free_memory_of_gpu_args *VAR_4 = VAR_3;
 struct kfd_process_device *VAR_5;
 void *VAR_6;
 struct kfd_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(FUNC_0(VAR_4->handle));
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(&VAR_2->mutex);

 VAR_5 = FUNC_4(VAR_7, VAR_2);
 if (!VAR_5) {
  FUNC_9("Process device data doesn't exist\n");
  VAR_8 = -VAR_0;
  goto err_unlock;
 }

 VAR_6 = FUNC_6(
  VAR_5, FUNC_1(VAR_4->handle));
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto err_unlock;
 }

 VAR_8 = FUNC_2(VAR_7->kgd,
      (struct kgd_mem *)VAR_6);




 if (!VAR_8)
  FUNC_5(
   VAR_5, FUNC_1(VAR_4->handle));

err_unlock:
 FUNC_8(&VAR_2->mutex);
 return VAR_8;
}
