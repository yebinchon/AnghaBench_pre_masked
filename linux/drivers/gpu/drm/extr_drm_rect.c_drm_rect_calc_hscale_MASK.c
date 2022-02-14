
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_rect const*) ;

int FUNC_2(const struct drm_rect *VAR_1,
    const struct drm_rect *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = FUNC_1(VAR_2);
 int VAR_7 = FUNC_0(VAR_5, VAR_6);

 if (VAR_7 < 0 || VAR_6 == 0)
  return VAR_7;

 if (VAR_7 < VAR_3 || VAR_7 > VAR_4)
  return -VAR_0;

 return VAR_7;
}
