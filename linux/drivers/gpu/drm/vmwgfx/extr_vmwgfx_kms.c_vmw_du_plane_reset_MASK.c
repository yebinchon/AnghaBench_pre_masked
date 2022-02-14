
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_plane_state {int base; } ;
struct drm_plane {scalar_t__ state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_plane*,int *) ;
 struct vmw_plane_state* FUNC_2 (int,int ) ;
 int FUNC_3 (struct drm_plane*,scalar_t__) ;

void FUNC_4(struct drm_plane *VAR_1)
{
 struct vmw_plane_state *VAR_2;


 if (VAR_1->state)
  FUNC_3(VAR_1, VAR_1->state);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);

 if (!VAR_2) {
  FUNC_0("Cannot allocate vmw_plane_state\n");
  return;
 }

 FUNC_1(VAR_1, &VAR_2->base);
}
