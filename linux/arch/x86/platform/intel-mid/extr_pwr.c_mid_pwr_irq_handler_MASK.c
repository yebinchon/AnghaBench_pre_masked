
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mid_pwr {int dev; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct mid_pwr *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_6->regs + VAR_2);
 if (!(VAR_7 & VAR_3))
  return VAR_1;

 FUNC_3(VAR_7 | VAR_3, VAR_6->regs + VAR_2);

 FUNC_1(VAR_6->dev, "Unexpected IRQ: %#x\n", FUNC_0(VAR_7));
 return VAR_0;
}
