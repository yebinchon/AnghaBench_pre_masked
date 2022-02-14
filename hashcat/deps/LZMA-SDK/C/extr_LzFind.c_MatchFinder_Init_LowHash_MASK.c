
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t fixedHashSize; int * hash; } ;
typedef TYPE_1__ CMatchFinder ;
typedef int CLzRef ;


 int VAR_0 ;

void FUNC_0(CMatchFinder *VAR_1)
{
  size_t VAR_2;
  CLzRef *VAR_3 = VAR_1->hash;
  size_t VAR_4 = VAR_1->fixedHashSize;
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
    VAR_3[VAR_2] = VAR_0;
}
