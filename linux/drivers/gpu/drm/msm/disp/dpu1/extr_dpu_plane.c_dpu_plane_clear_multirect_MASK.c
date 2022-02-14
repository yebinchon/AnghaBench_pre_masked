
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct dpu_plane_state {int multirect_mode; int multirect_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dpu_plane_state* FUNC_0 (struct drm_plane_state const*) ;

void FUNC_1(const struct drm_plane_state *VAR_2)
{
 struct dpu_plane_state *VAR_3 = FUNC_0(VAR_2);

 VAR_3->multirect_index = VAR_1;
 VAR_3->multirect_mode = VAR_0;
}
