
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_queue_manager_asic_ops {int mqd_manager_init; int init_sdma_vm; int update_qpd; int set_cache_memory_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(
  struct device_queue_manager_asic_ops *VAR_4)
{
 VAR_4->set_cache_memory_policy = VAR_2;
 VAR_4->update_qpd = VAR_3;
 VAR_4->init_sdma_vm = VAR_0;
 VAR_4->mqd_manager_init = VAR_1;
}
