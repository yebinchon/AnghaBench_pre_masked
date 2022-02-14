
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcm_process_device {int sh_mem_config; int sh_mem_bases; TYPE_2__* pqm; scalar_t__ sh_mem_ape1_base; scalar_t__ sh_mem_ape1_limit; } ;
struct kfd_process_device {int dummy; } ;
struct device_queue_manager {int dummy; } ;
struct TYPE_4__ {TYPE_1__* process; } ;
struct TYPE_3__ {int is_32bit_user_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct kfd_process_device*) ;
 int FUNC_5 (char*,int ,unsigned int,int ) ;
 struct kfd_process_device* FUNC_6 (struct qcm_process_device*) ;

__attribute__((used)) static int FUNC_7(struct device_queue_manager *VAR_2,
  struct qcm_process_device *VAR_3)
{
 struct kfd_process_device *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_6(VAR_3);


 if (VAR_3->sh_mem_config == 0) {
  VAR_3->sh_mem_config =
   FUNC_0(VAR_1) |
   FUNC_2(VAR_0) |
   FUNC_1(VAR_0);
  VAR_3->sh_mem_ape1_limit = 0;
  VAR_3->sh_mem_ape1_base = 0;
 }




 VAR_5 = FUNC_4(VAR_4);
 VAR_3->sh_mem_bases = FUNC_3(VAR_5);

 FUNC_5("is32bit process: %d sh_mem_bases nybble: 0x%X and register 0x%X\n",
  VAR_3->pqm->process->is_32bit_user_mode, VAR_5, VAR_3->sh_mem_bases);

 return 0;
}
