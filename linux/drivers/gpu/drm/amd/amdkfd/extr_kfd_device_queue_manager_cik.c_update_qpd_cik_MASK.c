
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
struct TYPE_3__ {scalar_t__ is_32bit_user_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (struct kfd_process_device*) ;
 unsigned int FUNC_6 (struct kfd_process_device*) ;
 int FUNC_7 (char*,scalar_t__,unsigned int,int ) ;
 struct kfd_process_device* FUNC_8 (struct qcm_process_device*) ;

__attribute__((used)) static int FUNC_9(struct device_queue_manager *VAR_4,
  struct qcm_process_device *VAR_5)
{
 struct kfd_process_device *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_8(VAR_5);


 if (VAR_5->sh_mem_config == 0) {
  VAR_5->sh_mem_config =
   FUNC_0(VAR_2) |
   FUNC_2(VAR_0) |
   FUNC_1(VAR_0);
  VAR_5->sh_mem_ape1_limit = 0;
  VAR_5->sh_mem_ape1_base = 0;
 }

 if (VAR_5->pqm->process->is_32bit_user_mode) {
  VAR_7 = FUNC_5(VAR_6);
  VAR_5->sh_mem_bases = FUNC_3(VAR_7);
  VAR_5->sh_mem_config |= VAR_1;
 } else {
  VAR_7 = FUNC_6(VAR_6);
  VAR_5->sh_mem_bases = FUNC_4(VAR_7);
  VAR_5->sh_mem_config |= 1 << VAR_3;
 }

 FUNC_7("is32bit process: %d sh_mem_bases nybble: 0x%X and register 0x%X\n",
  VAR_5->pqm->process->is_32bit_user_mode, VAR_7, VAR_5->sh_mem_bases);

 return 0;
}
