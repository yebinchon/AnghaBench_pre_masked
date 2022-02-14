
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct irq_desc {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 struct irq_desc* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(uint16_t VAR_5)
{
 struct irq_desc *VAR_6 = FUNC_2(VAR_3);
 unsigned long VAR_7;

 if (FUNC_0() == VAR_0 ||
     FUNC_0() == VAR_1 ||
     FUNC_0() == VAR_2) {
  FUNC_3(&VAR_6->lock, VAR_7);
  FUNC_1(VAR_4, VAR_5);
  FUNC_4(&VAR_6->lock, VAR_7);
 }
}
