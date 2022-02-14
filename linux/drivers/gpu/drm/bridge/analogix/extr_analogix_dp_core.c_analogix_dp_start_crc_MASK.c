
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {TYPE_1__* state; int name; } ;
struct analogix_dp_device {int aux; } ;
struct TYPE_2__ {int crtc; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 struct analogix_dp_device* FUNC_2 (struct drm_connector*) ;

int FUNC_3(struct drm_connector *VAR_1)
{
 struct analogix_dp_device *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_1->state->crtc) {
  FUNC_0("Connector %s doesn't currently have a CRTC.\n",
     VAR_1->name);
  return -VAR_0;
 }

 return FUNC_1(&VAR_2->aux, VAR_1->state->crtc);
}
