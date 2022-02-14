
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct i2c_msg {int addr; void* len; int * buf; void* flags; } ;
struct i2c_device_addr {int i2c_addr; struct drx39xxj_state* user_data; } ;
struct drx39xxj_state {int * i2c; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int,int *,void*,void*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct i2c_device_addr *VAR_2,
     u16 VAR_3,
     u8 *VAR_4,
     struct i2c_device_addr *VAR_5,
     u16 VAR_6, u8 *VAR_7)
{
 struct drx39xxj_state *VAR_8;
 struct i2c_msg VAR_9[2];
 unsigned int VAR_10;

 if (VAR_2 == ((void*)0)) {

  VAR_8 = VAR_5->user_data;
  VAR_9[0].addr = VAR_5->i2c_addr >> 1;
  VAR_9[0].flags = VAR_1;
  VAR_9[0].buf = VAR_7;
  VAR_9[0].len = VAR_6;
  VAR_10 = 1;
 } else if (VAR_5 == ((void*)0)) {

  VAR_8 = VAR_2->user_data;
  VAR_9[0].addr = VAR_2->i2c_addr >> 1;
  VAR_9[0].flags = 0;
  VAR_9[0].buf = VAR_4;
  VAR_9[0].len = VAR_3;
  VAR_10 = 1;
 } else {

  VAR_8 = VAR_2->user_data;
  VAR_9[0].addr = VAR_2->i2c_addr >> 1;
  VAR_9[0].flags = 0;
  VAR_9[0].buf = VAR_4;
  VAR_9[0].len = VAR_3;
  VAR_9[1].addr = VAR_5->i2c_addr >> 1;
  VAR_9[1].flags = VAR_1;
  VAR_9[1].buf = VAR_7;
  VAR_9[1].len = VAR_6;
  VAR_10 = 2;
 }

 if (VAR_8->i2c == ((void*)0)) {
  FUNC_2("i2c was zero, aborting\n");
  return 0;
 }
 if (FUNC_0(VAR_8->i2c, VAR_9, VAR_10) != VAR_10) {
  FUNC_3("drx3933: I2C write/read failed\n");
  return -VAR_0;
 }
 return 0;
}
