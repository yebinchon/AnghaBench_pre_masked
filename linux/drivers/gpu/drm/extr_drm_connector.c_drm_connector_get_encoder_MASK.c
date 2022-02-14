
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_connector {struct drm_encoder* encoder; TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_encoder* best_encoder; } ;



__attribute__((used)) static struct drm_encoder *FUNC_0(struct drm_connector *VAR_0)
{


 if (VAR_0->state)
  return VAR_0->state->best_encoder;
 return VAR_0->encoder;
}
