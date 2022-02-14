
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcall_ppp_data {unsigned long entitlement; unsigned long unallocated_entitlement; unsigned long group_num; unsigned long pool_num; unsigned long capped; unsigned long weight; unsigned long unallocated_weight; unsigned long active_procs_in_pool; unsigned long active_system_procs; unsigned long phys_platform_procs; unsigned long max_proc_cap_avail; unsigned long entitled_proc_cap_avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static unsigned int FUNC_1(struct hvcall_ppp_data *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4[VAR_1];

 VAR_3 = FUNC_0(VAR_0, VAR_4);

 VAR_2->entitlement = VAR_4[0];
 VAR_2->unallocated_entitlement = VAR_4[1];

 VAR_2->group_num = (VAR_4[2] >> 2 * 8) & 0xffff;
 VAR_2->pool_num = VAR_4[2] & 0xffff;

 VAR_2->capped = (VAR_4[3] >> 6 * 8) & 0x01;
 VAR_2->weight = (VAR_4[3] >> 5 * 8) & 0xff;
 VAR_2->unallocated_weight = (VAR_4[3] >> 4 * 8) & 0xff;
 VAR_2->active_procs_in_pool = (VAR_4[3] >> 2 * 8) & 0xffff;
 VAR_2->active_system_procs = VAR_4[3] & 0xffff;

 VAR_2->phys_platform_procs = VAR_4[4] >> 6 * 8;
 VAR_2->max_proc_cap_avail = (VAR_4[4] >> 3 * 8) & 0xffffff;
 VAR_2->entitled_proc_cap_avail = VAR_4[4] & 0xffffff;

 return VAR_3;
}
