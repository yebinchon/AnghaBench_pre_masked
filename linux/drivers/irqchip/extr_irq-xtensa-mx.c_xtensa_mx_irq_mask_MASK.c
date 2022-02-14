
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_6)
{
 unsigned int VAR_7 = 1u << VAR_6->hwirq;

 if (VAR_7 & (VAR_2 |
      VAR_3)) {
  unsigned int VAR_8 = FUNC_3(VAR_6->hwirq);

  if (VAR_8 >= VAR_0) {
   FUNC_2(1u << (VAR_8 - VAR_0), VAR_1);
   return;
  }
 }
 VAR_7 = FUNC_0(VAR_4) & ~VAR_7;
 FUNC_1(VAR_4, VAR_7);
 FUNC_4(VAR_7, VAR_5);
}
