
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {scalar_t__ registration_state; int mutex; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* early_unregister ) (struct drm_connector*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_connector*) ;

void FUNC_5(struct drm_connector *VAR_2)
{
 FUNC_2(&VAR_2->mutex);
 if (VAR_2->registration_state != VAR_0) {
  FUNC_3(&VAR_2->mutex);
  return;
 }

 if (VAR_2->funcs->early_unregister)
  VAR_2->funcs->early_unregister(VAR_2);

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 VAR_2->registration_state = VAR_1;
 FUNC_3(&VAR_2->mutex);
}
