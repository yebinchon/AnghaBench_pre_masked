
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_6__* parent; } ;
struct TYPE_11__ {TYPE_2__ dev; int name; struct vprbrd* algo_data; int * quirks; int * algo; int class; int owner; } ;
struct vprbrd_i2c {TYPE_5__ i2c; scalar_t__ bus_freq_param; } ;
struct vprbrd {TYPE_3__* usb_dev; } ;
struct TYPE_12__ {int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_10__ {int devnum; TYPE_1__* bus; } ;
struct TYPE_8__ {int busnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_6__*,char*,int ) ;
 struct vprbrd* FUNC_1 (int ) ;
 struct vprbrd_i2c* FUNC_2 (TYPE_6__*,int,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct platform_device*,struct vprbrd_i2c*) ;
 int FUNC_5 (int ,int,char*,int,int) ;
 int FUNC_6 (TYPE_3__*,int,int ,int ,int,int,scalar_t__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_14)
{
 struct vprbrd *VAR_15 = FUNC_1(VAR_14->dev.parent);
 struct vprbrd_i2c *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_2(&VAR_14->dev, sizeof(*VAR_16), VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;


 VAR_16->i2c.owner = VAR_4;
 VAR_16->i2c.class = VAR_3;
 VAR_16->i2c.algo = &VAR_12;
 VAR_16->i2c.quirks = &VAR_13;
 VAR_16->i2c.algo_data = VAR_15;

 VAR_16->bus_freq_param = VAR_11;

 FUNC_5(VAR_16->i2c.name, sizeof(VAR_16->i2c.name),
   "viperboard at bus %03d device %03d",
   VAR_15->usb_dev->bus->busnum, VAR_15->usb_dev->devnum);


 if ((VAR_11 <= VAR_5)
  && (VAR_11 >= VAR_6)) {
  VAR_18 = FUNC_7(VAR_15->usb_dev, 0);
  VAR_17 = FUNC_6(VAR_15->usb_dev, VAR_18,
   VAR_7, VAR_9,
   0x0000, 0x0000, &VAR_16->bus_freq_param, 1,
   VAR_8);
  if (VAR_17 != 1) {
   FUNC_0(&VAR_14->dev, "failure setting i2c_bus_freq to %d\n",
    VAR_10);
   return -VAR_0;
  }
 } else {
  FUNC_0(&VAR_14->dev,
   "invalid i2c_bus_freq setting:%d\n", VAR_10);
  return -VAR_0;
 }

 VAR_16->i2c.dev.parent = &VAR_14->dev;


 FUNC_3(&VAR_16->i2c);

 FUNC_4(VAR_14, VAR_16);

 return 0;
}
