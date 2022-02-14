
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct drm_plane {TYPE_1__* state; struct drm_property* alpha_property; int base; int dev; } ;
struct TYPE_2__ {int alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct drm_property*,int ) ;
 struct drm_property* FUNC_1 (int ,int ,char*,int ,int ) ;

int FUNC_2(struct drm_plane *VAR_2)
{
 struct drm_property *VAR_3;

 VAR_3 = FUNC_1(VAR_2->dev, 0, "alpha",
      0, VAR_0);
 if (!VAR_3)
  return -VAR_1;

 FUNC_0(&VAR_2->base, VAR_3, VAR_0);
 VAR_2->alpha_property = VAR_3;

 if (VAR_2->state)
  VAR_2->state->alpha = VAR_0;

 return 0;
}
