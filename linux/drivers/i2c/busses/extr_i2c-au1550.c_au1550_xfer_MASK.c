
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; scalar_t__ len; int buf; int addr; } ;
struct i2c_au1550_data {int dummy; } ;
struct i2c_adapter {struct i2c_au1550_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_au1550_data*,int ,int ) ;
 int FUNC_1 (struct i2c_au1550_data*,int ,int,int) ;
 int FUNC_2 (struct i2c_au1550_data*,int ,scalar_t__) ;
 int FUNC_3 (struct i2c_au1550_data*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct i2c_adapter *VAR_4, struct i2c_msg *VAR_5, int VAR_6)
{
 struct i2c_au1550_data *VAR_7 = VAR_4->algo_data;
 struct i2c_msg *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_0(VAR_7, VAR_1, VAR_2);

 for (VAR_9 = 0; !VAR_10 && VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = &VAR_5[VAR_9];
  VAR_10 = FUNC_1(VAR_7, VAR_8->addr, VAR_8->flags & VAR_0,
     (VAR_8->len == 0));
  if (VAR_10 || !VAR_8->len)
   continue;
  if (VAR_8->flags & VAR_0)
   VAR_10 = FUNC_2(VAR_7, VAR_8->buf, VAR_8->len);
  else
   VAR_10 = FUNC_3(VAR_7, VAR_8->buf, VAR_8->len);
 }



 if (VAR_10 == 0)
  VAR_10 = VAR_6;

 FUNC_0(VAR_7, VAR_1, VAR_3);

 return VAR_10;
}
