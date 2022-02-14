
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_color_lut {scalar_t__ red; scalar_t__ green; scalar_t__ blue; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct drm_color_lut *VAR_1, uint32_t VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {

  if ((VAR_1[VAR_3].red != VAR_1[VAR_3].green) || (VAR_1[VAR_3].green != VAR_1[VAR_3].blue))
   return 0;

  VAR_4 = VAR_3 * VAR_0 / (VAR_2-1);


  VAR_5 = VAR_1[VAR_3].red - VAR_4;
  if (VAR_5 < -1 || 1 < VAR_5)
   return 0;
 }
 return 1;
}
