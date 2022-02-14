
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_i2c {int err; int complete; int count; int buf; struct i2c_msg* msg; } ;
struct i2c_msg {int flags; int len; int buf; } ;
struct i2c_adapter {struct sprd_i2c* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sprd_i2c*) ;
 int FUNC_2 (struct sprd_i2c*,int) ;
 int FUNC_3 (struct sprd_i2c*) ;
 int FUNC_4 (struct sprd_i2c*) ;
 int FUNC_5 (struct sprd_i2c*,int) ;
 int FUNC_6 (struct sprd_i2c*,int ) ;
 int FUNC_7 (struct sprd_i2c*,struct i2c_msg*) ;
 int FUNC_8 (struct sprd_i2c*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_1,
          struct i2c_msg *VAR_2, bool VAR_3)
{
 struct sprd_i2c *VAR_4 = VAR_1->algo_data;

 VAR_4->msg = VAR_2;
 VAR_4->buf = VAR_2->buf;
 VAR_4->count = VAR_2->len;

 FUNC_0(&VAR_4->complete);
 FUNC_4(VAR_4);
 FUNC_7(VAR_4, VAR_2);
 FUNC_6(VAR_4, VAR_2->len);

 if (VAR_2->flags & VAR_0) {
  FUNC_2(VAR_4, 1);
  FUNC_5(VAR_4, 1);
 } else {
  FUNC_2(VAR_4, 0);
  FUNC_5(VAR_4, !!VAR_3);
 }





 if (VAR_2->flags & VAR_0)
  FUNC_8(VAR_4, 1);
 else
  FUNC_1(VAR_4);

 FUNC_3(VAR_4);

 FUNC_9(&VAR_4->complete);

 return VAR_4->err;
}
