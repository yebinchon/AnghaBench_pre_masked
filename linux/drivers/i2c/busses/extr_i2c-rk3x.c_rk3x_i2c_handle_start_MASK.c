
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3x_i2c {scalar_t__ mode; int state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (struct rk3x_i2c*,int ) ;
 int FUNC_2 (struct rk3x_i2c*,unsigned int,int ) ;
 int FUNC_3 (struct rk3x_i2c*) ;
 int FUNC_4 (struct rk3x_i2c*) ;
 int FUNC_5 (struct rk3x_i2c*) ;
 int FUNC_6 (struct rk3x_i2c*,int ) ;

__attribute__((used)) static void FUNC_7(struct rk3x_i2c *VAR_12, unsigned int VAR_13)
{
 if (!(VAR_13 & VAR_8)) {
  FUNC_6(VAR_12, -VAR_0);
  FUNC_0(VAR_12->dev, "unexpected irq in START: 0x%x\n", VAR_13);
  FUNC_3(VAR_12);
  return;
 }


 FUNC_2(VAR_12, VAR_8, VAR_9);


 FUNC_2(VAR_12, FUNC_1(VAR_12, VAR_1) & ~VAR_3, VAR_1);


 if (VAR_12->mode == VAR_2) {
  FUNC_2(VAR_12, VAR_6 | VAR_7, VAR_4);
  VAR_12->state = VAR_11;
  FUNC_4(VAR_12);
 } else {

  FUNC_2(VAR_12, VAR_5 | VAR_7, VAR_4);
  VAR_12->state = VAR_10;
  FUNC_5(VAR_12);
 }
}
