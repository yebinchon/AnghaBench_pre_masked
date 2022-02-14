
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_adc {int regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct exynos_adc *VAR_2,
         unsigned long VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = FUNC_3(FUNC_1(VAR_2->regs));
 VAR_5 &= ~VAR_1;
 VAR_5 |= FUNC_2(VAR_3);
 FUNC_4(VAR_5, FUNC_1(VAR_2->regs));

 VAR_4 = FUNC_3(FUNC_0(VAR_2->regs));
 FUNC_4(VAR_4 | VAR_0, FUNC_0(VAR_2->regs));
}
