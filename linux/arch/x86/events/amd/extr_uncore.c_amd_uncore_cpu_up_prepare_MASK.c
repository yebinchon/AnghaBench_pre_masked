
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_uncore {unsigned int cpu; int id; int * pmu; int * active_mask; int msr_base; int rdpmc_base; int num_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct amd_uncore* FUNC_0 (unsigned int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct amd_uncore*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct amd_uncore** FUNC_2 (scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_13)
{
 struct amd_uncore *VAR_14 = ((void*)0), *VAR_15;

 if (VAR_10) {
  VAR_14 = FUNC_0(VAR_13);
  if (!VAR_14)
   goto fail;
  VAR_14->cpu = VAR_13;
  VAR_14->num_counters = VAR_12;
  VAR_14->rdpmc_base = VAR_4;
  VAR_14->msr_base = VAR_1;
  VAR_14->active_mask = &VAR_7;
  VAR_14->pmu = &VAR_8;
  VAR_14->id = -1;
  *FUNC_2(VAR_10, VAR_13) = VAR_14;
 }

 if (VAR_9) {
  VAR_15 = FUNC_0(VAR_13);
  if (!VAR_15)
   goto fail;
  VAR_15->cpu = VAR_13;
  VAR_15->num_counters = VAR_11;
  VAR_15->rdpmc_base = VAR_3;
  VAR_15->msr_base = VAR_2;
  VAR_15->active_mask = &VAR_5;
  VAR_15->pmu = &VAR_6;
  VAR_15->id = -1;
  *FUNC_2(VAR_9, VAR_13) = VAR_15;
 }

 return 0;

fail:
 if (VAR_10)
  *FUNC_2(VAR_10, VAR_13) = ((void*)0);
 FUNC_1(VAR_14);
 return -VAR_0;
}
