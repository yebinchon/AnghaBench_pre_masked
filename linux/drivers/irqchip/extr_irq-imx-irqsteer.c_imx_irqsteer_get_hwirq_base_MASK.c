
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct irqsteer_data {int irq_count; scalar_t__* irq; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct irqsteer_data *VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->irq_count; VAR_3++) {
  if (VAR_1->irq[VAR_3] == VAR_2)
   return VAR_3 * 64;
 }

 return -VAR_0;
}
