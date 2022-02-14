
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(const struct drm_framebuffer *VAR_1, uint8_t VAR_2,
               uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6,
               uint32_t VAR_7, uint32_t VAR_8)
{
 if (VAR_7 < (VAR_5 >> VAR_2) || VAR_8 < (VAR_6 >> VAR_2)) {
  FUNC_0("Unsuitable framebuffer scaling: %dx%d -> %dx%d\n",
         VAR_5, VAR_6, VAR_7, VAR_8);
  return -VAR_0;
 }

 if (VAR_3 != 0 || VAR_4 != 0) {
  FUNC_0("Unsuitable framebuffer offset: %d,%d\n",
                              VAR_3, VAR_4);
  return -VAR_0;
 }

 return 0;
}
