
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adt7470_data {int auto_update_interval; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,struct adt7470_data*) ;
 struct adt7470_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1;
 struct adt7470_data *VAR_3 = FUNC_1(VAR_2);

 while (!FUNC_2()) {
  FUNC_4(&VAR_3->lock);
  FUNC_0(VAR_2, VAR_3);
  FUNC_5(&VAR_3->lock);

  FUNC_7(VAR_0);
  if (FUNC_2())
   break;

  FUNC_6(FUNC_3(VAR_3->auto_update_interval));
 }

 return 0;
}
