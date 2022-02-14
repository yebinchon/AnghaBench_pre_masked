
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_2__ {int dictSize; int pb; int lp; scalar_t__ lc; } ;
typedef scalar_t__ SizeT ;
typedef int SRes ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_1__ CLzmaEnc ;
typedef scalar_t__ Byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

SRes FUNC_0(CLzmaEncHandle VAR_3, Byte *VAR_4, SizeT *VAR_5)
{
  CLzmaEnc *VAR_6 = (CLzmaEnc *)VAR_3;
  unsigned VAR_7;
  UInt32 VAR_8 = VAR_6->dictSize;
  if (*VAR_5 < VAR_0)
    return VAR_1;
  *VAR_5 = VAR_0;
  VAR_4[0] = (Byte)((VAR_6->pb * 5 + VAR_6->lp) * 9 + VAR_6->lc);

  if (VAR_8 >= ((UInt32)1 << 22))
  {
    UInt32 VAR_9 = ((UInt32)1 << 20) - 1;
    if (VAR_8 < (UInt32)0xFFFFFFFF - VAR_9)
      VAR_8 = (VAR_8 + VAR_9) & ~VAR_9;
  }
  else for (VAR_7 = 11; VAR_7 <= 30; VAR_7++)
  {
    if (VAR_8 <= ((UInt32)2 << VAR_7)) { VAR_8 = (2 << VAR_7); break; }
    if (VAR_8 <= ((UInt32)3 << VAR_7)) { VAR_8 = (3 << VAR_7); break; }
  }

  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
    VAR_4[1 + VAR_7] = (Byte)(VAR_8 >> (8 * VAR_7));
  return VAR_2;
}
