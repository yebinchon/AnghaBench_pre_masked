
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bufBase; int * bufLim; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CRangeEnc ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(CRangeEnc *VAR_1, ISzAllocPtr VAR_2)
{
  if (!VAR_1->bufBase)
  {
    VAR_1->bufBase = (Byte *)FUNC_0(VAR_2, VAR_0);
    if (!VAR_1->bufBase)
      return 0;
    VAR_1->bufLim = VAR_1->bufBase + VAR_0;
  }
  return 1;
}
