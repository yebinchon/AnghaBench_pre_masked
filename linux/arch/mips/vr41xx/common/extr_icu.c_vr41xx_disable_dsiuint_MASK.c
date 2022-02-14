
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct irq_desc {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct irq_desc* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(uint16_t VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_1, VAR_2);
 FUNC_3(&VAR_3->lock, VAR_4);
}
