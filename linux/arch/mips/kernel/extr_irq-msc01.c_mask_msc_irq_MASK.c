
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq;

 if (VAR_4 < (VAR_2 + 32))
  FUNC_0(VAR_1, 1<<(VAR_4 - VAR_2));
 else
  FUNC_0(VAR_0, 1<<(VAR_4 - VAR_2 - 32));
}
