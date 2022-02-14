
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mxs_i2c_dev {scalar_t__ regs; scalar_t__ dmach; int adapter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct mxs_i2c_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct mxs_i2c_dev *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_3->adapter);

 if (VAR_3->dmach)
  FUNC_0(VAR_3->dmach);

 FUNC_3(VAR_1, VAR_3->regs + VAR_0);

 return 0;
}
