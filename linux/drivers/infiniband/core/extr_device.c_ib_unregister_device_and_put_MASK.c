
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dealloc_driver; } ;
struct ib_device {int dev; TYPE_1__ ops; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ib_device *VAR_0)
{
 FUNC_0(!VAR_0->ops.dealloc_driver);
 FUNC_2(&VAR_0->dev);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->dev);
}
