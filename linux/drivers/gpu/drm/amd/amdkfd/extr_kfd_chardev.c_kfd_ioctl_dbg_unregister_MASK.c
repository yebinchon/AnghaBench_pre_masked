
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process {int dummy; } ;
struct kfd_ioctl_dbg_unregister_args {int gpu_id; } ;
struct kfd_dev {int * dbgmgr; TYPE_1__* device_info; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ asic_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 long FUNC_1 (int *,struct kfd_process*) ;
 struct kfd_dev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2,
    struct kfd_process *VAR_3, void *VAR_4)
{
 struct kfd_ioctl_dbg_unregister_args *VAR_5 = VAR_4;
 struct kfd_dev *VAR_6;
 long VAR_7;

 VAR_6 = FUNC_2(VAR_5->gpu_id);
 if (!VAR_6 || !VAR_6->dbgmgr)
  return -VAR_1;

 if (VAR_6->device_info->asic_family == VAR_0) {
  FUNC_6("kfd_ioctl_dbg_unregister not supported on CZ\n");
  return -VAR_1;
 }

 FUNC_4(FUNC_3());

 VAR_7 = FUNC_1(VAR_6->dbgmgr, VAR_3);
 if (!VAR_7) {
  FUNC_0(VAR_6->dbgmgr);
  VAR_6->dbgmgr = ((void*)0);
 }

 FUNC_5(FUNC_3());

 return VAR_7;
}
