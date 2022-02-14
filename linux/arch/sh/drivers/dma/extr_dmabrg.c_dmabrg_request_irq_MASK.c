
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* handler ) (void*) ;void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_2 ;

int FUNC_1(unsigned int VAR_3, void(*VAR_4)(void*),
         void *VAR_5)
{
 if ((VAR_3 > 9) || !VAR_4)
  return -VAR_1;
 if (VAR_2[VAR_3].handler)
  return -VAR_0;

 VAR_2[VAR_3].handler = VAR_4;
 VAR_2[VAR_3].data = VAR_5;

 FUNC_0(VAR_3);
 return 0;
}
