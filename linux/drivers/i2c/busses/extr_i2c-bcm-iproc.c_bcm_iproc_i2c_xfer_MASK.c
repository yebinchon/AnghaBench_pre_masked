
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct bcm_iproc_i2c_dev {int device; } ;


 int FUNC_0 (struct bcm_iproc_i2c_dev*,struct i2c_msg*) ;
 int FUNC_1 (int ,char*) ;
 struct bcm_iproc_i2c_dev* FUNC_2 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
         struct i2c_msg VAR_1[], int VAR_2)
{
 struct bcm_iproc_i2c_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4, VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3, &VAR_1[VAR_5]);
  if (VAR_4) {
   FUNC_1(VAR_3->device, "xfer failed\n");
   return VAR_4;
  }
 }

 return VAR_2;
}
