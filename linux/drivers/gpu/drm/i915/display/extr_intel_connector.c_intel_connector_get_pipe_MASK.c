
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* state; struct drm_device* dev; } ;
struct intel_connector {TYPE_3__ base; } ;
struct TYPE_5__ {int connection_mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_8__ {int pipe; } ;
struct TYPE_6__ {int crtc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int ) ;

enum pipe FUNC_3(struct intel_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;

 FUNC_0(!FUNC_1(&VAR_2->mode_config.connection_mutex));

 if (!VAR_1->base.state->crtc)
  return VAR_0;

 return FUNC_2(VAR_1->base.state->crtc)->pipe;
}
