
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bo {scalar_t__ pages; } ;
struct sg_table {int nents; int sgl; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf_attachment {int dev; TYPE_1__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct drm_gem_object* priv; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct sg_table*) ;
 int FUNC_2 (struct sg_table*) ;
 struct tegra_bo* FUNC_3 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_4(struct dma_buf_attachment *VAR_0,
       struct sg_table *VAR_1,
       enum dma_data_direction VAR_2)
{
 struct drm_gem_object *VAR_3 = VAR_0->dmabuf->priv;
 struct tegra_bo *VAR_4 = FUNC_3(VAR_3);

 if (VAR_4->pages)
  FUNC_0(VAR_0->dev, VAR_1->sgl, VAR_1->nents, VAR_2);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
