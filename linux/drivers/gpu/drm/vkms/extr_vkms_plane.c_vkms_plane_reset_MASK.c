
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_plane* plane; } ;
struct vkms_plane_state {TYPE_1__ base; } ;
struct drm_plane {TYPE_1__* state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct vkms_plane_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct drm_plane*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_1)
{
 struct vkms_plane_state *VAR_2;

 if (VAR_1->state)
  FUNC_2(VAR_1, VAR_1->state);

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_0("Cannot allocate vkms_plane_state\n");
  return;
 }

 VAR_1->state = &VAR_2->base;
 VAR_1->state->plane = VAR_1;
}
