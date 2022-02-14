
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max7301 {int * dev; int write; int read; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct max7301*) ;
 struct max7301* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct max7301 *VAR_8;

 if (!FUNC_2(VAR_6->adapter,
   VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_1(&VAR_6->dev, sizeof(struct max7301), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->read = VAR_4;
 VAR_8->write = VAR_5;
 VAR_8->dev = &VAR_6->dev;

 return FUNC_0(VAR_8);
}
