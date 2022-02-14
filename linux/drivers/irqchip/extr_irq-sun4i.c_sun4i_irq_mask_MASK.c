
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ irq_base; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3 = VAR_2 % 32;
 int VAR_4 = VAR_2 / 32;
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_0->irq_base +
   FUNC_0(VAR_0, VAR_4));
 FUNC_3(VAR_5 & ~(1 << VAR_3),
        VAR_0->irq_base + FUNC_0(VAR_0, VAR_4));
}
