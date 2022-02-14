
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcm_process_device {int sh_mem_bases; int sh_mem_ape1_limit; int sh_mem_ape1_base; int sh_mem_config; int vmid; } ;
struct device_queue_manager {TYPE_2__* dev; } ;
struct TYPE_4__ {int kgd; TYPE_1__* kfd2kgd; } ;
struct TYPE_3__ {void (* program_sh_mem_settings ) (int ,int ,int ,int ,int ,int ) ;} ;


 void FUNC_0 (int ,int ,int ,int ,int ,int ) ;

void FUNC_1(struct device_queue_manager *VAR_0,
     struct qcm_process_device *VAR_1)
{
 return VAR_0->dev->kfd2kgd->program_sh_mem_settings(
      VAR_0->dev->kgd, VAR_1->vmid,
      VAR_1->sh_mem_config,
      VAR_1->sh_mem_ape1_base,
      VAR_1->sh_mem_ape1_limit,
      VAR_1->sh_mem_bases);
}
