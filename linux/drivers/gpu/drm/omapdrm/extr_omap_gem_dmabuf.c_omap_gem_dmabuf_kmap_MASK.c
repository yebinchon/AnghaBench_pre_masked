
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;


 void* FUNC_0 (struct page*) ;
 int FUNC_1 (struct drm_gem_object*,unsigned long) ;
 int FUNC_2 (struct drm_gem_object*,struct page***,int) ;

__attribute__((used)) static void *FUNC_3(struct dma_buf *VAR_0,
  unsigned long VAR_1)
{
 struct drm_gem_object *VAR_2 = VAR_0->priv;
 struct page **VAR_3;
 FUNC_2(VAR_2, &VAR_3, 0);
 FUNC_1(VAR_2, VAR_1);
 return FUNC_0(VAR_3[VAR_1]);
}
