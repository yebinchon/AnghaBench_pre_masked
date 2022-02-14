
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* state; } ;
struct intel_connector {TYPE_3__* encoder; TYPE_2__ base; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_6__ {int (* get_hw_state ) (TYPE_3__*,int*) ;} ;
struct TYPE_4__ {scalar_t__ crtc; } ;


 int FUNC_0 (TYPE_3__*,int*) ;

__attribute__((used)) static bool FUNC_1(struct intel_connector *VAR_0)
{
 if (VAR_0->encoder && VAR_0->base.state->crtc) {
  enum pipe VAR_1;
  if (!VAR_0->encoder->get_hw_state(VAR_0->encoder, &VAR_1))
   return 0;
  return 1;
 }
 return 0;
}
