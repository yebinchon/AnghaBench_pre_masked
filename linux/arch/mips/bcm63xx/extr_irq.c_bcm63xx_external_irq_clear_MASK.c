
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {unsigned int irq; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->irq - VAR_0;
 u32 VAR_4, VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_5(VAR_3);
 FUNC_6(&VAR_1, VAR_6);
 VAR_4 = FUNC_3(VAR_5);

 if (FUNC_0())
  VAR_4 |= FUNC_2(VAR_3 % 4);
 else
  VAR_4 |= FUNC_1(VAR_3 % 4);

 FUNC_4(VAR_4, VAR_5);
 FUNC_7(&VAR_1, VAR_6);
}
