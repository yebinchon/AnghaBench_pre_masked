
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct exynos_drm_gem {int pages; int dma_attrs; scalar_t__ dma_addr; int cookie; int size; TYPE_1__ base; } ;
struct drm_device {int dev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_gem *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->base.dev;

 if (!VAR_0->dma_addr) {
  FUNC_0(VAR_1->dev, "dma_addr is invalid.\n");
  return;
 }

 FUNC_0(VAR_1->dev, "dma_addr(0x%lx), size(0x%lx)\n",
   (unsigned long)VAR_0->dma_addr, VAR_0->size);

 FUNC_1(FUNC_3(VAR_1), VAR_0->size, VAR_0->cookie,
   (dma_addr_t)VAR_0->dma_addr,
   VAR_0->dma_attrs);

 FUNC_2(VAR_0->pages);
}
