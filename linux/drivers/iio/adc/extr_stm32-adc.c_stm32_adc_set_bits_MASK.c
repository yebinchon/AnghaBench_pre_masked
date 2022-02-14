
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_adc {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct stm32_adc*,int) ;
 int FUNC_3 (struct stm32_adc*,int,int) ;

__attribute__((used)) static void FUNC_4(struct stm32_adc *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, VAR_1) | VAR_2);
 FUNC_1(&VAR_0->lock, VAR_3);
}
