
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_frontbuffer {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_2__ {struct intel_frontbuffer* frontbuffer; } ;


 TYPE_1__* FUNC_0 (struct drm_framebuffer*) ;

__attribute__((used)) static struct intel_frontbuffer *
FUNC_1(struct drm_framebuffer *VAR_0)
{
 return VAR_0 ? FUNC_0(VAR_0)->frontbuffer : ((void*)0);
}
