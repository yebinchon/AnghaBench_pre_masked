
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {int dummy; } ;
struct i2c_msg {int len; int flags; scalar_t__ addr; int buf; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct octeon_i2c* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct octeon_i2c*,struct i2c_msg*) ;
 int FUNC_2 (struct octeon_i2c*,struct i2c_msg*) ;
 int FUNC_3 (struct octeon_i2c*,struct i2c_msg*) ;
 int FUNC_4 (struct octeon_i2c*,struct i2c_msg*) ;
 int FUNC_5 (struct octeon_i2c*,scalar_t__,int ,int*,int) ;
 int FUNC_6 (struct octeon_i2c*) ;
 int FUNC_7 (struct octeon_i2c*) ;
 int FUNC_8 (struct octeon_i2c*,scalar_t__,int ,int) ;

int FUNC_9(struct i2c_adapter *VAR_3, struct i2c_msg *VAR_4, int VAR_5)
{
 struct octeon_i2c *VAR_6 = FUNC_0(VAR_3);
 int VAR_7, VAR_8 = 0;

 if (VAR_5 == 1) {
  if (VAR_4[0].len > 0 && VAR_4[0].len <= 8) {
   if (VAR_4[0].flags & VAR_1)
    VAR_8 = FUNC_3(VAR_6, VAR_4);
   else
    VAR_8 = FUNC_4(VAR_6, VAR_4);
   goto out;
  }
 } else if (VAR_5 == 2) {
  if ((VAR_4[0].flags & VAR_1) == 0 &&
      (VAR_4[1].flags & VAR_2) == 0 &&
      VAR_4[0].len > 0 && VAR_4[0].len <= 2 &&
      VAR_4[1].len > 0 && VAR_4[1].len <= 8 &&
      VAR_4[0].addr == VAR_4[1].addr) {
   if (VAR_4[1].flags & VAR_1)
    VAR_8 = FUNC_1(VAR_6, VAR_4);
   else
    VAR_8 = FUNC_2(VAR_6, VAR_4);
   goto out;
  }
 }

 for (VAR_7 = 0; VAR_8 == 0 && VAR_7 < VAR_5; VAR_7++) {
  struct i2c_msg *VAR_9 = &VAR_4[VAR_7];


  if (!VAR_9->len) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_8 = FUNC_6(VAR_6);
  if (VAR_8)
   return VAR_8;

  if (VAR_9->flags & VAR_1)
   VAR_8 = FUNC_5(VAR_6, VAR_9->addr, VAR_9->buf,
           &VAR_9->len, VAR_9->flags & VAR_2);
  else
   VAR_8 = FUNC_8(VAR_6, VAR_9->addr, VAR_9->buf,
            VAR_9->len);
 }
 FUNC_7(VAR_6);
out:
 return (VAR_8 != 0) ? VAR_8 : VAR_5;
}
