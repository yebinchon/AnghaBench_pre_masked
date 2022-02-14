
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dev; } ;
struct TYPE_2__ {unsigned long i3c; unsigned long i2c; } ;
struct i3c_bus {int mode; TYPE_1__ scl_rate; } ;
typedef enum i3c_bus_mode { ____Placeholder_i3c_bus_mode } i3c_bus_mode ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;




 void* VAR_3 ;
 int FUNC_0 (int *,char*,unsigned long,unsigned long) ;
 struct i3c_master_controller* FUNC_1 (struct i3c_bus*) ;

int FUNC_2(struct i3c_bus *VAR_4, enum i3c_bus_mode VAR_5,
       unsigned long VAR_6)
{
 struct i3c_master_controller *VAR_7 = FUNC_1(VAR_4);

 VAR_4->mode = VAR_5;

 switch (VAR_4->mode) {
 case 128:
  if (!VAR_4->scl_rate.i3c)
   VAR_4->scl_rate.i3c = VAR_3;
  break;
 case 131:
 case 130:
  if (!VAR_4->scl_rate.i3c)
   VAR_4->scl_rate.i3c = VAR_3;
  if (!VAR_4->scl_rate.i2c)
   VAR_4->scl_rate.i2c = VAR_6;
  break;
 case 129:
  if (!VAR_4->scl_rate.i2c)
   VAR_4->scl_rate.i2c = VAR_6;
  if (!VAR_4->scl_rate.i3c ||
      VAR_4->scl_rate.i3c > VAR_4->scl_rate.i2c)
   VAR_4->scl_rate.i3c = VAR_4->scl_rate.i2c;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_7->dev, "i2c-scl = %ld Hz i3c-scl = %ld Hz\n",
  VAR_4->scl_rate.i2c, VAR_4->scl_rate.i3c);





 if (VAR_4->scl_rate.i3c > VAR_2 ||
     VAR_4->scl_rate.i2c > VAR_1)
  return -VAR_0;

 return 0;
}
