
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_connector {int port; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_crtc_state {scalar_t__ enable; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector_state {int best_encoder; struct drm_crtc* crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_6__ {TYPE_2__* primary; } ;
struct TYPE_4__ {struct drm_dp_mst_topology_mgr mst_mgr; } ;
struct TYPE_5__ {TYPE_1__ dp; } ;


 int FUNC_0 (struct drm_crtc_state*) ;
 struct drm_connector_state* FUNC_1 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_connector_state* FUNC_3 (struct drm_atomic_state*,struct drm_connector*) ;
 int FUNC_4 (struct drm_atomic_state*,struct drm_dp_mst_topology_mgr*,int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (struct drm_connector*,struct drm_atomic_state*) ;
 struct intel_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_8(struct drm_connector *VAR_0,
     struct drm_atomic_state *VAR_1)
{
 struct drm_connector_state *VAR_2 =
  FUNC_1(VAR_1, VAR_0);
 struct drm_connector_state *VAR_3 =
  FUNC_3(VAR_1, VAR_0);
 struct intel_connector *VAR_4 =
  FUNC_7(VAR_0);
 struct drm_crtc *VAR_5 = VAR_2->crtc;
 struct drm_crtc_state *VAR_6;
 struct drm_dp_mst_topology_mgr *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_0, VAR_1);
 if (VAR_8)
  return VAR_8;

 if (!VAR_3->crtc)
  return 0;




 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_1, VAR_5);

  if (!VAR_6 ||
      !FUNC_0(VAR_6) ||
      VAR_6->enable)
   return 0;
 }

 VAR_7 = &FUNC_5(VAR_3->best_encoder)->primary->dp.mst_mgr;
 VAR_8 = FUNC_4(VAR_1, VAR_7,
            VAR_4->port);

 return VAR_8;
}
