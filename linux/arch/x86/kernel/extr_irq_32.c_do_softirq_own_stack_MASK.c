
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_stack {int dummy; } ;


 int VAR_0 ;
 struct irq_stack* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(void)
{
 struct irq_stack *VAR_3;
 u32 *VAR_4, *VAR_5;

 VAR_3 = FUNC_0(VAR_2);


 VAR_4 = (u32 *) ((char *)VAR_3 + sizeof(*VAR_3));


 VAR_5 = (u32 *)VAR_3;
 *VAR_5 = VAR_1;

 FUNC_1(VAR_0, VAR_4);
}
