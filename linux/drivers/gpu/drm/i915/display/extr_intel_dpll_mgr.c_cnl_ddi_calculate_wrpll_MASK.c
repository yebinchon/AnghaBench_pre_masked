
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skl_wrpll_params {int dummy; } ;
struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {int port_clock; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int,int*,int*,int*) ;
 int FUNC_4 (struct skl_wrpll_params*,int,int,int,int,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(struct intel_crtc_state *VAR_1,
   struct skl_wrpll_params *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_1->base.crtc->dev);
 u32 VAR_4 = VAR_1->port_clock * 5;
 u32 VAR_5;
 u32 VAR_6 = 7998000;
 u32 VAR_7 = 10000000;
 u32 VAR_8 = (VAR_6 + VAR_7) / 2;
 static const int VAR_9[] = { 2, 4, 6, 8, 10, 12, 14, 16,
      18, 20, 24, 28, 30, 32, 36, 40,
      42, 44, 48, 50, 52, 54, 56, 60,
      64, 66, 68, 70, 72, 76, 78, 80,
      84, 88, 90, 92, 96, 98, 100, 102,
       3, 5, 7, 9, 15, 21 };
 u32 VAR_10, VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13 = VAR_0;
 int VAR_14, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9); VAR_14++) {
  VAR_10 = VAR_4 * VAR_9[VAR_14];

  if ((VAR_10 <= VAR_7) && (VAR_10 >= VAR_6)) {
   VAR_12 = FUNC_1(VAR_10 - VAR_8);

   if (VAR_12 < VAR_13) {
    VAR_13 = VAR_12;
    VAR_15 = VAR_9[VAR_14];
    VAR_11 = VAR_10;
   }
  }
 }

 if (VAR_15 == 0)
  return 0;

 FUNC_3(VAR_15, &VAR_16, &VAR_17, &VAR_18);

 VAR_5 = FUNC_2(VAR_3);

 FUNC_4(VAR_2, VAR_11, VAR_5,
      VAR_16, VAR_17, VAR_18);

 return 1;
}
