
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_dev {scalar_t__ base; struct i2c_msg* msg; } ;
struct i2c_msg {scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qup_i2c_dev *VAR_5)
{
 struct i2c_msg *VAR_6 = VAR_5->msg;
 u32 VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_6);


 VAR_8 = (VAR_6->len == VAR_2) ? 0 : VAR_6->len;

 VAR_9 = ((VAR_3 | VAR_8) << VAR_0) | VAR_4 | VAR_7;
 FUNC_1(VAR_9, VAR_5->base + VAR_1);
}
