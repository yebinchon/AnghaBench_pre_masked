
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {int Low; int Cache; scalar_t__ CacheSize; int Stream; } ;
typedef TYPE_1__ CPpmd7z_RangeEnc ;
typedef int Byte ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(CPpmd7z_RangeEnc *VAR_0)
{
  if ((UInt32)VAR_0->Low < (UInt32)0xFF000000 || (unsigned)(VAR_0->Low >> 32) != 0)
  {
    Byte VAR_1 = VAR_0->Cache;
    do
    {
      FUNC_0(VAR_0->Stream, (Byte)(VAR_1 + (Byte)(VAR_0->Low >> 32)));
      VAR_1 = 0xFF;
    }
    while (--VAR_0->CacheSize != 0);
    VAR_0->Cache = (Byte)((UInt32)VAR_0->Low >> 24);
  }
  VAR_0->CacheSize++;
  VAR_0->Low = (UInt32)VAR_0->Low << 8;
}
