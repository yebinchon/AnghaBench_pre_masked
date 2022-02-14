
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_crtc_state {int active; } ;
struct TYPE_6__ {int id; } ;
struct drm_crtc {TYPE_1__* state; int name; TYPE_2__ base; } ;
struct armada_crtc {TYPE_3__* variant; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int (* enable ) (struct armada_crtc*,TYPE_4__*) ;} ;
struct TYPE_5__ {TYPE_4__ adjusted_mode; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct armada_crtc*,int) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 struct armada_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (struct armada_crtc*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_1,
       struct drm_crtc_state *VAR_2)
{
 struct armada_crtc *VAR_3 = FUNC_6(VAR_1);

 FUNC_0("[CRTC:%d:%s]\n", VAR_1->base.id, VAR_1->name);

 if (!VAR_2->active) {





  if (VAR_3->variant->enable)
   VAR_3->variant->enable(VAR_3, &VAR_1->state->adjusted_mode);
 }
 FUNC_3(VAR_3, 1);
 FUNC_5(VAR_1);

 if (VAR_1->state->adjusted_mode.flags & VAR_0)
  FUNC_1(FUNC_4(VAR_1));

 FUNC_2(VAR_1);
}
