
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx7d_adc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct imx7d_adc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct imx7d_adc *VAR_7)
{
 u32 VAR_8;


 VAR_8 = FUNC_1(VAR_7->regs + VAR_0);
 VAR_8 &= ~(VAR_1 |
   VAR_3);
 VAR_8 |= VAR_2;
 FUNC_2(VAR_8, VAR_7->regs + VAR_0);


 FUNC_2(VAR_4,
        VAR_7->regs + VAR_6);
 FUNC_2(VAR_4,
        VAR_7->regs + VAR_5);

 FUNC_0(VAR_7);
}
