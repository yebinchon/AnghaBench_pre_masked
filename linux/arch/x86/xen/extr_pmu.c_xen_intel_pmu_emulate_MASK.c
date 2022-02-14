
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int u64 ;
struct xen_pmu_intel_ctxt {int global_status; int fixed_ctrl; int global_ctrl; int global_ovf_ctrl; } ;
struct TYPE_3__ {struct xen_pmu_intel_ctxt intel; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
struct xen_pmu_data {TYPE_2__ pmu; } ;
struct xen_pmu_cntr_pair {int control; int counter; } ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct xen_pmu_intel_ctxt*,int ) ;
 int VAR_2 ;
 struct xen_pmu_data* FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(unsigned int VAR_3, u64 *VAR_4, int VAR_5,
      int VAR_6, bool VAR_7)
{
 uint64_t *VAR_8 = ((void*)0);
 struct xen_pmu_intel_ctxt *VAR_9;
 uint64_t *VAR_10;
 struct xen_pmu_cntr_pair *VAR_11;
 struct xen_pmu_data *VAR_12 = FUNC_1();
 uint8_t VAR_13 = FUNC_2();


 if (!VAR_12 || !(VAR_13 & VAR_0))
  return 0;

 VAR_9 = &VAR_12->pmu.c.intel;

 switch (VAR_3) {
 case 132:
  VAR_8 = &VAR_9->global_ovf_ctrl;
  break;
 case 131:
  VAR_8 = &VAR_9->global_status;
  break;
 case 133:
  VAR_8 = &VAR_9->global_ctrl;
  break;
 case 134:
  VAR_8 = &VAR_9->fixed_ctrl;
  break;
 default:
  switch (VAR_5) {
  case 128:
   VAR_10 = FUNC_0(VAR_9, VAR_2);
   VAR_8 = &VAR_10[VAR_6];
   break;
  case 130:
   VAR_11 = FUNC_0(VAR_9, VAR_1);
   VAR_8 = &VAR_11[VAR_6].counter;
   break;
  case 129:
   VAR_11 = FUNC_0(VAR_9, VAR_1);
   VAR_8 = &VAR_11[VAR_6].control;
   break;
  default:
   return 0;
  }
 }

 if (VAR_8) {
  if (VAR_7)
   *VAR_4 = *VAR_8;
  else {
   *VAR_8 = *VAR_4;

   if (VAR_3 == 132)
    VAR_9->global_status &= (~(*VAR_4));
  }
  return 1;
 }

 return 0;
}
