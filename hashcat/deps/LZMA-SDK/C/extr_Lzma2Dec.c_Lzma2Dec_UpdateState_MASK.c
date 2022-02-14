
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_6__ {int pb; int lc; int lp; } ;
struct TYPE_7__ {TYPE_1__ prop; int dicPos; } ;
struct TYPE_8__ {int state; int control; int needInitLevel; int unpackSize; int packSize; TYPE_2__ decoder; int isExtraMode; } ;
typedef int ELzma2State ;
typedef TYPE_3__ CLzma2Dec ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 unsigned int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static ELzma2State FUNC_3(CLzma2Dec *VAR_6, Byte VAR_7)
{
  switch (VAR_6->state)
  {
    case 133:
      VAR_6->isExtraMode = VAR_0;
      VAR_6->control = VAR_7;
      FUNC_1(FUNC_2("\n %8X", (unsigned)VAR_6->decoder.dicPos));
      FUNC_1(FUNC_2(" %02X", (unsigned)VAR_7));
      if (VAR_7 == 0)
        return VAR_5;
      if (FUNC_0(VAR_6))
      {
        if (VAR_7 == VAR_1)
          VAR_6->needInitLevel = 0xC0;
        else if (VAR_7 > 2 || VAR_6->needInitLevel == 0xE0)
          return VAR_4;
      }
      else
      {
        if (VAR_7 < VAR_6->needInitLevel)
          return VAR_4;
        VAR_6->needInitLevel = 0;
        VAR_6->unpackSize = (UInt32)(VAR_7 & 0x1F) << 16;
      }
      return 129;

    case 129:
      VAR_6->unpackSize |= (UInt32)VAR_7 << 8;
      return 128;

    case 128:
      VAR_6->unpackSize |= (UInt32)VAR_7;
      VAR_6->unpackSize++;
      FUNC_1(FUNC_2(" %7u", (unsigned)VAR_6->unpackSize));
      return FUNC_0(VAR_6) ? VAR_3 : 132;

    case 132:
      VAR_6->packSize = (UInt32)VAR_7 << 8;
      return 131;

    case 131:
      VAR_6->packSize |= (UInt32)VAR_7;
      VAR_6->packSize++;

      FUNC_1(FUNC_2(" %5u", (unsigned)VAR_6->packSize));
      return (VAR_6->control & 0x40) ? 130 : VAR_3;

    case 130:
    {
      unsigned VAR_8, VAR_9;
      if (VAR_7 >= (9 * 5 * 5))
        return VAR_4;
      VAR_8 = VAR_7 % 9;
      VAR_7 /= 9;
      VAR_6->decoder.prop.pb = (Byte)(VAR_7 / 5);
      VAR_9 = VAR_7 % 5;
      if (VAR_8 + VAR_9 > VAR_2)
        return VAR_4;
      VAR_6->decoder.prop.lc = (Byte)VAR_8;
      VAR_6->decoder.prop.lp = (Byte)VAR_9;
      return VAR_3;
    }
  }
  return VAR_4;
}
