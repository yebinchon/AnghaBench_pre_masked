
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_i2c {int interrupt; int queue; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct mpc_i2c *VAR_6 = VAR_5;
 if (FUNC_0(VAR_6->base + VAR_3) & VAR_0) {

  VAR_6->interrupt = FUNC_0(VAR_6->base + VAR_3);
  FUNC_2(0, VAR_6->base + VAR_3);
  FUNC_1(&VAR_6->queue);
  return VAR_1;
 }
 return VAR_2;
}
