
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adxl34x {TYPE_1__* dev; int input; int irq; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,struct adxl34x*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adxl34x*) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct adxl34x *VAR_1)
{
 FUNC_4(&VAR_1->dev->kobj, &VAR_0);
 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_2(VAR_1->input);
 FUNC_0(VAR_1->dev, "unregistered accelerometer\n");
 FUNC_3(VAR_1);

 return 0;
}
