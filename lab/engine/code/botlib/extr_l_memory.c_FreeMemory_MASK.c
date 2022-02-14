
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* FreeMemory ) (unsigned long*) ;} ;


 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (unsigned long*) ;

void FUNC_1(void *VAR_2)
{
 unsigned long int *VAR_3;

 VAR_3 = (unsigned long int *) ((char *) VAR_2 - sizeof(unsigned long int));

 if (*VAR_3 == VAR_0)
 {
  VAR_1.FreeMemory(VAR_3);
 }
}
