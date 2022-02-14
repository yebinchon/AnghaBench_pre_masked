
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct drm_plane {TYPE_1__* state; struct drm_property* zpos_property; int base; int dev; } ;
struct TYPE_2__ {unsigned int zpos; unsigned int normalized_zpos; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct drm_property*,unsigned int) ;
 struct drm_property* FUNC_1 (int ,int ,char*,unsigned int,unsigned int) ;

int FUNC_2(struct drm_plane *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 struct drm_property *VAR_5;

 VAR_5 = FUNC_1(VAR_1->dev, 0, "zpos", VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_1->base, VAR_5, VAR_2);

 VAR_1->zpos_property = VAR_5;

 if (VAR_1->state) {
  VAR_1->state->zpos = VAR_2;
  VAR_1->state->normalized_zpos = VAR_2;
 }

 return 0;
}
