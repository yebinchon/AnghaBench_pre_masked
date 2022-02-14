
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_i2c_dev {scalar_t__ regs; int cmd_err; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_12, void *VAR_13)
{
 struct mxs_i2c_dev *VAR_14 = VAR_13;
 u32 VAR_15 = FUNC_0(VAR_14->regs + VAR_4) & VAR_11;

 if (!VAR_15)
  return VAR_3;

 if (VAR_15 & VAR_8)
  VAR_14->cmd_err = -VAR_1;
 else if (VAR_15 & (VAR_6 |
      VAR_7 |
      VAR_10 | VAR_9))

  VAR_14->cmd_err = -VAR_0;

 FUNC_1(VAR_15, VAR_14->regs + VAR_5);

 return VAR_2;
}
