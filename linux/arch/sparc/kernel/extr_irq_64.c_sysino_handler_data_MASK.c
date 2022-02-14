
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_handler_data {unsigned long sysino; } ;


 unsigned long FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct irq_handler_data *VAR_0,
    u32 VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_0->sysino = VAR_3;
}
