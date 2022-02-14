
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk3x_i2c {int state; int lock; TYPE_1__* msg; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int ,char*,int,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (struct rk3x_i2c*,int ) ;
 int FUNC_3 (struct rk3x_i2c*,unsigned int,int ) ;
 int FUNC_4 (struct rk3x_i2c*) ;
 int FUNC_5 (struct rk3x_i2c*,unsigned int) ;
 int FUNC_6 (struct rk3x_i2c*,unsigned int) ;
 int FUNC_7 (struct rk3x_i2c*,unsigned int) ;
 int FUNC_8 (struct rk3x_i2c*,unsigned int) ;
 int FUNC_9 (struct rk3x_i2c*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_8, void *VAR_9)
{
 struct rk3x_i2c *VAR_10 = VAR_9;
 unsigned int VAR_11;

 FUNC_10(&VAR_10->lock);

 VAR_11 = FUNC_2(VAR_10, VAR_7);
 if (VAR_10->state == 132) {
  FUNC_1(VAR_10->dev, "irq in STATE_IDLE, ipd = 0x%x\n", VAR_11);
  FUNC_4(VAR_10);
  goto out;
 }

 FUNC_0(VAR_10->dev, "IRQ: state %d, ipd: %x\n", VAR_10->state, VAR_11);


 VAR_11 &= ~(VAR_4 | VAR_5);

 if (VAR_11 & VAR_6) {





  FUNC_3(VAR_10, VAR_6, VAR_7);

  VAR_11 &= ~VAR_6;

  if (!(VAR_10->msg->flags & VAR_1))
   FUNC_9(VAR_10, -VAR_0);
 }


 if ((VAR_11 & VAR_3) == 0)
  goto out;

 switch (VAR_10->state) {
 case 130:
  FUNC_6(VAR_10, VAR_11);
  break;
 case 128:
  FUNC_8(VAR_10, VAR_11);
  break;
 case 131:
  FUNC_5(VAR_10, VAR_11);
  break;
 case 129:
  FUNC_7(VAR_10, VAR_11);
  break;
 case 132:
  break;
 }

out:
 FUNC_11(&VAR_10->lock);
 return VAR_2;
}
