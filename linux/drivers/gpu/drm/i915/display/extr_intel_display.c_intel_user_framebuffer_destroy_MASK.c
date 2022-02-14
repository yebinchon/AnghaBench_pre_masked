
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_framebuffer {int frontbuffer; } ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_framebuffer*) ;
 struct intel_framebuffer* FUNC_3 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_4(struct drm_framebuffer *VAR_0)
{
 struct intel_framebuffer *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1->frontbuffer);

 FUNC_2(VAR_1);
}
