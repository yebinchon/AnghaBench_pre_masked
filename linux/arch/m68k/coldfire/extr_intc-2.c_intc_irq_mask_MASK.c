
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {unsigned int irq; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_5)
{
 unsigned int VAR_6 = VAR_5->irq - VAR_4;
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;




 VAR_7 = VAR_0;

 VAR_7 += (VAR_6 & 0x20) ? VAR_2 : VAR_3;
 VAR_9 = 0x1 << (VAR_6 & 0x1f);

 VAR_8 = FUNC_0(VAR_7);
 FUNC_1(VAR_8 | VAR_9, VAR_7);
}
