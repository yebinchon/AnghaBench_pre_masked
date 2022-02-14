
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hvcall_ppp_data {unsigned long entitlement; unsigned long group_num; unsigned long active_system_procs; unsigned long pool_num; int active_procs_in_pool; unsigned long unallocated_weight; unsigned long weight; unsigned long capped; unsigned long unallocated_entitlement; unsigned long phys_platform_procs; unsigned long max_proc_cap_avail; unsigned long entitled_proc_cap_avail; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct hvcall_ppp_data*) ;
 int FUNC_3 (unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct device_node* FUNC_5 (char*) ;
 int * FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct seq_file*,char*,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct seq_file *VAR_0)
{
 struct hvcall_ppp_data VAR_1;
 struct device_node *VAR_2;
 const __be32 *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_1);
 if (VAR_4)
  return;

 FUNC_8(VAR_0, "partition_entitled_capacity=%lld\n",
            VAR_1.entitlement);
 FUNC_8(VAR_0, "group=%d\n", VAR_1.group_num);
 FUNC_8(VAR_0, "system_active_processors=%d\n",
            VAR_1.active_system_procs);


 if (FUNC_4(FUNC_1())) {
  unsigned long VAR_5, VAR_6;

  FUNC_8(VAR_0, "pool=%d\n", VAR_1.pool_num);


  FUNC_8(VAR_0, "pool_capacity=%d\n",
      VAR_1.active_procs_in_pool * 100);

  FUNC_3(&VAR_5, &VAR_6);
  FUNC_8(VAR_0, "pool_idle_time=%ld\n", VAR_5);
  FUNC_8(VAR_0, "pool_num_procs=%ld\n", VAR_6);
 }

 FUNC_8(VAR_0, "unallocated_capacity_weight=%d\n",
     VAR_1.unallocated_weight);
 FUNC_8(VAR_0, "capacity_weight=%d\n", VAR_1.weight);
 FUNC_8(VAR_0, "capped=%d\n", VAR_1.capped);
 FUNC_8(VAR_0, "unallocated_capacity=%lld\n",
     VAR_1.unallocated_entitlement);





 VAR_2 = FUNC_5("/");
 if (VAR_2) {
  VAR_3 = FUNC_6(VAR_2,
    "ibm,partition-performance-parameters-level",
          ((void*)0));
  if (VAR_3 && (FUNC_0(VAR_3) >= 1)) {
   FUNC_8(VAR_0,
       "physical_procs_allocated_to_virtualization=%d\n",
       VAR_1.phys_platform_procs);
   FUNC_8(VAR_0, "max_proc_capacity_available=%d\n",
       VAR_1.max_proc_cap_avail);
   FUNC_8(VAR_0, "entitled_proc_capacity_available=%d\n",
       VAR_1.entitled_proc_cap_avail);
  }

  FUNC_7(VAR_2);
 }
}
