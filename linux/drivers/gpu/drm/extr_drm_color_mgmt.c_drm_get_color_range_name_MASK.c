
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drm_color_range { ____Placeholder_drm_color_range } drm_color_range ;


 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (int) ;
 char const** VAR_0 ;

const char *FUNC_2(enum drm_color_range VAR_1)
{
 if (FUNC_1(VAR_1 >= FUNC_0(VAR_0)))
  return "unknown";

 return VAR_0[VAR_1];
}
