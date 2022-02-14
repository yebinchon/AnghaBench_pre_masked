
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hvcall_mpp_data {int entitled_mem; int mapped_mem; int group_num; int pool_num; int mem_weight; int unallocated_mem_weight; int unallocated_entitlement; int pool_size; int loan_request; int backing_mem; } ;


 int FUNC_0 (struct hvcall_mpp_data*) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0)
{
 struct hvcall_mpp_data VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1);
 if (VAR_2)
  return;

 FUNC_1(VAR_0, "entitled_memory=%ld\n", VAR_1.entitled_mem);

 if (VAR_1.mapped_mem != -1)
  FUNC_1(VAR_0, "mapped_entitled_memory=%ld\n",
             VAR_1.mapped_mem);

 FUNC_1(VAR_0, "entitled_memory_group_number=%d\n", VAR_1.group_num);
 FUNC_1(VAR_0, "entitled_memory_pool_number=%d\n", VAR_1.pool_num);

 FUNC_1(VAR_0, "entitled_memory_weight=%d\n", VAR_1.mem_weight);
 FUNC_1(VAR_0, "unallocated_entitled_memory_weight=%d\n",
            VAR_1.unallocated_mem_weight);
 FUNC_1(VAR_0, "unallocated_io_mapping_entitlement=%ld\n",
            VAR_1.unallocated_entitlement);

 if (VAR_1.pool_size != -1)
  FUNC_1(VAR_0, "entitled_memory_pool_size=%ld bytes\n",
             VAR_1.pool_size);

 FUNC_1(VAR_0, "entitled_memory_loan_request=%ld\n",
            VAR_1.loan_request);

 FUNC_1(VAR_0, "backing_memory=%ld bytes\n", VAR_1.backing_mem);
}
