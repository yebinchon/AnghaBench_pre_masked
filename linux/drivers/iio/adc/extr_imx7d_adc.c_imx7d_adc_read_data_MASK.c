
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx7d_adc {int channel; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct imx7d_adc *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 VAR_3 = VAR_2->channel & 0x03;







 if (VAR_3 < 2)
  VAR_4 = FUNC_0(VAR_2->regs + VAR_0);
 else
  VAR_4 = FUNC_0(VAR_2->regs + VAR_1);
 if (VAR_3 & 0x1)
  VAR_4 = (VAR_4 >> 16) & 0xFFF;
 else
  VAR_4 &= 0xFFF;

 return VAR_4;
}
