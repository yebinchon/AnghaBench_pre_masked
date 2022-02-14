
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct regulator_led {scalar_t__ enabled; TYPE_1__ cdev; int vcc; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct regulator_led *VAR_0)
{
 int VAR_1;

 if (!VAR_0->enabled)
  return;

 VAR_1 = FUNC_1(VAR_0->vcc);
 if (VAR_1 != 0) {
  FUNC_0(VAR_0->cdev.dev, "Failed to disable vcc: %d\n", VAR_1);
  return;
 }

 VAR_0->enabled = 0;
}
