
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_panel {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* unprepare ) (struct drm_panel*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_panel*) ;

int FUNC_1(struct drm_panel *VAR_2)
{
 if (VAR_2 && VAR_2->funcs && VAR_2->funcs->unprepare)
  return VAR_2->funcs->unprepare(VAR_2);

 return VAR_2 ? -VAR_1 : -VAR_0;
}
