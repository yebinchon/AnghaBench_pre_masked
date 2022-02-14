
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct exynos_adc {int regs; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_4(struct exynos_adc *VAR_1,
       unsigned long VAR_2)
{
 u32 VAR_3;


 FUNC_3(VAR_2, FUNC_0(VAR_1->regs));

 VAR_3 = FUNC_2(FUNC_1(VAR_1->regs));
 FUNC_3(VAR_3 | VAR_0, FUNC_1(VAR_1->regs));
}
