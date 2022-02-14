
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_crtc {int flip_queue; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct radeon_crtc*) ;
 struct radeon_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0)
{
 struct radeon_crtc *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_0);
 FUNC_0(VAR_1->flip_queue);
 FUNC_2(VAR_1);
}
