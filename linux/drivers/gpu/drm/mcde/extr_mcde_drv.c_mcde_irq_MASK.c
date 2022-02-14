
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mcde {scalar_t__ regs; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mcde*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct mcde *VAR_5 = VAR_4;
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_5->regs + VAR_1);

 FUNC_1(VAR_5);

 if (VAR_6)
  FUNC_0(VAR_5->dev, "some error IRQ\n");
 FUNC_3(VAR_6, VAR_5->regs + VAR_2);

 return VAR_0;
}
