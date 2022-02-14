
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct komeda_fb {int dummy; } ;
struct drm_framebuffer {int * obj; TYPE_1__* format; } ;
struct TYPE_2__ {size_t num_planes; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct komeda_fb*) ;
 struct komeda_fb* FUNC_3 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_4(struct drm_framebuffer *VAR_0)
{
 struct komeda_fb *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->format->num_planes; VAR_2++)
  FUNC_1(VAR_0->obj[VAR_2]);

 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
