
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int buf; int len; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,int ,int ,int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_3,
     struct i2c_msg *VAR_4, bool VAR_5)
{
 bool VAR_6 = VAR_4->flags & VAR_2;
 bool VAR_7 = 0;
 int VAR_8;

 if (VAR_6)
  VAR_8 = FUNC_1(VAR_3, VAR_4->addr, VAR_4->len, VAR_4->buf);
 else
  VAR_8 = FUNC_3(VAR_3, VAR_4->addr, VAR_4->len, VAR_4->buf);

 if (VAR_8 == -VAR_0)
  return VAR_8;

 if (VAR_8 == -VAR_1) {

  VAR_5 = 0;
  VAR_7 = 1;
 }

 if (VAR_5) {
  int VAR_9 = FUNC_2(VAR_3);

  if (VAR_9) {

   VAR_7 = 1;
   VAR_8 = VAR_8 ?: VAR_9;
  }
 }

 if (VAR_7)
  FUNC_0(VAR_3);

 return VAR_8;
}
