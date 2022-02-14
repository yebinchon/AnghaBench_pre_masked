
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int dicSize; int lc; int pb; int lp; } ;
typedef int SRes ;
typedef TYPE_1__ CLzmaProps ;
typedef int Byte ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

SRes FUNC_0(CLzmaProps *VAR_4, const Byte *VAR_5, unsigned VAR_6)
{
  UInt32 VAR_7;
  Byte VAR_8;

  if (VAR_6 < VAR_1)
    return VAR_2;
  else
    VAR_7 = VAR_5[1] | ((UInt32)VAR_5[2] << 8) | ((UInt32)VAR_5[3] << 16) | ((UInt32)VAR_5[4] << 24);

  if (VAR_7 < VAR_0)
    VAR_7 = VAR_0;
  VAR_4->dicSize = VAR_7;

  VAR_8 = VAR_5[0];
  if (VAR_8 >= (9 * 5 * 5))
    return VAR_2;

  VAR_4->lc = (Byte)(VAR_8 % 9);
  VAR_8 /= 9;
  VAR_4->pb = (Byte)(VAR_8 / 5);
  VAR_4->lp = (Byte)(VAR_8 % 5);

  return VAR_3;
}
