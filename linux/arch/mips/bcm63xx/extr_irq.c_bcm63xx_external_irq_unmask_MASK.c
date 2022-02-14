
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
 scalar_t__ VAR_2 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq - VAR_0;
 u32 VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_5(VAR_5);
 FUNC_8(&VAR_1, VAR_8);
 VAR_6 = FUNC_3(VAR_7);

 if (FUNC_0())
  VAR_6 |= FUNC_2(VAR_5 % 4);
 else
  VAR_6 |= FUNC_1(VAR_5 % 4);

 FUNC_4(VAR_6, VAR_7);
 FUNC_9(&VAR_1, VAR_8);

 if (VAR_3)
  FUNC_6(FUNC_7(VAR_5 + VAR_2),
        ((void*)0));
}
