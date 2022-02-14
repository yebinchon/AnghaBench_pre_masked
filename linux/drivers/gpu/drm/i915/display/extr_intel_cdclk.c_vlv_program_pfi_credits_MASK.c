
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cdclk; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {scalar_t__ czclk_freq; TYPE_2__ cdclk; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 if (FUNC_2(VAR_4))
  VAR_6 = FUNC_3(12);
 else
  VAR_6 = FUNC_3(8);

 if (VAR_4->cdclk.hw.cdclk >= VAR_4->czclk_freq) {

  if (FUNC_2(VAR_4))
   VAR_5 = VAR_1;
  else
   VAR_5 = FUNC_3(15);
 } else {
  VAR_5 = VAR_6;
 }





 FUNC_1(VAR_0, VAR_3 |
     VAR_6);

 FUNC_1(VAR_0, VAR_3 |
     VAR_5 | VAR_2);





 FUNC_4(FUNC_0(VAR_0) & VAR_2);
}
