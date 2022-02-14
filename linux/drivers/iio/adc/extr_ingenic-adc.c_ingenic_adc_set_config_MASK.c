
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ingenic_adc {int clk; int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ingenic_adc *VAR_1,
       uint32_t VAR_2,
       uint32_t VAR_3)
{
 uint32_t VAR_4;

 FUNC_1(VAR_1->clk);
 FUNC_2(&VAR_1->lock);

 VAR_4 = FUNC_4(VAR_1->base + VAR_0) & ~VAR_2;
 VAR_4 |= VAR_3;
 FUNC_5(VAR_4, VAR_1->base + VAR_0);

 FUNC_3(&VAR_1->lock);
 FUNC_0(VAR_1->clk);
}
