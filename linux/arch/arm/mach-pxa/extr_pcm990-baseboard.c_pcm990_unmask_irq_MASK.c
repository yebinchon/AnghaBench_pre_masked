
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct irq_data {int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_3)
{
 int VAR_4 = (VAR_3->irq - FUNC_0(0));
 u8 VAR_5;



 VAR_2 |= (1 << VAR_4);

 VAR_5 = FUNC_1(VAR_1);
 VAR_5 |= 1 << VAR_4;
 FUNC_2(VAR_5, VAR_1);

 FUNC_2(VAR_2, VAR_0);
}
