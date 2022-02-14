
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcm_process_device {int sh_mem_config; unsigned int sh_mem_bases; TYPE_2__* pqm; scalar_t__ sh_mem_ape1_base; scalar_t__ sh_mem_ape1_limit; } ;
struct kfd_process_device {int dummy; } ;
struct device_queue_manager {int dummy; } ;
struct TYPE_4__ {TYPE_1__* process; } ;
struct TYPE_3__ {scalar_t__ is_32bit_user_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct kfd_process_device*) ;
 unsigned int FUNC_2 (struct kfd_process_device*) ;
 int FUNC_3 (char*,scalar_t__,unsigned int,unsigned int) ;
 struct kfd_process_device* FUNC_4 (struct qcm_process_device*) ;

__attribute__((used)) static int FUNC_5(struct device_queue_manager *VAR_11,
     struct qcm_process_device *VAR_12)
{
 struct kfd_process_device *VAR_13;
 unsigned int VAR_14;

 VAR_13 = FUNC_4(VAR_12);


 if (VAR_12->sh_mem_config == 0) {
  VAR_12->sh_mem_config =
   VAR_3 <<
    VAR_6 |
   VAR_0 << VAR_8 |
   VAR_0 << VAR_7 |
   VAR_9;

  VAR_12->sh_mem_ape1_limit = 0;
  VAR_12->sh_mem_ape1_base = 0;
 }

 if (VAR_12->pqm->process->is_32bit_user_mode) {
  VAR_14 = FUNC_1(VAR_13);
  VAR_12->sh_mem_bases = VAR_14 << VAR_4;
  VAR_12->sh_mem_config |= VAR_1 <<
     VAR_5;
 } else {
  VAR_14 = FUNC_2(VAR_13);
  VAR_12->sh_mem_bases = FUNC_0(VAR_14);
  VAR_12->sh_mem_config |= VAR_2 <<
   VAR_5;
  VAR_12->sh_mem_config |= 1 <<
   VAR_10;
 }

 FUNC_3("is32bit process: %d sh_mem_bases nybble: 0x%X and register 0x%X\n",
  VAR_12->pqm->process->is_32bit_user_mode, VAR_14, VAR_12->sh_mem_bases);

 return 0;
}
