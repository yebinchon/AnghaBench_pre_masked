
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
 int VAR_4 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int ,int ,int,int,int,int,void*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_5, int VAR_6,
      int VAR_7, int VAR_8, void *VAR_9, int VAR_10)
{
 struct i2c_tiny_usb *VAR_11 = (struct i2c_tiny_usb *)VAR_5->algo_data;
 void *VAR_12 = FUNC_1(VAR_10, VAR_1);
 int VAR_13;

 if (!VAR_12)
  return -VAR_0;


 VAR_13 = FUNC_3(VAR_11->usb_dev, FUNC_4(VAR_11->usb_dev, 0),
          VAR_6, VAR_4 | VAR_3 |
          VAR_2, VAR_7, VAR_8, VAR_12, VAR_10, 2000);

 FUNC_2(VAR_9, VAR_12, VAR_10);
 FUNC_0(VAR_12);
 return VAR_13;
}
