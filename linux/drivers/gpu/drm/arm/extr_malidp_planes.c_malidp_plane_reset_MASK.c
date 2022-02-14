
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_plane_state {int base; } ;
struct drm_plane {int * state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 int FUNC_2 (struct malidp_plane_state*) ;
 struct malidp_plane_state* FUNC_3 (int,int ) ;
 struct malidp_plane_state* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_1)
{
 struct malidp_plane_state *VAR_2 = FUNC_4(VAR_1->state);

 if (VAR_2)
  FUNC_0(&VAR_2->base);
 FUNC_2(VAR_2);
 VAR_1->state = ((void*)0);
 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (VAR_2)
  FUNC_1(VAR_1, &VAR_2->base);
}
