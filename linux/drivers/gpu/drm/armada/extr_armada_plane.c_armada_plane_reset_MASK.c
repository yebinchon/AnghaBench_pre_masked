
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {scalar_t__ state; } ;
struct armada_plane_state {int base; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 int FUNC_2 (scalar_t__) ;
 struct armada_plane_state* FUNC_3 (int,int ) ;

void FUNC_4(struct drm_plane *VAR_1)
{
 struct armada_plane_state *VAR_2;
 if (VAR_1->state)
  FUNC_0(VAR_1->state);
 FUNC_2(VAR_1->state);
 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (VAR_2)
  FUNC_1(VAR_1, &VAR_2->base);
}
