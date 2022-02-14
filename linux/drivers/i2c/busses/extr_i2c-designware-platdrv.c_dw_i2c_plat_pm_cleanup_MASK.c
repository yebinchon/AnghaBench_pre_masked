
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int dev; scalar_t__ shared_with_punit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dw_i2c_dev *VAR_0)
{
 FUNC_0(VAR_0->dev);

 if (VAR_0->shared_with_punit)
  FUNC_1(VAR_0->dev);
}
