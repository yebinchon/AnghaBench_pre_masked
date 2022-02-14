
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv50_mstm {int mgr; } ;
struct nv50_mstc {int native; int port; struct nv50_mstm* mstm; } ;
struct TYPE_6__ {int tu; int pbn; } ;
struct nv50_head_atom {TYPE_3__ dp; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_5__ {int clock; } ;
struct drm_crtc_state {TYPE_2__ adjusted_mode; scalar_t__ connectors_changed; scalar_t__ mode_changed; struct drm_atomic_state* state; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct TYPE_4__ {int bpc; } ;
struct drm_connector {TYPE_1__ display_info; } ;
struct drm_atomic_state {int duplicated; } ;


 int FUNC_0 (struct drm_atomic_state*,int *,int ,int ) ;
 int FUNC_1 (int const,int const) ;
 struct nv50_head_atom* FUNC_2 (struct drm_crtc_state*) ;
 struct nv50_mstc* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_encoder*,struct drm_crtc_state*,struct drm_connector_state*,int ) ;

__attribute__((used)) static int
FUNC_5(struct drm_encoder *VAR_0,
         struct drm_crtc_state *VAR_1,
         struct drm_connector_state *VAR_2)
{
 struct drm_atomic_state *VAR_3 = VAR_1->state;
 struct drm_connector *VAR_4 = VAR_2->connector;
 struct nv50_mstc *VAR_5 = FUNC_3(VAR_4);
 struct nv50_mstm *VAR_6 = VAR_5->mstm;
 struct nv50_head_atom *VAR_7 = FUNC_2(VAR_1);
 int VAR_8;

 if (VAR_1->mode_changed || VAR_1->connectors_changed) {






  if (!VAR_3->duplicated) {
   const int VAR_9 = VAR_4->display_info.bpc * 3;
   const int VAR_10 = VAR_1->adjusted_mode.clock;

   VAR_7->dp.pbn = FUNC_1(VAR_10, VAR_9);
  }

  VAR_8 = FUNC_0(VAR_3, &VAR_6->mgr,
            VAR_5->port,
            VAR_7->dp.pbn);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_7->dp.tu = VAR_8;
 }

 return FUNC_4(VAR_0, VAR_1, VAR_2,
        VAR_5->native);
}
