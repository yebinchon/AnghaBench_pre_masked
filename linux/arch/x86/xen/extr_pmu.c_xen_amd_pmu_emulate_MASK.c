
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int u64 ;
struct xen_pmu_amd_ctxt {int dummy; } ;
struct TYPE_3__ {struct xen_pmu_amd_ctxt amd; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
struct xen_pmu_data {TYPE_2__ pmu; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (struct xen_pmu_amd_ctxt*,int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 struct xen_pmu_data* FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static bool FUNC_4(unsigned int VAR_10, u64 *VAR_11, bool VAR_12)
{
 uint64_t *VAR_13 = ((void*)0);
 int VAR_14, VAR_15 = 0;
 struct xen_pmu_amd_ctxt *VAR_16;
 uint64_t *VAR_17, *VAR_18;
 struct xen_pmu_data *VAR_19 = FUNC_2();
 uint8_t VAR_20 = FUNC_3();

 if (!VAR_19 || !(VAR_20 & VAR_2))
  return 0;

 if (VAR_9 &&
     ((VAR_10 >= VAR_0) && (VAR_10 <= VAR_1)))
  VAR_10 = FUNC_1(VAR_10);

 VAR_16 = &VAR_19->pmu.c.amd;
 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  if (VAR_10 == VAR_4 + VAR_15) {
   VAR_18 = FUNC_0(VAR_16, VAR_8);
   VAR_13 = &VAR_18[VAR_14];
   break;
  } else if (VAR_10 == VAR_3 + VAR_15) {
   VAR_17 = FUNC_0(VAR_16, VAR_7);
   VAR_13 = &VAR_17[VAR_14];
   break;
  }
  VAR_15 += VAR_5;
 }

 if (VAR_13) {
  if (VAR_12)
   *VAR_11 = *VAR_13;
  else
   *VAR_13 = *VAR_11;

  return 1;
 }
 return 0;
}
