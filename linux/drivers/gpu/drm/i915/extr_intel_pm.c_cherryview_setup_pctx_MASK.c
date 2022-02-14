
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int end; } ;
struct drm_i915_private {TYPE_1__ dsm; } ;
typedef int resource_size_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_3)
{
 resource_size_t VAR_4, VAR_5;
 resource_size_t VAR_6 = 32*1024;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_1);
 if ((VAR_7 >> VAR_2) == 0) {
  FUNC_0("BIOS didn't set up PCBR, fixing up\n");
  VAR_5 = VAR_3->dsm.end + 1 - VAR_6;
  FUNC_1(VAR_5 > VAR_0);

  VAR_4 = (VAR_5 & (~4095));
  FUNC_3(VAR_1, VAR_4);
 }

 FUNC_0("PCBR: 0x%08x\n", FUNC_2(VAR_1));
}
