
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_link {int revision; } ;
struct drm_dp_aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_dp_aux*,int ,int *) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int ) ;

int FUNC_2(struct drm_dp_aux *VAR_3, struct drm_dp_link *VAR_4)
{
 u8 VAR_5;
 int VAR_6;


 if (VAR_4->revision < 0x11)
  return 0;

 VAR_6 = FUNC_0(VAR_3, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_1;

 VAR_6 = FUNC_1(VAR_3, VAR_0, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
