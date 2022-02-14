
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_adapter {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,unsigned char) ;

__attribute__((used)) static int
FUNC_2(void *VAR_5, u8 *VAR_6, unsigned int VAR_7, size_t VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_5;
 unsigned char VAR_10 = VAR_7 * VAR_2;
 unsigned char VAR_11 = VAR_7 >> 1;
 unsigned char VAR_12 = VAR_11 ? 3 : 2;
 int VAR_13, VAR_14 = 5;
 do {
  struct i2c_msg VAR_15[] = {
   {
    .addr = VAR_1,
    .flags = 0,
    .len = 1,
    .buf = &VAR_11,
   }, {
    .addr = VAR_0,
    .flags = 0,
    .len = 1,
    .buf = &VAR_10,
   }, {
    .addr = VAR_0,
    .flags = VAR_4,
    .len = VAR_8,
    .buf = VAR_6,
   }
  };





  VAR_13 = FUNC_1(VAR_9, &VAR_15[3 - VAR_12], VAR_12);

  if (VAR_13 == -VAR_3) {
   FUNC_0("drm: skipping non-existent adapter %s\n",
     VAR_9->name);
   break;
  }
 } while (VAR_13 != VAR_12 && --VAR_14);

 return VAR_13 == VAR_12 ? 0 : -1;
}
