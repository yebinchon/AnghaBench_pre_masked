
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_mstc {int port; TYPE_1__* mstm; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_crtc_state {scalar_t__ enable; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector_state {struct drm_crtc* crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_2__ {struct drm_dp_mst_topology_mgr mgr; } ;


 int FUNC_0 (struct drm_crtc_state*) ;
 struct drm_connector_state* FUNC_1 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_connector_state* FUNC_3 (struct drm_atomic_state*,struct drm_connector*) ;
 int FUNC_4 (struct drm_atomic_state*,struct drm_dp_mst_topology_mgr*,int ) ;
 struct nv50_mstc* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_6(struct drm_connector *VAR_0,
         struct drm_atomic_state *VAR_1)
{
 struct nv50_mstc *VAR_2 = FUNC_5(VAR_0);
 struct drm_dp_mst_topology_mgr *VAR_3 = &VAR_2->mstm->mgr;
 struct drm_connector_state *VAR_4 =
  FUNC_1(VAR_1, VAR_0);
 struct drm_connector_state *VAR_5 =
  FUNC_3(VAR_1, VAR_0);
 struct drm_crtc_state *VAR_6;
 struct drm_crtc *VAR_7 = VAR_4->crtc;

 if (!VAR_5->crtc)
  return 0;




 if (VAR_7) {
  VAR_6 = FUNC_2(VAR_1, VAR_7);

  if (!VAR_6 ||
      !FUNC_0(VAR_6) ||
      VAR_6->enable)
   return 0;
 }

 return FUNC_4(VAR_1, VAR_3, VAR_2->port);
}
