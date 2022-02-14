
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf857x {TYPE_1__* client; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 struct pcf857x* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct pcf857x *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->client->irq, VAR_1);
}
