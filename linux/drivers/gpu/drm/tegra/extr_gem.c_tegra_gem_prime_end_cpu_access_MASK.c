
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bo {TYPE_1__* sgt; scalar_t__ pages; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct dma_buf {struct drm_gem_object* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int nents; int sgl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct tegra_bo* FUNC_1 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_2(struct dma_buf *VAR_1,
       enum dma_data_direction VAR_2)
{
 struct drm_gem_object *VAR_3 = VAR_1->priv;
 struct tegra_bo *VAR_4 = FUNC_1(VAR_3);
 struct drm_device *VAR_5 = VAR_3->dev;

 if (VAR_4->pages)
  FUNC_0(VAR_5->dev, VAR_4->sgt->sgl, VAR_4->sgt->nents,
           VAR_0);

 return 0;
}
