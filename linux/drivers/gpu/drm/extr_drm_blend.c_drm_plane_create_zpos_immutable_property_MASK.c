
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct drm_plane {TYPE_1__* state; struct drm_property* zpos_property; int base; int dev; } ;
struct TYPE_2__ {unsigned int zpos; unsigned int normalized_zpos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct drm_property*,unsigned int) ;
 struct drm_property* FUNC_1 (int ,int ,char*,unsigned int,unsigned int) ;

int FUNC_2(struct drm_plane *VAR_2,
          unsigned int VAR_3)
{
 struct drm_property *VAR_4;

 VAR_4 = FUNC_1(VAR_2->dev, VAR_0,
      "zpos", VAR_3, VAR_3);
 if (!VAR_4)
  return -VAR_1;

 FUNC_0(&VAR_2->base, VAR_4, VAR_3);

 VAR_2->zpos_property = VAR_4;

 if (VAR_2->state) {
  VAR_2->state->zpos = VAR_3;
  VAR_2->state->normalized_zpos = VAR_3;
 }

 return 0;
}
