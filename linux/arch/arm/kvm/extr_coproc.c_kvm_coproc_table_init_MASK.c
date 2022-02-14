
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* reset ) (int *,TYPE_1__*) ;} ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(void)
{
 unsigned int VAR_3;


 FUNC_1(FUNC_2(VAR_1, FUNC_0(VAR_1)));
 FUNC_1(FUNC_2(VAR_2, FUNC_0(VAR_2)));


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  VAR_2[VAR_3].reset(((void*)0), &VAR_2[VAR_3]);
 asm volatile("mrc p15, 1, %0, c0, c0, 1" : "=r" (VAR_0));
 for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
  if (((VAR_0 >> (VAR_3*3)) & 7) == 0)
   break;

 VAR_0 &= (1 << (VAR_3*3))-1;
}
