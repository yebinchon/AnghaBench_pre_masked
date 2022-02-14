
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irq_hw_number_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(irq_hw_number_t VAR_1,
     u32 *VAR_2, u32 *VAR_3)
{
 unsigned int VAR_4 = (VAR_1 / 32) * 4;

 *VAR_2 = 1 << (VAR_1 % 32);
 *VAR_3 = VAR_4 + VAR_0;
}
