
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_5)
{
 unsigned int VAR_6 = VAR_5->irq;
 unsigned long VAR_7;
 unsigned long VAR_8;

 if ((VAR_6 <= VAR_2) && (VAR_4 == VAR_3))
  FUNC_1("Trying to use straight IRL0-3 with an encoding platform.\n");

 if (VAR_6 < 32) {
  VAR_7 = VAR_0;
  VAR_8 = 1 << VAR_6;
 } else {
  VAR_7 = VAR_1;
  VAR_8 = 1 << (VAR_6 - 32);
 }

 FUNC_0(VAR_8, VAR_7);
}
