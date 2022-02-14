
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct mtk_crtc_state {TYPE_1__ base; } ;
struct drm_crtc {TYPE_1__* state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct mtk_crtc_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mtk_crtc_state*,int ,int) ;
 struct mtk_crtc_state* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_1)
{
 struct mtk_crtc_state *VAR_2;

 if (VAR_1->state) {
  FUNC_0(VAR_1->state);

  VAR_2 = FUNC_3(VAR_1->state);
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 } else {
  VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
  if (!VAR_2)
   return;
  VAR_1->state = &VAR_2->base;
 }

 VAR_2->base.crtc = VAR_1;
}
