
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpic {int dummy; } ;
struct irq_queue {int next; } ;


 int FUNC_0 (struct openpic*,struct irq_queue*) ;

__attribute__((used)) static int FUNC_1(struct openpic *VAR_0, struct irq_queue *VAR_1)
{

 FUNC_0(VAR_0, VAR_1);

 return VAR_1->next;
}
