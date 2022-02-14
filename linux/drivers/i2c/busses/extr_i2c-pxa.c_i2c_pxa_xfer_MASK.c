
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_i2c {int dummy; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int retries; int dev; struct pxa_i2c* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pxa_i2c*,struct i2c_msg*,int) ;
 int FUNC_2 (struct pxa_i2c*,char*) ;
 int FUNC_3 (struct pxa_i2c*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_3, struct i2c_msg VAR_4[], int VAR_5)
{
 struct pxa_i2c *VAR_6 = VAR_3->algo_data;
 int VAR_7, VAR_8;

 for (VAR_8 = VAR_3->retries; VAR_8 >= 0; VAR_8--) {
  VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
  if (VAR_7 != VAR_1)
   goto out;

  if (VAR_2)
   FUNC_0(&VAR_3->dev, "Retrying transmission\n");
  FUNC_4(100);
 }
 FUNC_2(VAR_6, "exhausted retries");
 VAR_7 = -VAR_0;
 out:
 FUNC_3(VAR_6, VAR_7);
 return VAR_7;
}
