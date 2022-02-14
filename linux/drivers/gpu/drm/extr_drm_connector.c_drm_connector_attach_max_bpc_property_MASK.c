
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {TYPE_1__* state; int base; struct drm_property* max_bpc_property; struct drm_device* dev; } ;
struct TYPE_2__ {int max_requested_bpc; int max_bpc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct drm_property*,int) ;
 struct drm_property* FUNC_1 (struct drm_device*,int ,char*,int,int) ;

int FUNC_2(struct drm_connector *VAR_1,
       int VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_1->dev;
 struct drm_property *VAR_5;

 VAR_5 = VAR_1->max_bpc_property;
 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_4, 0, "max bpc", VAR_2, VAR_3);
  if (!VAR_5)
   return -VAR_0;

  VAR_1->max_bpc_property = VAR_5;
 }

 FUNC_0(&VAR_1->base, VAR_5, VAR_3);
 VAR_1->state->max_requested_bpc = VAR_3;
 VAR_1->state->max_bpc = VAR_3;

 return 0;
}
