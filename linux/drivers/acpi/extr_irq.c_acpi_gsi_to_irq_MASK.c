
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct irq_domain*,int ) ;
 struct irq_domain* FUNC_1 (int ,int ) ;

int FUNC_2(u32 VAR_3, unsigned int *VAR_4)
{
 struct irq_domain *VAR_5 = FUNC_1(VAR_2,
       VAR_0);

 *VAR_4 = FUNC_0(VAR_5, VAR_3);




 return (*VAR_4 > 0) ? 0 : -VAR_1;
}
