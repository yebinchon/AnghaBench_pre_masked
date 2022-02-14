
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {unsigned int bufsize; } ;
struct i2c_client {int irq; } ;
struct hid_device {struct i2c_client* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct i2c_hid* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_hid*,unsigned int) ;
 int FUNC_4 (struct hid_device*,int ,unsigned int*) ;
 int FUNC_5 (struct i2c_hid*) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->driver_data;
 struct i2c_hid *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;
 unsigned int VAR_8 = VAR_2;

 FUNC_4(VAR_4, VAR_1, &VAR_8);
 FUNC_4(VAR_4, VAR_3, &VAR_8);
 FUNC_4(VAR_4, VAR_0, &VAR_8);

 if (VAR_8 > VAR_6->bufsize) {
  FUNC_0(VAR_5->irq);
  FUNC_5(VAR_6);

  VAR_7 = FUNC_3(VAR_6, VAR_8);
  FUNC_1(VAR_5->irq);

  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
