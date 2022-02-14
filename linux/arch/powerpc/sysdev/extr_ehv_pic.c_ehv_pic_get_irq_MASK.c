
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irqhost; scalar_t__ coreint_flag; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*) ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

unsigned int FUNC_4(void)
{
 int VAR_2;

 FUNC_0(VAR_1 == ((void*)0));

 if (VAR_1->coreint_flag)
  VAR_2 = FUNC_3(VAR_0);
 else
  FUNC_1(0, &VAR_2);

 if (VAR_2 == 0xFFFF)
  return 0;





 return FUNC_2(VAR_1->irqhost, VAR_2);
}
