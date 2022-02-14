
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct vc4_plane_state {int dlist_count; int dlist_size; struct drm_plane_state base; void* dlist; scalar_t__ dlist_initialized; int lbm; } ;
struct drm_plane {void* state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_2 (struct vc4_plane_state*) ;
 void* FUNC_3 (void*,int,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static struct drm_plane_state *FUNC_5(struct drm_plane *VAR_1)
{
 struct vc4_plane_state *VAR_2;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_2 = FUNC_3(VAR_1->state, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_4(&VAR_2->lbm, 0, sizeof(VAR_2->lbm));
 VAR_2->dlist_initialized = 0;

 FUNC_1(VAR_1, &VAR_2->base);

 if (VAR_2->dlist) {
  VAR_2->dlist = FUNC_3(VAR_2->dlist,
        VAR_2->dlist_count * 4,
        VAR_0);
  if (!VAR_2->dlist) {
   FUNC_2(VAR_2);
   return ((void*)0);
  }
  VAR_2->dlist_size = VAR_2->dlist_count;
 }

 return &VAR_2->base;
}
