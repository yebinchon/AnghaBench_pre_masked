
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int (* acquire_lock ) () ;int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;

int FUNC_2(struct dw_i2c_dev *VAR_0)
{
 int VAR_1;

 if (!VAR_0->acquire_lock)
  return 0;

 VAR_1 = VAR_0->acquire_lock();
 if (!VAR_1)
  return 0;

 FUNC_0(VAR_0->dev, "couldn't acquire bus ownership\n");

 return VAR_1;
}
