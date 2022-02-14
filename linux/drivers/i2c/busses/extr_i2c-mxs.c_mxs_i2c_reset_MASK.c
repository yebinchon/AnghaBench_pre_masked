
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_i2c_dev {int timing0; int timing1; int timing2; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mxs_i2c_dev *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5->regs);
 if (VAR_6)
  return VAR_6;
 FUNC_1(VAR_5->timing0, VAR_5->regs + VAR_2);
 FUNC_1(VAR_5->timing1, VAR_5->regs + VAR_3);
 FUNC_1(VAR_5->timing2, VAR_5->regs + VAR_4);

 FUNC_1(VAR_1 << 8, VAR_5->regs + VAR_0);

 return 0;
}
