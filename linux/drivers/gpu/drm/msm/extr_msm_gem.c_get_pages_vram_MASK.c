
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct msm_gem_object {int vram_node; } ;
struct TYPE_4__ {int lock; int mm; } ;
struct msm_drm_private {TYPE_2__ vram; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int VAR_0 ;
 struct page** FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (int,int,int ) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct msm_gem_object* FUNC_8 (struct drm_gem_object*) ;

__attribute__((used)) static struct page **FUNC_9(struct drm_gem_object *VAR_3, int VAR_4)
{
 struct msm_gem_object *VAR_5 = FUNC_8(VAR_3);
 struct msm_drm_private *VAR_6 = VAR_3->dev->dev_private;
 dma_addr_t VAR_7;
 struct page **VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_3(VAR_4, sizeof(struct page *), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_6(&VAR_6->vram.lock);
 VAR_9 = FUNC_1(&VAR_6->vram.mm, VAR_5->vram_node, VAR_4);
 FUNC_7(&VAR_6->vram.lock);
 if (VAR_9) {
  FUNC_2(VAR_8);
  return FUNC_0(VAR_9);
 }

 VAR_7 = FUNC_5(VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8[VAR_10] = FUNC_4(VAR_7);
  VAR_7 += VAR_2;
 }

 return VAR_8;
}
