
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kgd_mem {int dummy; } ;
struct kfd_process_device {int vm; } ;
struct kfd_process {int mutex; } ;
struct kfd_ioctl_alloc_memory_of_gpu_args {int mmap_offset; int flags; scalar_t__ size; int gpu_id; int handle; int va_addr; } ;
struct kfd_dev {int kgd; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kfd_process_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 long FUNC_3 (struct kfd_process_device*) ;
 int FUNC_4 (int ) ;
 long FUNC_5 (int ,int ,scalar_t__,int ,struct kgd_mem**,int*,int) ;
 int FUNC_6 (int ,struct kgd_mem*) ;
 struct kfd_process_device* FUNC_7 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_8 (struct kfd_dev*) ;
 struct kfd_dev* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct kfd_dev*) ;
 int FUNC_11 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_12 (struct kfd_process_device*,void*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_10,
     struct kfd_process *VAR_11, void *VAR_12)
{
 struct kfd_ioctl_alloc_memory_of_gpu_args *VAR_13 = VAR_12;
 struct kfd_process_device *VAR_14;
 void *VAR_15;
 struct kfd_dev *VAR_16;
 int VAR_17;
 long VAR_18;
 uint64_t VAR_19 = VAR_13->mmap_offset;
 uint32_t VAR_20 = VAR_13->flags;

 if (VAR_13->size == 0)
  return -VAR_1;

 VAR_16 = FUNC_9(VAR_13->gpu_id);
 if (!VAR_16)
  return -VAR_1;

 if ((VAR_20 & VAR_5) &&
  (VAR_20 & VAR_6) &&
  !FUNC_8(VAR_16)) {
  FUNC_15("Alloc host visible vram on small bar is not allowed\n");
  return -VAR_1;
 }

 if (VAR_20 & VAR_3) {
  if (VAR_13->size != FUNC_10(VAR_16))
   return -VAR_1;
  VAR_19 = FUNC_11(VAR_16, VAR_11);
 } else if (VAR_20 & VAR_4) {
  if (VAR_13->size != VAR_9)
   return -VAR_1;
  VAR_19 = FUNC_4(VAR_16->kgd);
  if (!VAR_19)
   return -VAR_2;
 }

 FUNC_13(&VAR_11->mutex);

 VAR_14 = FUNC_7(VAR_16, VAR_11);
 if (FUNC_0(VAR_14)) {
  VAR_18 = FUNC_3(VAR_14);
  goto err_unlock;
 }

 VAR_18 = FUNC_5(
  VAR_16->kgd, VAR_13->va_addr, VAR_13->size,
  VAR_14->vm, (struct kgd_mem **) &VAR_15, &VAR_19,
  VAR_20);

 if (VAR_18)
  goto err_unlock;

 VAR_17 = FUNC_12(VAR_14, VAR_15);
 if (VAR_17 < 0) {
  VAR_18 = -VAR_0;
  goto err_free;
 }

 FUNC_14(&VAR_11->mutex);

 VAR_13->handle = FUNC_2(VAR_13->gpu_id, VAR_17);
 VAR_13->mmap_offset = VAR_19;




 if (VAR_20 & VAR_4) {
  VAR_13->mmap_offset = VAR_7 | FUNC_1(VAR_13->gpu_id);
  VAR_13->mmap_offset <<= VAR_8;
 }

 return 0;

err_free:
 FUNC_6(VAR_16->kgd, (struct kgd_mem *)VAR_15);
err_unlock:
 FUNC_14(&VAR_11->mutex);
 return VAR_18;
}
