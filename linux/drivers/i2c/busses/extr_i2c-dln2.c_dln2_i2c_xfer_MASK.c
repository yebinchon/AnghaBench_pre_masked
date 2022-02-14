
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dln2_i2c {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dln2_i2c*,int ,int ,int) ;
 int FUNC_1 (struct dln2_i2c*,int ,int ,int) ;
 struct dln2_i2c* FUNC_2 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_2,
    struct i2c_msg *VAR_3, int VAR_4)
{
 struct dln2_i2c *VAR_5 = FUNC_2(VAR_2);
 struct i2c_msg *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  int VAR_8;

  VAR_6 = &VAR_3[VAR_7];

  if (VAR_6->flags & VAR_1) {
   VAR_8 = FUNC_0(VAR_5, VAR_6->addr, VAR_6->buf,
         VAR_6->len);
   if (VAR_8 < 0)
    return VAR_8;

   VAR_6->len = VAR_8;
  } else {
   VAR_8 = FUNC_1(VAR_5, VAR_6->addr, VAR_6->buf,
          VAR_6->len);
   if (VAR_8 != VAR_6->len)
    return -VAR_0;
  }
 }

 return VAR_4;
}
