
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_gem_object {TYPE_2__* vram_node; } ;
struct TYPE_6__ {int paddr; } ;
struct msm_drm_private {TYPE_3__ vram; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {scalar_t__ start; } ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;


 int VAR_0 ;
 struct msm_gem_object* FUNC_0 (struct drm_gem_object*) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct drm_gem_object *VAR_1)
{
 struct msm_gem_object *VAR_2 = FUNC_0(VAR_1);
 struct msm_drm_private *VAR_3 = VAR_1->dev->dev_private;
 return (((dma_addr_t)VAR_2->vram_node->start) << VAR_0) +
   VAR_3->vram.paddr;
}
