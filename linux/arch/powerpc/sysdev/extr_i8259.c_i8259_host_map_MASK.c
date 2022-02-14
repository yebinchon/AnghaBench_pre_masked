
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4, unsigned int VAR_5,
     irq_hw_number_t VAR_6)
{
 FUNC_2("i8259_host_map(%d, 0x%lx)\n", VAR_5, VAR_6);


 if (VAR_6 == 2)
  FUNC_1(VAR_5, VAR_1);




 FUNC_1(VAR_5, VAR_0);
 FUNC_0(VAR_5, &VAR_3, VAR_2);
 return 0;
}
