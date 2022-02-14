
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct drm_gem_object* priv; } ;


 int FUNC_0 (struct sg_table*) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct sg_table*) ;

__attribute__((used)) static void FUNC_3(struct dma_buf_attachment *VAR_0,
  struct sg_table *VAR_1, enum dma_data_direction VAR_2)
{
 struct drm_gem_object *VAR_3 = VAR_0->dmabuf->priv;
 FUNC_1(VAR_3);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
