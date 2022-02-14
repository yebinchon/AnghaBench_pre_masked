
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct drm_framebuffer {int width; int height; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int,int) ;
 int VAR_0 ;

int FUNC_1(uint32_t VAR_1, uint32_t VAR_2,
         uint32_t VAR_3, uint32_t VAR_4,
         const struct drm_framebuffer *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = VAR_5->width << 16;
 VAR_7 = VAR_5->height << 16;


 if (VAR_3 > VAR_6 ||
     VAR_1 > VAR_6 - VAR_3 ||
     VAR_4 > VAR_7 ||
     VAR_2 > VAR_7 - VAR_4) {
  FUNC_0("Invalid source coordinates "
         "%u.%06ux%u.%06u+%u.%06u+%u.%06u (fb %ux%u)\n",
         VAR_3 >> 16, ((VAR_3 & 0xffff) * 15625) >> 10,
         VAR_4 >> 16, ((VAR_4 & 0xffff) * 15625) >> 10,
         VAR_1 >> 16, ((VAR_1 & 0xffff) * 15625) >> 10,
         VAR_2 >> 16, ((VAR_2 & 0xffff) * 15625) >> 10,
         VAR_5->width, VAR_5->height);
  return -VAR_0;
 }

 return 0;
}
