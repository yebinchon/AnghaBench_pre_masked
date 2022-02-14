
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_irq ) (unsigned int) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned int,int *) ;

int FUNC_2(unsigned int VAR_4, int (*VAR_5)(unsigned int))
{
 int VAR_6 = 0;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 if (VAR_3[VAR_4].get_irq != ((void*)0))
  FUNC_0(VAR_4, ((void*)0));

 VAR_3[VAR_4].get_irq = VAR_5;

 if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_4, &VAR_2);
  if (VAR_6 < 0)
   VAR_3[VAR_4].get_irq = ((void*)0);
 }

 return VAR_6;
}
