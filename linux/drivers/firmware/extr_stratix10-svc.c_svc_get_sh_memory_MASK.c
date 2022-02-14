
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stratix10_svc_sh_memory {scalar_t__ size; scalar_t__ addr; int sync_complete; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int *) ;
 struct task_struct* FUNC_5 (int ,void*,int ,char*) ;
 int VAR_4 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct task_struct*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5,
        struct stratix10_svc_sh_memory *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct task_struct *VAR_8;
 unsigned int VAR_9 = 0;

 FUNC_4(&VAR_6->sync_complete);


 VAR_8 = FUNC_5(VAR_4,
            (void *)VAR_6,
      FUNC_1(VAR_9),
      "svc_smc_hvc_shm_thread");
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_7, "fail to create stratix10_svc_smc_shm_thread\n");
  return -VAR_0;
 }

 FUNC_7(VAR_8);

 if (!FUNC_6(&VAR_6->sync_complete, 10 * VAR_3)) {
  FUNC_3(VAR_7,
   "timeout to get sh-memory paras from secure world\n");
  return -VAR_2;
 }

 if (!VAR_6->addr || !VAR_6->size) {
  FUNC_3(VAR_7,
   "failed to get shared memory info from secure world\n");
  return -VAR_1;
 }

 FUNC_2(VAR_7, "SM software provides paddr: 0x%016x, size: 0x%08x\n",
  (unsigned int)VAR_6->addr,
  (unsigned int)VAR_6->size);

 return 0;
}
