
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process {int is_32bit_user_mode; int pasid; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kfd_process*) ;
 int FUNC_1 (struct kfd_process*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 struct kfd_process* FUNC_6 (struct file*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 struct kfd_process *VAR_7;
 bool VAR_8;

 if (FUNC_4(VAR_5) != 0)
  return -VAR_1;

 VAR_8 = FUNC_5();

 if (VAR_8) {
  FUNC_3(VAR_4,
   "Process %d (32-bit) failed to open /dev/kfd\n"
   "32-bit processes are not supported by amdkfd\n",
   VAR_3->pid);
  return -VAR_2;
 }

 VAR_7 = FUNC_6(VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (FUNC_7())
  return -VAR_0;

 FUNC_2(VAR_4, "process %d opened, compat mode (32 bit) - %d\n",
  VAR_7->pasid, VAR_7->is_32bit_user_mode);

 return 0;
}
