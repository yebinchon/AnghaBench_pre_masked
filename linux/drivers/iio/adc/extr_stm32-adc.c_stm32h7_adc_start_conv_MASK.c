
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_adc {int lock; } ;
typedef enum stm32h7_adc_dmngt { ____Placeholder_stm32h7_adc_dmngt } stm32h7_adc_dmngt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct stm32_adc*,int ) ;
 int FUNC_3 (struct stm32_adc*,int ,int ) ;
 int FUNC_4 (struct stm32_adc*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct stm32_adc *VAR_7, bool VAR_8)
{
 enum stm32h7_adc_dmngt VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;

 if (VAR_8)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_4;

 FUNC_0(&VAR_7->lock, VAR_10);
 VAR_11 = FUNC_2(VAR_7, VAR_0);
 VAR_11 = (VAR_11 & ~VAR_5) | (VAR_9 << VAR_6);
 FUNC_4(VAR_7, VAR_0, VAR_11);
 FUNC_1(&VAR_7->lock, VAR_10);

 FUNC_3(VAR_7, VAR_1, VAR_2);
}
