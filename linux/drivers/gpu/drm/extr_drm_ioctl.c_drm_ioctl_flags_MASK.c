
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 TYPE_1__* VAR_3 ;

bool FUNC_1(unsigned int VAR_4, unsigned int *VAR_5)
{
 if (VAR_4 >= VAR_0 && VAR_4 < VAR_1)
  return 0;

 if (VAR_4 >= VAR_2)
  return 0;
 VAR_4 = FUNC_0(VAR_4, VAR_2);

 *VAR_5 = VAR_3[VAR_4].flags;
 return 1;
}
