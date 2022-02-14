
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int guc; } ;
struct intel_gt {TYPE_1__ uc; int i915; int ** engine_class; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct intel_gt *VAR_16, u32 VAR_17, u32 VAR_18[4])
{
 if (VAR_17 & (VAR_5 | VAR_2)) {
  FUNC_0(VAR_16->engine_class[VAR_13][0],
          VAR_18[0] >> VAR_9);
  FUNC_0(VAR_16->engine_class[VAR_0][0],
          VAR_18[0] >> VAR_1);
 }

 if (VAR_17 & (VAR_6 | VAR_7)) {
  FUNC_0(VAR_16->engine_class[VAR_14][0],
          VAR_18[1] >> VAR_10);
  FUNC_0(VAR_16->engine_class[VAR_14][1],
          VAR_18[1] >> VAR_11);
 }

 if (VAR_17 & VAR_8) {
  FUNC_0(VAR_16->engine_class[VAR_15][0],
          VAR_18[3] >> VAR_12);
 }

 if (VAR_17 & (VAR_4 | VAR_3)) {
  FUNC_1(VAR_16->i915, VAR_18[2]);
  FUNC_2(&VAR_16->uc.guc, VAR_18[2] >> 16);
 }
}
