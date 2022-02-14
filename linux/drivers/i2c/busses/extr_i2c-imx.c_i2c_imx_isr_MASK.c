
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_i2c_struct {unsigned int i2csr; int queue; TYPE_1__* hwdata; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int i2sr_clr_opcode; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct imx_i2c_struct*,int ) ;
 int FUNC_1 (unsigned int,struct imx_i2c_struct*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct imx_i2c_struct *VAR_6 = VAR_5;
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 if (VAR_7 & VAR_0) {

  VAR_6->i2csr = VAR_7;
  VAR_7 &= ~VAR_0;
  VAR_7 |= (VAR_6->hwdata->i2sr_clr_opcode & VAR_0);
  FUNC_1(VAR_7, VAR_6, VAR_1);
  FUNC_2(&VAR_6->queue);
  return VAR_2;
 }

 return VAR_3;
}
