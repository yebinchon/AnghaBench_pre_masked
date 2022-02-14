
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->irq;
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;
 unsigned char VAR_7;

 VAR_3 -= VAR_1;
 VAR_6 = VAR_0 + ((VAR_3 / 8) << 2);
 VAR_7 = 1<<(VAR_3 % 8);
 FUNC_3(VAR_4);
 VAR_5 = FUNC_0(VAR_6);
 VAR_5 |= VAR_7;
 FUNC_1(VAR_5, VAR_6);
 FUNC_2(VAR_4);
}
