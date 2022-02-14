
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct xenbus_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct xenbus_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, &VAR_1);
 if (VAR_4)
  goto fail1;

 VAR_4 = FUNC_0(&VAR_3->dev, &VAR_0);
 if (VAR_4)
  goto fail2;

 VAR_4 = FUNC_2(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_4)
  goto fail3;

 return 0;

fail3: FUNC_3(&VAR_3->dev.kobj, &VAR_2);
fail2: FUNC_1(&VAR_3->dev, &VAR_0);
fail1: FUNC_1(&VAR_3->dev, &VAR_1);
 return VAR_4;
}
