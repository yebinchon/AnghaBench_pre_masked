
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {int * isRepG2; scalar_t__* isRepG1; scalar_t__** isRep0Long; scalar_t__* isRepG0; } ;
typedef TYPE_1__ CLzmaEnc ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static UInt32 FUNC_3(const CLzmaEnc *VAR_0, unsigned VAR_1, size_t VAR_2, size_t VAR_3)
{
  UInt32 VAR_4;
  UInt32 VAR_5 = VAR_0->isRepG0[VAR_2];
  if (VAR_1 == 0)
  {
    VAR_4 = FUNC_1(VAR_5);
    VAR_4 += FUNC_2(VAR_0->isRep0Long[VAR_2][VAR_3]);
  }
  else
  {
    VAR_4 = FUNC_2(VAR_5);
    VAR_5 = VAR_0->isRepG1[VAR_2];
    if (VAR_1 == 1)
      VAR_4 += FUNC_1(VAR_5);
    else
    {
      VAR_4 += FUNC_2(VAR_5);
      VAR_4 += FUNC_0(VAR_0->isRepG2[VAR_2], VAR_1 - 2);
    }
  }
  return VAR_4;
}
