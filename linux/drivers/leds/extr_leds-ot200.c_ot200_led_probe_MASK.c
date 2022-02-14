
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {int brightness_set; int name; } ;
struct TYPE_4__ {TYPE_2__ cdev; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {

  VAR_0[VAR_5].cdev.name = VAR_0[VAR_5].name;
  VAR_0[VAR_5].cdev.brightness_set = VAR_3;

  VAR_6 = FUNC_2(&VAR_4->dev, &VAR_0[VAR_5].cdev);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_2 = 0;
 VAR_1 = FUNC_1(1);
 FUNC_3(VAR_2, 0x49);
 FUNC_3(VAR_1, 0x5a);

 return 0;
}
