
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static u32 FUNC_2(struct irq_data *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0) & 31);
}
