
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stm32_adc {scalar_t__ offset; TYPE_1__* common; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct stm32_adc *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->common->base + VAR_0->offset + VAR_1);
}
