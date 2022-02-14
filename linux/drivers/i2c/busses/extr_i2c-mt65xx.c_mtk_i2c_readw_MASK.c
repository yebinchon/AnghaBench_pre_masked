
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mtk_i2c {TYPE_1__* dev_comp; scalar_t__ base; } ;
typedef enum I2C_REGS_OFFSET { ____Placeholder_I2C_REGS_OFFSET } I2C_REGS_OFFSET ;
struct TYPE_2__ {scalar_t__* regs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct mtk_i2c *VAR_0, enum I2C_REGS_OFFSET VAR_1)
{
 return FUNC_0(VAR_0->base + VAR_0->dev_comp->regs[VAR_1]);
}
