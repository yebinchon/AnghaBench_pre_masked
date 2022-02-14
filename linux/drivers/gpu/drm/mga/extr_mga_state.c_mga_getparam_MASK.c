
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* pdev; TYPE_2__* dev_private; } ;
struct TYPE_5__ {int chipset; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_6__ {int param; int value; } ;
typedef TYPE_3__ drm_mga_getparam_t ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_2 (int ,int*,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

int FUNC_4(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_mga_private_t *VAR_6 = VAR_3->dev_private;
 drm_mga_getparam_t *VAR_7 = VAR_4;
 int VAR_8;

 if (!VAR_6) {
  FUNC_1("called with no initialization\n");
  return -VAR_1;
 }

 FUNC_0("pid=%d\n", FUNC_3(VAR_2));

 switch (VAR_7->param) {
 case 128:
  VAR_8 = VAR_3->pdev->irq;
  break;
 case 129:
  VAR_8 = VAR_6->chipset;
  break;
 default:
  return -VAR_1;
 }

 if (FUNC_2(VAR_7->value, &VAR_8, sizeof(int))) {
  FUNC_1("copy_to_user\n");
  return -VAR_0;
 }

 return 0;
}
