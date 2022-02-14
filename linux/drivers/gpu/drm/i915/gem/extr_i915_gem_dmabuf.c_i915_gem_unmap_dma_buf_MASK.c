
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int sgl; } ;
struct drm_i915_gem_object {int dummy; } ;
struct dma_buf_attachment {int dev; int dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 struct drm_i915_gem_object* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct sg_table*) ;
 int FUNC_4 (struct sg_table*) ;

__attribute__((used)) static void FUNC_5(struct dma_buf_attachment *VAR_0,
       struct sg_table *VAR_1,
       enum dma_data_direction VAR_2)
{
 struct drm_i915_gem_object *VAR_3 = FUNC_0(VAR_0->dmabuf);

 FUNC_1(VAR_0->dev, VAR_1->sgl, VAR_1->nents, VAR_2);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_2(VAR_3);
}
