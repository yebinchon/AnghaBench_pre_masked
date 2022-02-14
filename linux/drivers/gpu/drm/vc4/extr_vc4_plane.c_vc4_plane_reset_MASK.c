
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_plane_state {int base; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 struct vc4_plane_state* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_1)
{
 struct vc4_plane_state *VAR_2;

 FUNC_0(VAR_1->state);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return;

 FUNC_1(VAR_1, &VAR_2->base);
}
