
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fixedHashSize; scalar_t__ hashMask; int * hash; } ;
typedef TYPE_1__ CMatchFinder ;
typedef int CLzRef ;


 int VAR_0 ;

void FUNC_0(CMatchFinder *VAR_1)
{
  size_t VAR_2;
  CLzRef *VAR_3 = VAR_1->hash + VAR_1->fixedHashSize;
  size_t VAR_4 = (size_t)VAR_1->hashMask + 1;
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
    VAR_3[VAR_2] = VAR_0;
}
