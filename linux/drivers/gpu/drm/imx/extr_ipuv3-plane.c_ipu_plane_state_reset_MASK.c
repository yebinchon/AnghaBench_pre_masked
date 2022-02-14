
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int zpos; unsigned int normalized_zpos; } ;
struct ipu_plane_state {TYPE_1__ base; } ;
struct drm_plane {scalar_t__ type; int * state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_plane*,TYPE_1__*) ;
 int FUNC_2 (struct ipu_plane_state*) ;
 struct ipu_plane_state* FUNC_3 (int,int ) ;
 struct ipu_plane_state* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_2)
{
 unsigned int VAR_3 = (VAR_2->type == VAR_0) ? 0 : 1;
 struct ipu_plane_state *VAR_4;

 if (VAR_2->state) {
  VAR_4 = FUNC_4(VAR_2->state);
  FUNC_0(VAR_2->state);
  FUNC_2(VAR_4);
  VAR_2->state = ((void*)0);
 }

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);

 if (VAR_4) {
  FUNC_1(VAR_2, &VAR_4->base);
  VAR_4->base.zpos = VAR_3;
  VAR_4->base.normalized_zpos = VAR_3;
 }
}
