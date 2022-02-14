
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct dc_i2c {int state; struct i2c_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dc_i2c*,int ) ;
 int FUNC_1 (struct dc_i2c*) ;
 int FUNC_2 (struct dc_i2c*) ;

__attribute__((used)) static void FUNC_3(struct dc_i2c *VAR_7, int VAR_8)
{
 struct i2c_msg *VAR_9 = VAR_7->msg;

 if (!(VAR_9->flags & VAR_0)) {
  VAR_7->state = VAR_5;
  FUNC_0(VAR_7, VAR_8 ? VAR_3 : VAR_2);
 } else if (VAR_9->flags & VAR_1) {
  VAR_7->state = VAR_4;
  FUNC_1(VAR_7);
 } else {
  VAR_7->state = VAR_6;
  FUNC_2(VAR_7);
 }
}
