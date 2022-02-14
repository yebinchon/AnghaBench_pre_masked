
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int * obj; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_framebuffer*) ;

void FUNC_3(struct drm_framebuffer *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
  FUNC_1(VAR_0->obj[VAR_1]);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
