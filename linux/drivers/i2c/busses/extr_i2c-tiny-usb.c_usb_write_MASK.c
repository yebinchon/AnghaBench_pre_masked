
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_tiny_usb {int usb_dev; } ;
struct i2c_adapter {scalar_t__ algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int,void*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_4, int VAR_5,
       int VAR_6, int VAR_7, void *VAR_8, int VAR_9)
{
 struct i2c_tiny_usb *VAR_10 = (struct i2c_tiny_usb *)VAR_4->algo_data;
 void *VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_1);
 int VAR_12;

 if (!VAR_11)
  return -VAR_0;


 VAR_12 = FUNC_2(VAR_10->usb_dev, FUNC_3(VAR_10->usb_dev, 0),
          VAR_5, VAR_3 | VAR_2,
          VAR_6, VAR_7, VAR_11, VAR_9, 2000);

 FUNC_0(VAR_11);
 return VAR_12;
}
