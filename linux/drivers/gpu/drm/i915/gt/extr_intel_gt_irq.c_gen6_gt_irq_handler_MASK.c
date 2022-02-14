
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gt {int i915; int ** engine_class; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (struct intel_gt*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct intel_gt *VAR_9, u32 VAR_10)
{
 if (VAR_10 & VAR_6)
  FUNC_3(VAR_9->engine_class[VAR_7][0]);
 if (VAR_10 & VAR_4)
  FUNC_3(VAR_9->engine_class[VAR_8][0]);
 if (VAR_10 & VAR_2)
  FUNC_3(VAR_9->engine_class[VAR_0][0]);

 if (VAR_10 & (VAR_1 |
        VAR_3 |
        VAR_5))
  FUNC_0("Command parser error, gt_iir 0x%08x\n", VAR_10);

 if (VAR_10 & FUNC_1(VAR_9->i915))
  FUNC_2(VAR_9, VAR_10);
}
