
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct bcma_device {int dev_registered; int dev; TYPE_1__ id; } ;
struct bcma_bus {int dummy; } ;


 int FUNC_0 (struct bcma_bus*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bcma_bus *VAR_0, struct bcma_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (VAR_2) {
  FUNC_0(VAR_0, "Could not register dev for core 0x%03X\n",
    VAR_1->id.id);
  FUNC_2(&VAR_1->dev);
  return;
 }
 VAR_1->dev_registered = 1;
}
