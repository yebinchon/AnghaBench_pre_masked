
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ilk_wm_values {int* wm_lp; } ;
struct TYPE_2__ {struct ilk_wm_values hw; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_4,
          unsigned int VAR_5)
{
 struct ilk_wm_values *VAR_6 = &VAR_4->wm.hw;
 bool VAR_7 = 0;

 if (VAR_5 & FUNC_1(3) && VAR_6->wm_lp[2] & VAR_1) {
  VAR_6->wm_lp[2] &= ~VAR_1;
  FUNC_0(VAR_3, VAR_6->wm_lp[2]);
  VAR_7 = 1;
 }
 if (VAR_5 & FUNC_1(2) && VAR_6->wm_lp[1] & VAR_1) {
  VAR_6->wm_lp[1] &= ~VAR_1;
  FUNC_0(VAR_2, VAR_6->wm_lp[1]);
  VAR_7 = 1;
 }
 if (VAR_5 & FUNC_1(1) && VAR_6->wm_lp[0] & VAR_1) {
  VAR_6->wm_lp[0] &= ~VAR_1;
  FUNC_0(VAR_0, VAR_6->wm_lp[0]);
  VAR_7 = 1;
 }






 return VAR_7;
}
