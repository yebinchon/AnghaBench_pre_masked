
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ cyclicBufferSize; scalar_t__ cyclicBufferPos; scalar_t__ streamPos; scalar_t__ keepSizeAfter; scalar_t__ matchMaxLen; scalar_t__ posLimit; scalar_t__ lenLimit; } ;
typedef TYPE_1__ CMatchFinder ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(CMatchFinder *VAR_1)
{
  UInt32 VAR_2 = VAR_0 - VAR_1->pos;
  UInt32 VAR_3 = VAR_1->cyclicBufferSize - VAR_1->cyclicBufferPos;

  if (VAR_3 < VAR_2)
    VAR_2 = VAR_3;
  VAR_3 = VAR_1->streamPos - VAR_1->pos;

  if (VAR_3 <= VAR_1->keepSizeAfter)
  {
    if (VAR_3 > 0)
      VAR_3 = 1;
  }
  else
    VAR_3 -= VAR_1->keepSizeAfter;

  if (VAR_3 < VAR_2)
    VAR_2 = VAR_3;

  {
    UInt32 VAR_4 = VAR_1->streamPos - VAR_1->pos;
    if (VAR_4 > VAR_1->matchMaxLen)
      VAR_4 = VAR_1->matchMaxLen;
    VAR_1->lenLimit = VAR_4;
  }
  VAR_1->posLimit = VAR_1->pos + VAR_2;
}
