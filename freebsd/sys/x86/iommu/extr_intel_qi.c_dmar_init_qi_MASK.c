
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct dmar_unit {int hw_cap; int qi_enabled; int inv_waitd_seq; unsigned long long inv_queue_size; int inv_queue; int inv_waitd_seq_hw; void* inv_waitd_seq_hw_phys; scalar_t__ inv_queue_avail; scalar_t__ inv_waitd_gen; int unit; int qi_taskqueue; int qi_task; int tlb_flush_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_unit*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (struct dmar_unit*) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long long VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,struct dmar_unit*) ;
 int FUNC_5 (char*,int*) ;
 int VAR_12 ;
 int FUNC_6 (struct dmar_unit*) ;
 int FUNC_7 (struct dmar_unit*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct dmar_unit*,int ) ;
 int FUNC_9 (struct dmar_unit*,int ,int) ;
 int FUNC_10 (struct dmar_unit*,int ,int) ;
 int FUNC_11 (unsigned long long,int,int ,int ,unsigned long long,int ,int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (char*,int,int ,int *) ;
 int FUNC_14 (int *,int,int ,char*,int ) ;
 int VAR_15 ;

int
FUNC_15(struct dmar_unit *VAR_16)
{
 uint64_t VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 if (!FUNC_0(VAR_16) || (VAR_16->hw_cap & VAR_0) != 0)
  return (0);
 VAR_16->qi_enabled = 1;
 FUNC_5("hw.dmar.qi", &VAR_16->qi_enabled);
 if (!VAR_16->qi_enabled)
  return (0);

 FUNC_3(&VAR_16->tlb_flush_entries);
 FUNC_4(&VAR_16->qi_task, 0, VAR_14, VAR_16);
 VAR_16->qi_taskqueue = FUNC_13("dmarqf", VAR_8,
     VAR_15, &VAR_16->qi_taskqueue);
 FUNC_14(&VAR_16->qi_taskqueue, 1, VAR_11,
     "dmar%d qi taskq", VAR_16->unit);

 VAR_16->inv_waitd_gen = 0;
 VAR_16->inv_waitd_seq = 1;

 VAR_19 = VAR_3;
 FUNC_5("hw.dmar.qi_size", &VAR_19);
 if (VAR_19 > VAR_4)
  VAR_19 = VAR_4;
 VAR_16->inv_queue_size = (1ULL << VAR_19) * VAR_10;

 VAR_16->inv_queue_avail = VAR_16->inv_queue_size - VAR_7;


 VAR_16->inv_queue = FUNC_11(VAR_16->inv_queue_size, VAR_8 |
     VAR_9, 0, VAR_13, VAR_10, 0, VAR_12);
 VAR_16->inv_waitd_seq_hw_phys = FUNC_12(
     (vm_offset_t)&VAR_16->inv_waitd_seq_hw);

 FUNC_1(VAR_16);
 FUNC_10(VAR_16, VAR_6, 0);
 VAR_17 = FUNC_12(VAR_16->inv_queue);
 VAR_17 |= VAR_19;
 FUNC_10(VAR_16, VAR_5, VAR_17);
 FUNC_6(VAR_16);
 VAR_18 = FUNC_8(VAR_16, VAR_2);
 if ((VAR_18 & VAR_1) != 0) {
  VAR_18 = VAR_1;
  FUNC_9(VAR_16, VAR_2, VAR_18);
 }
 FUNC_7(VAR_16);
 FUNC_2(VAR_16);

 return (0);
}
