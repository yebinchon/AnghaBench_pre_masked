
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv50_mstc {TYPE_2__* mstm; } ;
struct TYPE_6__ {size_t index; } ;
struct nv50_head {TYPE_3__ base; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector_state {int crtc; } ;
struct drm_connector {int dummy; } ;
struct TYPE_5__ {TYPE_1__** msto; } ;
struct TYPE_4__ {struct drm_encoder encoder; } ;


 struct nv50_head* FUNC_0 (int ) ;
 struct nv50_mstc* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static struct drm_encoder *
FUNC_2(struct drm_connector *VAR_0,
         struct drm_connector_state *VAR_1)
{
 struct nv50_head *VAR_2 = FUNC_0(VAR_1->crtc);
 struct nv50_mstc *VAR_3 = FUNC_1(VAR_0);

 return &VAR_3->mstm->msto[VAR_2->base.index]->encoder;
}
