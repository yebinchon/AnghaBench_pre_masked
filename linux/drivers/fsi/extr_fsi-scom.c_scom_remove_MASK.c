
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int devt; } ;
struct scom_device {int dead; TYPE_1__ dev; int cdev; int lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 struct scom_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct scom_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(&VAR_1->lock);
 VAR_1->dead = 1;
 FUNC_4(&VAR_1->lock);
 FUNC_0(&VAR_1->cdev, &VAR_1->dev);
 FUNC_2(VAR_1->dev.devt);
 FUNC_5(&VAR_1->dev);

 return 0;
}
