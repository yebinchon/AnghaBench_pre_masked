
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_i2c_dev {int cmd_err; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mxs_i2c_dev *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_9->regs + VAR_2) & VAR_8;

 if (VAR_10 & VAR_5)
  VAR_9->cmd_err = -VAR_1;
 else if (VAR_10 & (VAR_3 |
     VAR_4 |
     VAR_7 |
     VAR_6))
  VAR_9->cmd_err = -VAR_0;

 return VAR_9->cmd_err;
}
