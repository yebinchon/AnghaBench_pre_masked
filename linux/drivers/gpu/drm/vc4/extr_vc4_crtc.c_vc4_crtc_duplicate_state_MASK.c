
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct vc4_crtc_state {struct drm_crtc_state base; int margins; int feed_txp; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct vc4_crtc_state* FUNC_1 (int,int ) ;
 struct vc4_crtc_state* FUNC_2 (int ) ;

__attribute__((used)) static struct drm_crtc_state *FUNC_3(struct drm_crtc *VAR_1)
{
 struct vc4_crtc_state *VAR_2, *VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1->state);
 VAR_2->feed_txp = VAR_3->feed_txp;
 VAR_2->margins = VAR_3->margins;

 FUNC_0(VAR_1, &VAR_2->base);
 return &VAR_2->base;
}
