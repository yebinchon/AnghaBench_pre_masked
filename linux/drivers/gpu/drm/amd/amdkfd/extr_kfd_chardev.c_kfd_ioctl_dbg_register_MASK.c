
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process_device {int dummy; } ;
struct kfd_process {int mutex; } ;
struct kfd_ioctl_dbg_register_args {int gpu_id; } ;
struct kfd_dev {struct kfd_dbgmgr* dbgmgr; TYPE_1__* device_info; } ;
struct kfd_dbgmgr {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ asic_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kfd_process_device*) ;
 long FUNC_1 (struct kfd_process_device*) ;
 struct kfd_process_device* FUNC_2 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_3 (struct kfd_dbgmgr**,struct kfd_dev*) ;
 int FUNC_4 (struct kfd_dbgmgr*) ;
 long FUNC_5 (struct kfd_dbgmgr*,struct kfd_process*) ;
 struct kfd_dev* FUNC_6 (int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2,
    struct kfd_process *VAR_3, void *VAR_4)
{
 struct kfd_ioctl_dbg_register_args *VAR_5 = VAR_4;
 struct kfd_dev *VAR_6;
 struct kfd_dbgmgr *VAR_7;
 struct kfd_process_device *VAR_8;
 bool VAR_9;
 long VAR_10 = 0;

 VAR_6 = FUNC_6(VAR_5->gpu_id);
 if (!VAR_6)
  return -VAR_1;

 if (VAR_6->device_info->asic_family == VAR_0) {
  FUNC_10("kfd_ioctl_dbg_register not supported on CZ\n");
  return -VAR_1;
 }

 FUNC_8(&VAR_3->mutex);
 FUNC_8(FUNC_7());





 VAR_8 = FUNC_2(VAR_6, VAR_3);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto out;
 }

 if (!VAR_6->dbgmgr) {

  VAR_9 = FUNC_3(&VAR_7, VAR_6);
  if (VAR_9) {
   VAR_10 = FUNC_5(VAR_7, VAR_3);
   if (VAR_10 != 0)
    FUNC_4(VAR_7);
   else
    VAR_6->dbgmgr = VAR_7;
  }
 } else {
  FUNC_10("debugger already registered\n");
  VAR_10 = -VAR_1;
 }

out:
 FUNC_9(FUNC_7());
 FUNC_9(&VAR_3->mutex);

 return VAR_10;
}
