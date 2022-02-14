
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int flags; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct amdgpu_i2c_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_i2c_chan*,int ,int ,int *,int) ;
 struct amdgpu_i2c_chan* FUNC_1 (struct i2c_adapter*) ;

int FUNC_2(struct i2c_adapter *VAR_5,
        struct i2c_msg *VAR_6, int VAR_7)
{
 struct amdgpu_i2c_chan *VAR_8 = FUNC_1(VAR_5);
 struct i2c_msg *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u8 VAR_16;


 VAR_9 = &VAR_6[0];
 if ((VAR_7 == 1) && (VAR_9->len == 0)) {
  VAR_15 = FUNC_0(VAR_8,
        VAR_9->addr, VAR_3,
        ((void*)0), 0);
  if (VAR_15)
   return VAR_15;
  else
   return VAR_7;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = &VAR_6[VAR_10];
  VAR_11 = VAR_9->len;
  VAR_13 = 0;

  if (VAR_9->flags & VAR_4) {
   VAR_14 = VAR_0;
   VAR_16 = VAR_2;
  } else {
   VAR_14 = VAR_1;
   VAR_16 = VAR_3;
  }
  while (VAR_11) {
   if (VAR_11 > VAR_14)
    VAR_12 = VAR_14;
   else
    VAR_12 = VAR_11;
   VAR_15 = FUNC_0(VAR_8,
         VAR_9->addr, VAR_16,
         &VAR_9->buf[VAR_13], VAR_12);
   if (VAR_15)
    return VAR_15;
   VAR_11 -= VAR_12;
   VAR_13 += VAR_12;
  }
 }

 return VAR_7;
}
