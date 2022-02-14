
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*,struct page***,int) ;

__attribute__((used)) static int FUNC_2(struct dma_buf *VAR_2,
  enum dma_data_direction VAR_3)
{
 struct drm_gem_object *VAR_4 = VAR_2->priv;
 struct page **VAR_5;
 if (FUNC_0(VAR_4) & VAR_1) {



  return -VAR_0;
 }

 return FUNC_1(VAR_4, &VAR_5, 1);
}
