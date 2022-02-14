
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_i2c_dev {int flags; int cmd_complete; scalar_t__ msg_err; int status; int cmd_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dw_i2c_dev*,int ) ;
 int FUNC_2 (struct dw_i2c_dev*,int,int ) ;
 int FUNC_3 (struct dw_i2c_dev*) ;
 int FUNC_4 (struct dw_i2c_dev*) ;
 int FUNC_5 (struct dw_i2c_dev*) ;
 int FUNC_6 (struct dw_i2c_dev*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dw_i2c_dev *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9 & VAR_5) {
  VAR_8->cmd_err |= VAR_1;
  VAR_8->status = VAR_7;





  FUNC_2(VAR_8, 0, VAR_2);
  goto tx_aborted;
 }

 if (VAR_9 & VAR_3)
  FUNC_4(VAR_8);

 if (VAR_9 & VAR_6)
  FUNC_6(VAR_8);







tx_aborted:
 if ((VAR_9 & (VAR_5 | VAR_4)) || VAR_8->msg_err)
  FUNC_0(&VAR_8->cmd_complete);
 else if (FUNC_7(VAR_8->flags & VAR_0)) {

  VAR_9 = FUNC_1(VAR_8, VAR_2);
  FUNC_3(VAR_8);
  FUNC_2(VAR_8, VAR_9, VAR_2);
 }

 return 0;
}
