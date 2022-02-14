
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,unsigned char) ;
 int FUNC_1 (int *,unsigned char) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_5)
{
 unsigned int VAR_6 = VAR_5->irq;
 unsigned char VAR_7;

 if (VAR_6 >= VAR_2) {
  VAR_7 = 1 << (VAR_6 - VAR_2);
  FUNC_1(&VAR_4, VAR_7);
  FUNC_0(&VAR_4, VAR_0 | VAR_7);
 } else {
  VAR_7 = 1 << (VAR_6 - VAR_1);
  FUNC_1(&VAR_3, VAR_7);
  FUNC_0(&VAR_3, VAR_0 | VAR_7);
 }
}
