
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmob_drm_crtc {int dpms; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct shmob_drm_crtc*) ;
 int FUNC_1 (struct shmob_drm_crtc*) ;
 struct shmob_drm_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1, int VAR_2)
{
 struct shmob_drm_crtc *VAR_3 = FUNC_2(VAR_1);

 if (VAR_3->dpms == VAR_2)
  return;

 if (VAR_2 == VAR_0)
  FUNC_0(VAR_3);
 else
  FUNC_1(VAR_3);

 VAR_3->dpms = VAR_2;
}
