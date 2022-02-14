
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root_domain; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_2 (int ) ;

unsigned int FUNC_3(void)
{
 unsigned int VAR_2, VAR_3 = -1;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 != -1U)
  VAR_3 = FUNC_0(VAR_1->root_domain, VAR_2);

 FUNC_1("irq-xilinx: hwirq=%d, irq=%d\n", VAR_2, VAR_3);

 return VAR_3;
}
