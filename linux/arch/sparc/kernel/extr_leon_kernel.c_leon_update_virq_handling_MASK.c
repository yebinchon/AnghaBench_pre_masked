
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_flow_handler_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int *,int ,char const*) ;
 int FUNC_2 (unsigned int,void*) ;
 int VAR_1 ;

void FUNC_3(unsigned int VAR_2,
         irq_flow_handler_t VAR_3,
         const char *VAR_4, int VAR_5)
{
 unsigned long VAR_6 = (unsigned long)FUNC_0(VAR_2);

 VAR_6 &= ~VAR_0;
 if (VAR_5)
  VAR_6 |= VAR_0;

 FUNC_1(VAR_2, &VAR_1,
          VAR_3, VAR_4);
 FUNC_2(VAR_2, (void *)VAR_6);
}
