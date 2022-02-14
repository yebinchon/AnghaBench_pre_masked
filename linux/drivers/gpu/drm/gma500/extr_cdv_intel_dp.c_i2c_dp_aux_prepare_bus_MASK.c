
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int retries; int * algo; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static int
FUNC_1(struct i2c_adapter *VAR_1)
{
 VAR_1->algo = &VAR_0;
 VAR_1->retries = 3;
 FUNC_0(VAR_1);
 return 0;
}
