
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcall_mpp_data {unsigned long entitled_mem; unsigned long mapped_mem; unsigned long group_num; unsigned long pool_num; unsigned long mem_weight; unsigned long unallocated_mem_weight; unsigned long unallocated_entitlement; unsigned long pool_size; unsigned long loan_request; unsigned long backing_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*) ;

int FUNC_1(struct hvcall_mpp_data *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4[VAR_1];

 VAR_3 = FUNC_0(VAR_0, VAR_4);

 VAR_2->entitled_mem = VAR_4[0];
 VAR_2->mapped_mem = VAR_4[1];

 VAR_2->group_num = (VAR_4[2] >> 2 * 8) & 0xffff;
 VAR_2->pool_num = VAR_4[2] & 0xffff;

 VAR_2->mem_weight = (VAR_4[3] >> 7 * 8) & 0xff;
 VAR_2->unallocated_mem_weight = (VAR_4[3] >> 6 * 8) & 0xff;
 VAR_2->unallocated_entitlement = VAR_4[3] & 0xffffffffffffUL;

 VAR_2->pool_size = VAR_4[4];
 VAR_2->loan_request = VAR_4[5];
 VAR_2->backing_mem = VAR_4[6];

 return VAR_3;
}
