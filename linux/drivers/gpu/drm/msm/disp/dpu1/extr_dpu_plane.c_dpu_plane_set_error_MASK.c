
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
struct dpu_plane {int is_error; } ;


 struct dpu_plane* FUNC_0 (struct drm_plane*) ;

void FUNC_1(struct drm_plane *VAR_0, bool VAR_1)
{
 struct dpu_plane *VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->is_error = VAR_1;
}
