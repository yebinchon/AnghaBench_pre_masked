
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_self_refresh_data {int entry_work; } ;
struct drm_crtc {struct drm_self_refresh_data* self_refresh_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_self_refresh_data*) ;

void FUNC_2(struct drm_crtc *VAR_0)
{
 struct drm_self_refresh_data *VAR_1 = VAR_0->self_refresh_data;


 if (!VAR_1)
  return;

 VAR_0->self_refresh_data = ((void*)0);

 FUNC_0(&VAR_1->entry_work);
 FUNC_1(VAR_1);
}
