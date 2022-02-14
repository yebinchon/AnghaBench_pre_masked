
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_5__ {int (* irq_unmask ) (TYPE_2__*) ;int (* irq_ack ) (TYPE_2__*) ;int (* irq_mask ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;


 VAR_4->irq_data.chip->irq_mask(&VAR_4->irq_data);

 VAR_5 = FUNC_1(VAR_2 + VAR_0);
 VAR_6 = FUNC_1(VAR_2 + VAR_1) & ~VAR_5;

 VAR_7 = 0;
 for (; VAR_6 != 0; VAR_6 >>= 1, VAR_7++) {
  if ((VAR_6 & 1) == 0)
   continue;
  FUNC_0(FUNC_2(VAR_3, VAR_7));
 }

 VAR_4->irq_data.chip->irq_ack(&VAR_4->irq_data);
 VAR_4->irq_data.chip->irq_unmask(&VAR_4->irq_data);
}
