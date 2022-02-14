
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*,int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_0);
 static unsigned long VAR_5;
 u32 VAR_6 = 1 << VAR_2->hwirq;

 if (VAR_3) {
  if (VAR_4 & VAR_6)
   FUNC_0(VAR_2->hwirq, &VAR_5, 1);
  else
   FUNC_0(VAR_2->hwirq, &VAR_5, 0);

  FUNC_0(VAR_2->hwirq, &VAR_4, 1);
  FUNC_0(VAR_2->hwirq, &VAR_1, 1);

 } else {
  if (!(VAR_5 & VAR_6))
   FUNC_0(VAR_2->hwirq, &VAR_4, 0);

  FUNC_0(VAR_2->hwirq, &VAR_1, 0);
  FUNC_0(VAR_2->hwirq, &VAR_5, 0);
 }

 FUNC_2(VAR_4, VAR_0);

 return 0;
}
