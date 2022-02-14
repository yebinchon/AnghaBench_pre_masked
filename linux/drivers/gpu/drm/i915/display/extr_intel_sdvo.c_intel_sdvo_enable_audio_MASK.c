
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_sdvo {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {int* eld; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_connector*,struct drm_display_mode const*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct intel_sdvo*,int) ;
 int FUNC_3 (struct intel_sdvo*,int ,int ,int*,int ) ;

__attribute__((used)) static void FUNC_4(struct intel_sdvo *VAR_4,
        const struct intel_crtc_state *VAR_5,
        const struct drm_connector_state *VAR_6)
{
 const struct drm_display_mode *VAR_7 =
  &VAR_5->base.adjusted_mode;
 struct drm_connector *VAR_8 = VAR_6->connector;
 u8 *VAR_9 = VAR_8->eld;

 VAR_9[6] = FUNC_0(VAR_8, VAR_7) / 2;

 FUNC_2(VAR_4, 0);

 FUNC_3(VAR_4, VAR_2,
       VAR_3,
       VAR_9, FUNC_1(VAR_9));

 FUNC_2(VAR_4, VAR_0 |
       VAR_1);
}
