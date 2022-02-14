
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int range; } ;
typedef TYPE_1__ CRangeEnc ;
typedef int CLzmaProb ;


 int FUNC_0 (TYPE_1__*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(CRangeEnc *VAR_0, CLzmaProb *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
  UInt32 VAR_4 = VAR_0->range;
  unsigned VAR_5 = 1;
  do
  {
    UInt32 VAR_6, VAR_7;
    unsigned VAR_8 = VAR_3 & 1;

    VAR_3 >>= 1;
    FUNC_0(VAR_0, VAR_1 + VAR_5, VAR_8);
    VAR_5 = (VAR_5 << 1) | VAR_8;
  }
  while (--VAR_2);
  VAR_0->range = VAR_4;
}
