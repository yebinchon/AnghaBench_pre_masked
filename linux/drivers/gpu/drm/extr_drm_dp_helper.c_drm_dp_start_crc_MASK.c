
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_aux {int crc_work; struct drm_crtc* crtc; scalar_t__ crc_count; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_dp_aux*,int ,int*) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_dp_aux *VAR_2, struct drm_crtc *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_4 | VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->crc_count = 0;
 VAR_2->crtc = VAR_3;
 FUNC_2(&VAR_2->crc_work);

 return 0;
}
