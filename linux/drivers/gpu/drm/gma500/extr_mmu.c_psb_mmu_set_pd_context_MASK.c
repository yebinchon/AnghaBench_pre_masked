
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct psb_mmu_pd {int hw_context; TYPE_1__* driver; int p; } ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int sem; struct drm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

void FUNC_6(struct psb_mmu_pd *VAR_3, int VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->driver->dev;
 struct drm_psb_private *VAR_6 = VAR_5->dev_private;
 uint32_t VAR_7 = (VAR_4 == 0) ? VAR_1 :
     VAR_2 + VAR_4 * 4;

 FUNC_1(&VAR_3->driver->sem);
 FUNC_0(FUNC_2(VAR_3->p) << VAR_0, VAR_7);
 FUNC_5();
 FUNC_3(VAR_3->driver, 1);
 VAR_3->hw_context = VAR_4;
 FUNC_4(&VAR_3->driver->sem);

}
