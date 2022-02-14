
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {int * eld; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (struct drm_connector*,int ,int,int ,int,int ) ;
 int FUNC_6 (int,int) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_8,
       const struct intel_crtc_state *VAR_9,
       const struct drm_connector_state *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_7(VAR_8->base.dev);
 struct drm_connector *VAR_12 = VAR_10->connector;
 const u8 *VAR_13 = VAR_12->eld;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17;

 FUNC_1("Enable audio codec, %u bytes ELD\n", FUNC_4(VAR_13));

 VAR_15 = FUNC_2(VAR_1);
 if (VAR_15 == VAR_6 || VAR_15 == VAR_7)
  VAR_14 = VAR_2;
 else
  VAR_14 = VAR_3;

 if (FUNC_5(VAR_12,
          VAR_0, VAR_14,
          VAR_0, VAR_4,
          VAR_5))
  return;

 VAR_15 = FUNC_2(VAR_0);
 VAR_15 &= ~(VAR_14 | VAR_4);
 VAR_16 = (VAR_15 >> 9) & 0x1f;
 FUNC_3(VAR_0, VAR_15);

 VAR_16 = FUNC_6(FUNC_4(VAR_13) / 4, VAR_16);
 FUNC_0("ELD size %d\n", VAR_16);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
  FUNC_3(VAR_5, *((const u32 *)VAR_13 + VAR_17));

 VAR_15 = FUNC_2(VAR_0);
 VAR_15 |= VAR_14;
 FUNC_3(VAR_0, VAR_15);
}
