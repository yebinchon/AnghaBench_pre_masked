
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct armv8pmu_probe_info {int present; struct arm_pmu* pmu; } ;
struct arm_pmu {int num_events; int pmceid_ext_bitmap; int pmceid_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_7)
{
 struct armv8pmu_probe_info *VAR_8 = VAR_7;
 struct arm_pmu *VAR_9 = VAR_8->pmu;
 u64 VAR_10;
 u64 VAR_11[2];
 u32 VAR_12[2];
 int VAR_13;

 VAR_10 = FUNC_3(VAR_4);
 VAR_13 = FUNC_2(VAR_10,
   VAR_3);
 if (VAR_13 == 0xf || VAR_13 == 0)
  return;

 VAR_8->present = 1;


 VAR_9->num_events = (FUNC_0() >> VAR_2)
  & VAR_1;


 VAR_9->num_events += 1;

 VAR_12[0] = VAR_11[0] = FUNC_3(VAR_5);
 VAR_12[1] = VAR_11[1] = FUNC_3(VAR_6);

 FUNC_1(VAR_9->pmceid_bitmap,
        VAR_12, VAR_0);

 VAR_12[0] = VAR_11[0] >> 32;
 VAR_12[1] = VAR_11[1] >> 32;

 FUNC_1(VAR_9->pmceid_ext_bitmap,
        VAR_12, VAR_0);
}
