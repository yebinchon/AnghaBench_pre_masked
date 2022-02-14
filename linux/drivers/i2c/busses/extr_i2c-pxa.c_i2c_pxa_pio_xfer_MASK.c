
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_i2c {int dummy; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int retries; int dev; struct pxa_i2c* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct pxa_i2c*,struct i2c_msg*,int) ;
 int FUNC_3 (struct pxa_i2c*) ;
 int FUNC_4 (struct pxa_i2c*,char*) ;
 int FUNC_5 (struct pxa_i2c*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_4,
       struct i2c_msg VAR_5[], int VAR_6)
{
 struct pxa_i2c *VAR_7 = VAR_4->algo_data;
 int VAR_8, VAR_9;





 if (!(FUNC_6(FUNC_0(VAR_7)) & VAR_2))
  FUNC_3(VAR_7);

 for (VAR_9 = VAR_4->retries; VAR_9 >= 0; VAR_9--) {
  VAR_8 = FUNC_2(VAR_7, VAR_5, VAR_6);
  if (VAR_8 != VAR_1)
   goto out;

  if (VAR_3)
   FUNC_1(&VAR_4->dev, "Retrying transmission\n");
  FUNC_7(100);
 }
 FUNC_4(VAR_7, "exhausted retries");
 VAR_8 = -VAR_0;
 out:
 FUNC_5(VAR_7, VAR_8);
 return VAR_8;
}
