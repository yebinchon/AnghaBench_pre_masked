
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int range; } ;
typedef TYPE_1__ CRangeEnc ;
typedef int CLzmaProb ;


 int FUNC_0 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_1(CRangeEnc *VAR_0, CLzmaProb *VAR_1, UInt32 VAR_2, UInt32 VAR_3)
{
  UInt32 VAR_4 = VAR_0->range;
  UInt32 VAR_5 = 0x100;
  VAR_2 |= 0x100;
  do
  {
    UInt32 VAR_6, VAR_7;
    CLzmaProb *VAR_8;
    UInt32 VAR_9;
    VAR_3 <<= 1;

    VAR_8 = VAR_1 + (VAR_5 + (VAR_3 & VAR_5) + (VAR_2 >> 8));
    VAR_9 = (VAR_2 >> 7) & 1;
    VAR_2 <<= 1;
    VAR_5 &= ~(VAR_3 ^ VAR_2);
    FUNC_0(VAR_0, VAR_8, VAR_9);
  }
  while (VAR_2 < 0x10000);
  VAR_0->range = VAR_4;
}
