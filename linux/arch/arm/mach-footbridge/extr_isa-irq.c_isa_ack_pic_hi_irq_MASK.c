
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = 1 << (VAR_3->irq & 7);

 FUNC_1(FUNC_0(VAR_2) | VAR_4, VAR_2);
 FUNC_1(0x62, VAR_1);
 FUNC_1(0x20, VAR_0);
}
