
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vprbrd_i2c_status {int status; } ;
struct vprbrd {int usb_dev; } ;
struct i2c_adapter {int dev; scalar_t__ algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int ,int ,int,int,struct vprbrd_i2c_status*,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_5,
 struct vprbrd_i2c_status *VAR_6, bool VAR_7)
{
 u16 VAR_8;
 int VAR_9;
 struct vprbrd *VAR_10 = (struct vprbrd *)VAR_5->algo_data;


 VAR_8 = sizeof(struct vprbrd_i2c_status);

 VAR_9 = FUNC_2(VAR_10->usb_dev, FUNC_3(VAR_10->usb_dev, 0),
  VAR_2, VAR_4, 0x0000, 0x0000,
  VAR_6, VAR_8, VAR_3);

 if (VAR_9 != VAR_8)
  VAR_7 = 1;

 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "failure in usb communication\n");
  return -VAR_1;
 }

 FUNC_0(&VAR_5->dev, "  status = %d\n", VAR_6->status);
 if (VAR_6->status != 0x00) {
  FUNC_1(&VAR_5->dev, "failure: i2c protocol error\n");
  return -VAR_0;
 }
 return 0;
}
