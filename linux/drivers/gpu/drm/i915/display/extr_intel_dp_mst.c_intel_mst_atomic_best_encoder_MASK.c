
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {TYPE_2__** mst_encoders; } ;
struct intel_crtc {size_t pipe; } ;
struct intel_connector {struct intel_dp* mst_port; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector_state {int crtc; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {struct drm_encoder base; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 struct intel_connector* FUNC_0 (struct drm_connector*) ;
 struct intel_crtc* FUNC_1 (int ) ;

__attribute__((used)) static struct drm_encoder *FUNC_2(struct drm_connector *VAR_0,
        struct drm_connector_state *VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_0(VAR_0);
 struct intel_dp *VAR_3 = VAR_2->mst_port;
 struct intel_crtc *VAR_4 = FUNC_1(VAR_1->crtc);

 return &VAR_3->mst_encoders[VAR_4->pipe]->base.base;
}
