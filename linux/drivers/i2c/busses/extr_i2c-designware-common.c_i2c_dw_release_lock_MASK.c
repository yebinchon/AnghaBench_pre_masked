
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int (* release_lock ) () ;} ;


 int FUNC_0 () ;

void FUNC_1(struct dw_i2c_dev *VAR_0)
{
 if (VAR_0->release_lock)
  VAR_0->release_lock();
}
