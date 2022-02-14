
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_6__ {TYPE_2__ plane; } ;
struct mxsfb_drm_private {TYPE_3__ pipe; } ;
struct drm_gem_cma_object {int paddr; } ;
struct drm_framebuffer {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 struct drm_gem_cma_object* FUNC_0 (struct drm_framebuffer*,int ) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct mxsfb_drm_private *VAR_0)
{
 struct drm_framebuffer *VAR_1 = VAR_0->pipe.plane.state->fb;
 struct drm_gem_cma_object *VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_1, 0);
 if (!VAR_2)
  return 0;

 return VAR_2->paddr;
}
