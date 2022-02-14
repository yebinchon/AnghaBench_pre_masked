
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv50_mstc {TYPE_2__* mstm; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {TYPE_1__** msto; } ;
struct TYPE_3__ {struct drm_encoder encoder; } ;


 struct nv50_mstc* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static struct drm_encoder *
FUNC_1(struct drm_connector *VAR_0)
{
 struct nv50_mstc *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->mstm->msto[0]->encoder;
}
