
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {int reset_lock; } ;
struct i2c_client {int dummy; } ;
struct hid_device {struct i2c_client* driver_data; } ;
typedef int __u8 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 struct i2c_hid* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int,int*,size_t,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3, __u8 *VAR_4,
  size_t VAR_5, unsigned char VAR_6, bool VAR_7)
{
 struct i2c_client *VAR_8 = VAR_3->driver_data;
 struct i2c_hid *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = VAR_4[0];
 int VAR_11;

 if (VAR_6 == VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_9->reset_lock);

 if (VAR_10) {
  VAR_4++;
  VAR_5--;
 }

 VAR_11 = FUNC_1(VAR_8,
    VAR_6 == VAR_1 ? 0x03 : 0x02,
    VAR_10, VAR_4, VAR_5, VAR_7);

 if (VAR_10 && VAR_11 >= 0)
  VAR_11++;

 FUNC_3(&VAR_9->reset_lock);

 return VAR_11;
}
