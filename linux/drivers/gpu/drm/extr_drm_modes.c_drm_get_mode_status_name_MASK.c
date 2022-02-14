
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (int) ;
 char const** VAR_0 ;

const char *FUNC_2(enum drm_mode_status VAR_1)
{
 int VAR_2 = VAR_1 + 3;

 if (FUNC_1(VAR_2 < 0 || VAR_2 >= FUNC_0(VAR_0)))
  return "";

 return VAR_0[VAR_2];
}
