
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct meson_drm*,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;

enum drm_mode_status
FUNC_1(struct meson_drm *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;


 VAR_3 *= 10;

 if (FUNC_0(VAR_2, VAR_3, &VAR_5, &VAR_6, &VAR_4))
  return VAR_1;

 return VAR_0;
}
