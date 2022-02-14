
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kgd_mem {int dummy; } ;
struct kfd_process_device {int vm; } ;
struct kfd_process {int mutex; } ;
struct kfd_ioctl_import_dmabuf_args {int gpu_id; int handle; int va_addr; int dmabuf_fd; } ;
struct kfd_dev {int kgd; } ;
struct file {int dummy; } ;
struct dma_buf {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kfd_process_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct kfd_process_device*) ;
 int FUNC_3 (int ,struct kgd_mem*) ;
 int FUNC_4 (int ,struct kfd_process_device*,int ,int ,struct kgd_mem**,int *,int *) ;
 struct kfd_process_device* FUNC_5 (int ) ;
 struct kfd_process_device* FUNC_6 (struct kfd_dev*,struct kfd_process*) ;
 struct kfd_dev* FUNC_7 (int ) ;
 int FUNC_8 (struct kfd_process_device*,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2,
       struct kfd_process *VAR_3, void *VAR_4)
{
 struct kfd_ioctl_import_dmabuf_args *VAR_5 = VAR_4;
 struct kfd_process_device *VAR_6;
 struct dma_buf *VAR_7;
 struct kfd_dev *VAR_8;
 int VAR_9;
 uint64_t VAR_10;
 void *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_7(VAR_5->gpu_id);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_5->dmabuf_fd);
 if (FUNC_0(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_9(&VAR_3->mutex);

 VAR_6 = FUNC_6(VAR_8, VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_12 = FUNC_2(VAR_6);
  goto err_unlock;
 }

 VAR_12 = FUNC_4(VAR_8->kgd, VAR_7,
           VAR_5->va_addr, VAR_6->vm,
           (struct kgd_mem **)&VAR_11, &VAR_10,
           ((void*)0));
 if (VAR_12)
  goto err_unlock;

 VAR_9 = FUNC_8(VAR_6, VAR_11);
 if (VAR_9 < 0) {
  VAR_12 = -VAR_0;
  goto err_free;
 }

 FUNC_10(&VAR_3->mutex);

 VAR_5->handle = FUNC_1(VAR_5->gpu_id, VAR_9);

 return 0;

err_free:
 FUNC_3(VAR_8->kgd, (struct kgd_mem *)VAR_11);
err_unlock:
 FUNC_10(&VAR_3->mutex);
 return VAR_12;
}
