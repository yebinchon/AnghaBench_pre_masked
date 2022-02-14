
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct amdgpu_crtc {int * connector; int * encoder; int pll_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc*,int ) ;
 struct amdgpu_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_2)
{
 struct amdgpu_crtc *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_1);

 VAR_3->pll_id = VAR_0;
 VAR_3->encoder = ((void*)0);
 VAR_3->connector = ((void*)0);
}
