
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk3x_i2c {scalar_t__ processed; int error; TYPE_1__* msg; int dev; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct rk3x_i2c*,unsigned int,int ) ;
 int FUNC_2 (struct rk3x_i2c*) ;
 int FUNC_3 (struct rk3x_i2c*) ;
 int FUNC_4 (struct rk3x_i2c*,int ) ;

__attribute__((used)) static void FUNC_5(struct rk3x_i2c *VAR_3, unsigned int VAR_4)
{
 if (!(VAR_4 & VAR_1)) {
  FUNC_4(VAR_3, -VAR_0);
  FUNC_0(VAR_3->dev, "unexpected irq in WRITE: 0x%x\n", VAR_4);
  FUNC_2(VAR_3);
  return;
 }


 FUNC_1(VAR_3, VAR_1, VAR_2);


 if (VAR_3->processed == VAR_3->msg->len)
  FUNC_4(VAR_3, VAR_3->error);
 else
  FUNC_3(VAR_3);
}
