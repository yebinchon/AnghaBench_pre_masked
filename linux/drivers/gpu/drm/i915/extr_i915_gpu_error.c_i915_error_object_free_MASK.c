
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_error_object {int page_count; scalar_t__* pages; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct drm_i915_error_object*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_error_object *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->page_count; VAR_1++)
  FUNC_0((unsigned long)VAR_0->pages[VAR_1]);

 FUNC_1(VAR_0);
}
