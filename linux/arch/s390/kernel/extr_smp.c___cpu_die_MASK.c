
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcpu {int dummy; } ;
struct TYPE_4__ {int cpu_attach_mask; } ;
struct TYPE_5__ {TYPE_1__ context; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int,int *) ;
 TYPE_2__ VAR_0 ;
 int * FUNC_2 (TYPE_2__*) ;
 struct pcpu* VAR_1 ;
 int FUNC_3 (struct pcpu*) ;
 int FUNC_4 (struct pcpu*) ;

void FUNC_5(unsigned int VAR_2)
{
 struct pcpu *VAR_3;


 VAR_3 = VAR_1 + VAR_2;
 while (!FUNC_4(VAR_3))
  FUNC_0();
 FUNC_3(VAR_3);
 FUNC_1(VAR_2, FUNC_2(&VAR_0));
 FUNC_1(VAR_2, &VAR_0.context.cpu_attach_mask);
}
