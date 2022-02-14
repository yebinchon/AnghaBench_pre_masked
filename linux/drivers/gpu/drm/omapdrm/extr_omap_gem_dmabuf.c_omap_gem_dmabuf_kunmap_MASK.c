
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct drm_gem_object*,struct page***,int) ;

__attribute__((used)) static void FUNC_2(struct dma_buf *VAR_0,
  unsigned long VAR_1, void *VAR_2)
{
 struct drm_gem_object *VAR_3 = VAR_0->priv;
 struct page **VAR_4;
 FUNC_1(VAR_3, &VAR_4, 0);
 FUNC_0(VAR_4[VAR_1]);
}
