
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_6__ {TYPE_2__* ctm; int crtc; } ;
struct intel_crtc_state {int cgm_mode; TYPE_3__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_color_ctm {unsigned long long* matrix; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_5__ {struct drm_color_ctm* data; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int ,scalar_t__) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_crtc* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_10(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_9(VAR_2->base.dev);
 enum pipe VAR_4 = VAR_2->pipe;

 if (VAR_1->base.ctm) {
  const struct drm_color_ctm *VAR_5 = VAR_1->base.ctm->data;
  u16 VAR_6[9] = {};
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); VAR_7++) {
   u64 VAR_8 =
    ((1ULL << 63) - 1) & VAR_5->matrix[VAR_7];


   VAR_8 += 1 << (32 - 13);

   VAR_8 = FUNC_8(VAR_8, 0, VAR_0 - 1);


   if (VAR_5->matrix[VAR_7] & (1ULL << 63))
    VAR_6[VAR_7] = 1 << 15;
   VAR_6[VAR_7] |= ((VAR_8 >> 32) & 7) << 12;
   VAR_6[VAR_7] |= (VAR_8 >> 20) & 0xfff;
  }

  FUNC_7(FUNC_1(VAR_4),
      VAR_6[1] << 16 | VAR_6[0]);
  FUNC_7(FUNC_2(VAR_4),
      VAR_6[3] << 16 | VAR_6[2]);
  FUNC_7(FUNC_3(VAR_4),
      VAR_6[5] << 16 | VAR_6[4]);
  FUNC_7(FUNC_4(VAR_4),
      VAR_6[7] << 16 | VAR_6[6]);
  FUNC_7(FUNC_5(VAR_4), VAR_6[8]);
 }

 FUNC_7(FUNC_6(VAR_4), VAR_1->cgm_mode);
}
