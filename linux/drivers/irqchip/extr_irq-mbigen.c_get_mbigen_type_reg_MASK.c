
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline void FUNC_0(irq_hw_number_t VAR_4,
     u32 *VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;

 VAR_4 -= VAR_3;
 VAR_7 = VAR_4 / VAR_0 + 1;
 VAR_8 = VAR_4 % VAR_0;

 *VAR_5 = 1 << (VAR_8 % 32);
 VAR_9 = VAR_8 / 32 * 4;

 *VAR_6 = VAR_9 + VAR_7 * VAR_1
  + VAR_2;
}
