
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3x_i2c {int busy; int wait; int state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (struct rk3x_i2c*,int ) ;
 int FUNC_2 (struct rk3x_i2c*,unsigned int,int ) ;
 int FUNC_3 (struct rk3x_i2c*) ;
 int FUNC_4 (struct rk3x_i2c*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rk3x_i2c *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;

 if (!(VAR_7 & VAR_3)) {
  FUNC_4(VAR_6, -VAR_0);
  FUNC_0(VAR_6->dev, "unexpected irq in STOP: 0x%x\n", VAR_7);
  FUNC_3(VAR_6);
  return;
 }


 FUNC_2(VAR_6, VAR_3, VAR_4);


 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_8 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_8, VAR_1);

 VAR_6->busy = 0;
 VAR_6->state = VAR_5;


 FUNC_5(&VAR_6->wait);
}
