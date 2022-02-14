
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef scalar_t__ uint32_t ;
struct xen_pmu_amd_ctxt {int dummy; } ;
struct TYPE_3__ {struct xen_pmu_amd_ctxt amd; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
struct xen_pmu_data {TYPE_2__ pmu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long* FUNC_0 (struct xen_pmu_amd_ctxt*,int ) ;
 struct xen_pmu_data* FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long long FUNC_3 (scalar_t__,int*) ;

__attribute__((used)) static unsigned long long FUNC_4(int VAR_4)
{
 struct xen_pmu_amd_ctxt *VAR_5;
 uint64_t *VAR_6;
 struct xen_pmu_data *VAR_7 = FUNC_1();
 uint8_t VAR_8 = FUNC_2();

 if (!VAR_7 || !(VAR_8 & VAR_0)) {
  uint32_t VAR_9;
  int VAR_10;

  VAR_9 = VAR_1 + (VAR_4 * VAR_2);
  return FUNC_3(VAR_9, &VAR_10);
 }

 VAR_5 = &VAR_7->pmu.c.amd;
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 return VAR_6[VAR_4];
}
