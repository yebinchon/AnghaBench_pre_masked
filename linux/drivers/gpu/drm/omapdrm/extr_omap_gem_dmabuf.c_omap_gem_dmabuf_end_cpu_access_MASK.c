
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_1(struct dma_buf *VAR_0,
       enum dma_data_direction VAR_1)
{
 struct drm_gem_object *VAR_2 = VAR_0->priv;
 FUNC_0(VAR_2);
 return 0;
}
