
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vc4_plane_state {scalar_t__ dlist_count; scalar_t__ pos0_offset; scalar_t__ pos2_offset; scalar_t__ ptr0_offset; size_t lbm_offset; scalar_t__* dlist; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {struct drm_plane_state* state; } ;


 int VAR_0 ;
 struct vc4_plane_state* FUNC_0 (struct drm_plane_state*) ;
 scalar_t__ FUNC_1 (struct drm_plane_state*) ;
 int FUNC_2 (struct drm_plane*,struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct vc4_plane_state *VAR_3, *VAR_4;
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3 = FUNC_0(VAR_1->state);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3->dlist_count != VAR_4->dlist_count ||
     VAR_3->pos0_offset != VAR_4->pos0_offset ||
     VAR_3->pos2_offset != VAR_4->pos2_offset ||
     VAR_3->ptr0_offset != VAR_4->ptr0_offset ||
     FUNC_1(VAR_1->state) != FUNC_1(VAR_2))
  return -VAR_0;




 for (VAR_6 = 0; VAR_6 < VAR_4->dlist_count; VAR_6++) {
  if (VAR_6 == VAR_4->pos0_offset ||
      VAR_6 == VAR_4->pos2_offset ||
      VAR_6 == VAR_4->ptr0_offset ||
      (VAR_4->lbm_offset &&
       VAR_6 == VAR_4->lbm_offset))
   continue;

  if (VAR_4->dlist[VAR_6] != VAR_3->dlist[VAR_6])
   return -VAR_0;
 }

 return 0;
}
