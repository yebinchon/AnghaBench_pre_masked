
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card_ops {int dummy; } ;
struct expansion_card {struct expansion_card_ops const* ops; void* irq_data; } ;


 int FUNC_0 () ;

void FUNC_1(struct expansion_card *VAR_0, const struct expansion_card_ops *VAR_1, void *VAR_2)
{
 VAR_0->irq_data = VAR_2;
 FUNC_0();
 VAR_0->ops = VAR_1;
}
