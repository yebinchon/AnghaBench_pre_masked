
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct drm_gem_shmem_object {scalar_t__ pages_use_count; int * pages; int pages_mark_accessed_on_put; int pages_mark_dirty_on_put; struct drm_gem_object base; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_gem_object*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_gem_shmem_object *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->base;

 if (FUNC_0(!VAR_0->pages_use_count))
  return;

 if (--VAR_0->pages_use_count > 0)
  return;

 FUNC_1(VAR_1, VAR_0->pages,
     VAR_0->pages_mark_dirty_on_put,
     VAR_0->pages_mark_accessed_on_put);
 VAR_0->pages = ((void*)0);
}
