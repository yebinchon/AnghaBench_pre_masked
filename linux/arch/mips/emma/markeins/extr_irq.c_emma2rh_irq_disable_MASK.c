
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq - VAR_2;
 u32 VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_0 +
      (VAR_1 - VAR_0) * (VAR_4 / 32);
 VAR_5 = FUNC_0(VAR_7);
 VAR_6 = 0x1 << (VAR_4 % 32);
 FUNC_1(VAR_7, VAR_5 & ~VAR_6);
}
