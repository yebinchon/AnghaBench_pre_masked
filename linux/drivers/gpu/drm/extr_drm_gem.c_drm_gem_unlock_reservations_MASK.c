
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct drm_gem_object {int resv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ww_acquire_ctx*) ;

void
FUNC_2(struct drm_gem_object **VAR_0, int VAR_1,
       struct ww_acquire_ctx *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_0[VAR_3]->resv);

 FUNC_1(VAR_2);
}
