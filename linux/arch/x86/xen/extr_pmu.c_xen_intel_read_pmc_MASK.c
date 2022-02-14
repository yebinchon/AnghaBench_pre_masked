
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef scalar_t__ uint32_t ;
struct xen_pmu_intel_ctxt {int dummy; } ;
struct TYPE_3__ {struct xen_pmu_intel_ctxt intel; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
struct xen_pmu_data {TYPE_2__ pmu; } ;
struct xen_pmu_cntr_pair {unsigned long long counter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long long* VAR_4 ;
 void* FUNC_0 (struct xen_pmu_intel_ctxt*,unsigned long long*) ;
 struct xen_pmu_data* FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long long FUNC_3 (scalar_t__,int*) ;

__attribute__((used)) static unsigned long long FUNC_4(int VAR_5)
{
 struct xen_pmu_intel_ctxt *VAR_6;
 uint64_t *VAR_7;
 struct xen_pmu_cntr_pair *VAR_8;
 struct xen_pmu_data *VAR_9 = FUNC_1();
 uint8_t VAR_10 = FUNC_2();

 if (!VAR_9 || !(VAR_10 & VAR_3)) {
  uint32_t VAR_11;
  int VAR_12;

  if (VAR_5 & (1 << VAR_0))
   VAR_11 = VAR_1 + (VAR_5 & 0xffff);
  else
   VAR_11 = VAR_2 + VAR_5;

  return FUNC_3(VAR_11, &VAR_12);
 }

 VAR_6 = &VAR_9->pmu.c.intel;
 if (VAR_5 & (1 << VAR_0)) {
  VAR_7 = FUNC_0(VAR_6, VAR_7);
  return VAR_7[VAR_5 & 0xffff];
 }

 VAR_8 = FUNC_0(VAR_6, VAR_4);
 return VAR_8[VAR_5].counter;
}
