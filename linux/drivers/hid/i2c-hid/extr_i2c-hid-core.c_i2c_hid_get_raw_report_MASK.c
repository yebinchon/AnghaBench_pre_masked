
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {int* rawbuf; scalar_t__ bufsize; } ;
struct i2c_client {int dummy; } ;
struct hid_device {struct i2c_client* driver_data; } ;
typedef int __u8 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 struct i2c_hid* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,unsigned char,int*,size_t) ;
 int FUNC_2 (int *,int*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3,
  unsigned char VAR_4, __u8 *VAR_5, size_t VAR_6,
  unsigned char VAR_7)
{
 struct i2c_client *VAR_8 = VAR_3->driver_data;
 struct i2c_hid *VAR_9 = FUNC_0(VAR_8);
 size_t VAR_10, VAR_11;
 int VAR_12;

 if (VAR_7 == VAR_2)
  return -VAR_0;


 VAR_11 = FUNC_3(VAR_6 + 2, (size_t)VAR_9->bufsize);

 VAR_12 = FUNC_1(VAR_8,
   VAR_7 == VAR_1 ? 0x03 : 0x01,
   VAR_4, VAR_9->rawbuf, VAR_11);

 if (VAR_12 < 0)
  return VAR_12;

 VAR_10 = VAR_9->rawbuf[0] | (VAR_9->rawbuf[1] << 8);

 if (VAR_10 <= 2)
  return 0;

 VAR_10 = FUNC_3(VAR_10, VAR_11);


 VAR_6 = FUNC_3(VAR_6, VAR_10 - 2);
 FUNC_2(VAR_5, VAR_9->rawbuf + 2, VAR_6);

 return VAR_6;
}
