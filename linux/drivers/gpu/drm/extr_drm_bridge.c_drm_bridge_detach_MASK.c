
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_bridge {int * dev; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* detach ) (struct drm_bridge*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_bridge*) ;

void FUNC_2(struct drm_bridge *VAR_0)
{
 if (FUNC_0(!VAR_0))
  return;

 if (FUNC_0(!VAR_0->dev))
  return;

 if (VAR_0->funcs->detach)
  VAR_0->funcs->detach(VAR_0);

 VAR_0->dev = ((void*)0);
}
