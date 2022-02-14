
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* pdev; int * dev_private; } ;
typedef int drm_r128_private_t ;
struct TYPE_4__ {int param; int value; } ;
typedef TYPE_2__ drm_r128_getparam_t ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_3 (int ,int*,int) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

int FUNC_5(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_r128_private_t *VAR_6 = VAR_3->dev_private;
 drm_r128_getparam_t *VAR_7 = VAR_4;
 int VAR_8;

 FUNC_0(VAR_6);

 FUNC_1("pid=%d\n", FUNC_4(VAR_2));

 switch (VAR_7->param) {
 case 128:
  VAR_8 = VAR_3->pdev->irq;
  break;
 default:
  return -VAR_1;
 }

 if (FUNC_3(VAR_7->value, &VAR_8, sizeof(int))) {
  FUNC_2("copy_to_user\n");
  return -VAR_0;
 }

 return 0;
}
