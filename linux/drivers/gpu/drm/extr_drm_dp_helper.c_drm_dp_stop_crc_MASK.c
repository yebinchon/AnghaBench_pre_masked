
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_aux {int * crtc; int crc_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_dp_aux*,int ,int*) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_dp_aux *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_3 & ~VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(&VAR_2->crc_work);
 VAR_2->crtc = ((void*)0);

 return 0;
}
