
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_error_object {int page_count; void** pages; } ;
struct compress {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ) ;
 void* FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct compress *VAR_3,
    void *VAR_4,
    struct drm_i915_error_object *VAR_5)
{
 void *VAR_6;

 VAR_6 = FUNC_2(&VAR_3->pool, VAR_0);
 if (!VAR_6)
  return -VAR_1;

 if (!FUNC_0(VAR_6, VAR_4, VAR_2))
  FUNC_1(VAR_6, VAR_4, VAR_2);
 VAR_5->pages[VAR_5->page_count++] = VAR_6;

 return 0;
}
