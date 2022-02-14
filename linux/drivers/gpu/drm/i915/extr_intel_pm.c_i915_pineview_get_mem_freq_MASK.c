
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int fsb_freq; int mem_freq; int is_ddr3; } ;


 int VAR_0 ;




 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_0);

 switch (VAR_6 & VAR_1) {
 case 133:
  VAR_5->fsb_freq = 533;
  break;
 case 131:
  VAR_5->fsb_freq = 800;
  break;
 case 132:
  VAR_5->fsb_freq = 667;
  break;
 case 134:
  VAR_5->fsb_freq = 400;
  break;
 }

 switch (VAR_6 & VAR_2) {
 case 130:
  VAR_5->mem_freq = 533;
  break;
 case 129:
  VAR_5->mem_freq = 667;
  break;
 case 128:
  VAR_5->mem_freq = 800;
  break;
 }


 VAR_6 = FUNC_0(VAR_3);
 VAR_5->is_ddr3 = (VAR_6 & VAR_4) ? 1 : 0;
}
