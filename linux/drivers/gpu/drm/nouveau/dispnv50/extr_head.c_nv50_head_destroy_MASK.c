
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_head {int olut; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct nv50_head*) ;
 struct nv50_head* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct drm_crtc *VAR_0)
{
 struct nv50_head *VAR_1 = FUNC_2(VAR_0);
 FUNC_3(&VAR_1->olut);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
