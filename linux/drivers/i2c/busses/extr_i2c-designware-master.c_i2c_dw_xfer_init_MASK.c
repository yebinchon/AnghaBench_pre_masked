
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int flags; int addr; } ;
struct dw_i2c_dev {size_t msg_write_idx; struct i2c_msg* msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dw_i2c_dev*) ;
 int FUNC_1 (struct dw_i2c_dev*) ;
 int FUNC_2 (struct dw_i2c_dev*,int ) ;
 int FUNC_3 (struct dw_i2c_dev*,int,int ) ;
 int FUNC_4 (struct dw_i2c_dev*) ;

__attribute__((used)) static void FUNC_5(struct dw_i2c_dev *VAR_9)
{
 struct i2c_msg *VAR_10 = VAR_9->msgs;
 u32 VAR_11, VAR_12 = 0;


 FUNC_0(VAR_9);


 VAR_11 = FUNC_2(VAR_9, VAR_1);
 if (VAR_10[VAR_9->msg_write_idx].flags & VAR_8) {
  VAR_11 |= VAR_2;






  VAR_12 = VAR_7;
 } else {
  VAR_11 &= ~VAR_2;
 }

 FUNC_3(VAR_9, VAR_11, VAR_1);





 FUNC_3(VAR_9, VAR_10[VAR_9->msg_write_idx].addr | VAR_12, VAR_6);


 FUNC_4(VAR_9);


 FUNC_1(VAR_9);


 FUNC_2(VAR_9, VAR_3);


 FUNC_2(VAR_9, VAR_0);
 FUNC_3(VAR_9, VAR_5, VAR_4);
}
