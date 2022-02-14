
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_bridge {TYPE_1__* funcs; struct drm_bridge* next; } ;
struct TYPE_2__ {int (* disable ) (struct drm_bridge*) ;} ;


 int FUNC_0 (struct drm_bridge*) ;

void FUNC_1(struct drm_bridge *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->next);

 if (VAR_0->funcs->disable)
  VAR_0->funcs->disable(VAR_0);
}
