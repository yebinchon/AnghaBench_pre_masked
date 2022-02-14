
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct TYPE_2__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct intel_encoder*,struct drm_connector*,int,int) ;

__attribute__((used)) static void FUNC_3(struct intel_encoder *VAR_0,
       const struct intel_crtc_state *VAR_1,
       const struct drm_connector_state *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->connector;

 if (VAR_1->has_audio)
  FUNC_1(VAR_0,
       VAR_1, VAR_2);

 if (!FUNC_2(VAR_0, VAR_3,
            0, 0))
  FUNC_0("[CONNECTOR:%d:%s] Failed to reset sink scrambling/TMDS bit clock ratio\n",
         VAR_3->base.id, VAR_3->name);
}
