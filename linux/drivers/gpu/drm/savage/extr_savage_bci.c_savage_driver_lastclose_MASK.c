
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__* mtrr_handles; } ;
typedef TYPE_1__ drm_savage_private_t ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct drm_device *VAR_0)
{
 drm_savage_private_t *VAR_1 = VAR_0->dev_private;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 3; ++VAR_2) {
  FUNC_0(VAR_1->mtrr_handles[VAR_2]);
  VAR_1->mtrr_handles[VAR_2] = 0;
 }
}
