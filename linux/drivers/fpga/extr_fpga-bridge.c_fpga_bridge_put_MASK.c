
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* parent; } ;
struct fpga_bridge {TYPE_3__ dev; int mutex; int * info; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {int owner; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(struct fpga_bridge *VAR_0)
{
 FUNC_0(&VAR_0->dev, "put\n");

 VAR_0->info = ((void*)0);
 FUNC_1(VAR_0->dev.parent->driver->owner);
 FUNC_2(&VAR_0->mutex);
 FUNC_3(&VAR_0->dev);
}
