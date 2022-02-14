
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gem_object {int pages; int vram_node; } ;
struct TYPE_4__ {int lock; } ;
struct msm_drm_private {TYPE_2__ vram; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct msm_gem_object* FUNC_4 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_5(struct drm_gem_object *VAR_0)
{
 struct msm_gem_object *VAR_1 = FUNC_4(VAR_0);
 struct msm_drm_private *VAR_2 = VAR_0->dev->dev_private;

 FUNC_2(&VAR_2->vram.lock);
 FUNC_0(VAR_1->vram_node);
 FUNC_3(&VAR_2->vram.lock);

 FUNC_1(VAR_1->pages);
}
