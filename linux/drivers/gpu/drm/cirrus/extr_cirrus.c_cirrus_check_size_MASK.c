
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_1(int VAR_3, int VAR_4,
        struct drm_framebuffer *VAR_5)
{
 int VAR_6 = VAR_3 * 2;

 if (VAR_5)
  VAR_6 = FUNC_0(VAR_5);

 if (VAR_6 > VAR_0)
  return -VAR_2;
 if (VAR_6 * VAR_4 > VAR_1)
  return -VAR_2;
 return 0;
}
