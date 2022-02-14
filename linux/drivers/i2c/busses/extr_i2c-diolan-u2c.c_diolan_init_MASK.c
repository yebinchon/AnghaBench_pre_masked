
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_diolan_u2c {TYPE_3__* usb_dev; TYPE_1__* interface; } ;
struct TYPE_6__ {int devnum; TYPE_2__* bus; } ;
struct TYPE_5__ {int busnum; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int ,int ,int) ;
 int FUNC_3 (struct i2c_diolan_u2c*) ;
 int FUNC_4 (struct i2c_diolan_u2c*) ;
 int FUNC_5 (struct i2c_diolan_u2c*) ;
 int FUNC_6 (struct i2c_diolan_u2c*,int) ;
 int FUNC_7 (struct i2c_diolan_u2c*,int ) ;
 int FUNC_8 (struct i2c_diolan_u2c*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct i2c_diolan_u2c *VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_6 >= 200000) {
  VAR_8 = VAR_4;
  VAR_6 = VAR_1;
 } else if (VAR_6 >= 100000 || VAR_6 == 0) {
  VAR_8 = VAR_5;
  VAR_6 = VAR_2;
 } else {
  VAR_8 = FUNC_1(VAR_6);
  if (VAR_8 > VAR_3)
   VAR_8 = VAR_3;
  VAR_6 = FUNC_0(VAR_8);
 }

 FUNC_2(&VAR_7->interface->dev,
   "Diolan U2C at USB bus %03d address %03d speed %d Hz\n",
   VAR_7->usb_dev->bus->busnum, VAR_7->usb_dev->devnum, VAR_6);

 FUNC_3(VAR_7);
 FUNC_4(VAR_7);
 FUNC_5(VAR_7);


 VAR_9 = FUNC_8(VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_6(VAR_7, VAR_8 != VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 != VAR_4)
  VAR_9 = FUNC_7(VAR_7, VAR_0);

 return VAR_9;
}
