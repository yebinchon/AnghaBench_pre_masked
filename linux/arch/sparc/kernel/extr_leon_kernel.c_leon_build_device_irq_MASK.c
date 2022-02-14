
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {scalar_t__ handle_irq; } ;
typedef int irq_flow_handler_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int *,int ,char const*) ;
 int FUNC_2 (unsigned int,void*) ;
 struct irq_desc* FUNC_3 (unsigned int) ;
 unsigned long FUNC_4 (unsigned int) ;
 int VAR_2 ;

unsigned int FUNC_5(unsigned int VAR_3,
        irq_flow_handler_t VAR_4,
        const char *VAR_5, int VAR_6)
{
 unsigned int VAR_7;
 unsigned long VAR_8;
 struct irq_desc *VAR_9;

 VAR_7 = 0;
 VAR_8 = FUNC_4(VAR_3);
 if (VAR_8 == 0)
  goto out;

 VAR_7 = FUNC_0(VAR_3, VAR_3);
 if (VAR_7 == 0)
  goto out;

 if (VAR_6)
  VAR_8 |= VAR_0;

 VAR_9 = FUNC_3(VAR_7);
 if (!VAR_9 || !VAR_9->handle_irq || VAR_9->handle_irq == VAR_1) {
  FUNC_1(VAR_7, &VAR_2,
           VAR_4, VAR_5);
  FUNC_2(VAR_7, (void *)VAR_8);
 }

out:
 return VAR_7;
}
