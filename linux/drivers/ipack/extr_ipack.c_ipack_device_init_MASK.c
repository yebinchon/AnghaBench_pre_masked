
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int parent; int release; int * bus; } ;
struct ipack_device {TYPE_3__ dev; TYPE_2__* bus; scalar_t__ speed_32mhz; int slot; } ;
struct TYPE_8__ {TYPE_1__* ops; int bus_nr; int parent; } ;
struct TYPE_7__ {int (* set_clockrate ) (struct ipack_device*,int) ;scalar_t__ (* reset_timeout ) (struct ipack_device*) ;} ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (struct ipack_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct ipack_device*,int) ;
 scalar_t__ FUNC_6 (struct ipack_device*) ;
 int FUNC_7 (struct ipack_device*,int) ;

int FUNC_8(struct ipack_device *VAR_2)
{
 int VAR_3;

 VAR_2->dev.bus = &VAR_0;
 VAR_2->dev.release = VAR_1;
 VAR_2->dev.parent = VAR_2->bus->parent;
 FUNC_1(&VAR_2->dev,
       "ipack-dev.%u.%u", VAR_2->bus->bus_nr, VAR_2->slot);
 FUNC_3(&VAR_2->dev);

 if (VAR_2->bus->ops->set_clockrate(VAR_2, 8))
  FUNC_2(&VAR_2->dev, "failed to switch to 8 MHz operation for reading of device ID.\n");
 if (VAR_2->bus->ops->reset_timeout(VAR_2))
  FUNC_2(&VAR_2->dev, "failed to reset potential timeout.");

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_2->dev, "error reading device id section.\n");
  return VAR_3;
 }


 if (VAR_2->speed_32mhz) {
  VAR_3 = VAR_2->bus->ops->set_clockrate(VAR_2, 32);
  if (VAR_3 < 0)
   FUNC_0(&VAR_2->dev, "failed to switch to 32 MHz operation.\n");
 }

 return 0;
}
