
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* primary; } ;
struct intel_crtc {TYPE_6__* config; TYPE_3__ base; scalar_t__ active; } ;
struct TYPE_10__ {scalar_t__ crtc_clock; } ;
struct TYPE_11__ {TYPE_4__ adjusted_mode; } ;
struct TYPE_12__ {TYPE_5__ base; } ;
struct TYPE_8__ {TYPE_1__* state; } ;
struct TYPE_7__ {scalar_t__ fb; } ;



bool FUNC_0(struct intel_crtc *VAR_0)
{
 return VAR_0->active && VAR_0->base.primary->state->fb &&
  VAR_0->config->base.adjusted_mode.crtc_clock;
}
