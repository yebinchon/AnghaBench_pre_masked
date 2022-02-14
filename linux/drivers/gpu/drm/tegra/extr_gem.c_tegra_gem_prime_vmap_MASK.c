
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bo {void* vaddr; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;


 struct tegra_bo* FUNC_0 (struct drm_gem_object*) ;

__attribute__((used)) static void *FUNC_1(struct dma_buf *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->priv;
 struct tegra_bo *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->vaddr;
}
