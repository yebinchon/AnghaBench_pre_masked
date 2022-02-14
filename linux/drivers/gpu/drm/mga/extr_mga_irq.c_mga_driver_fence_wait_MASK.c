
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int last_fence_retired; int fence_queue; } ;
typedef TYPE_1__ drm_mga_private_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;

void FUNC_3(struct drm_device *VAR_0, unsigned int *VAR_1)
{
 drm_mga_private_t *VAR_2 = (drm_mga_private_t *) VAR_0->dev_private;
 unsigned int VAR_3;





 FUNC_2(VAR_2->fence_queue,
      (((VAR_3 = FUNC_0(&VAR_2->last_fence_retired))
        - *VAR_1) <= (1 << 23)),
      FUNC_1(3000));

 *VAR_1 = VAR_3;
}
