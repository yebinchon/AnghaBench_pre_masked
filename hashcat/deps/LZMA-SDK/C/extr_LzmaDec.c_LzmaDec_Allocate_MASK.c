
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_9__ {int dicSize; } ;
struct TYPE_10__ {int dicBufSize; TYPE_1__ prop; int * dic; } ;
typedef int SizeT ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CLzmaProps ;
typedef TYPE_2__ CLzmaDec ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,int const*,unsigned int) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

SRes FUNC_6(CLzmaDec *VAR_2, const Byte *VAR_3, unsigned VAR_4, ISzAllocPtr VAR_5)
{
  CLzmaProps VAR_6;
  SizeT VAR_7;
  FUNC_5(FUNC_4(&VAR_6, VAR_3, VAR_4));
  FUNC_5(FUNC_1(VAR_2, &VAR_6, VAR_5));

  {
    UInt32 VAR_8 = VAR_6.dicSize;
    SizeT VAR_9 = ((UInt32)1 << 12) - 1;
         if (VAR_8 >= ((UInt32)1 << 30)) VAR_9 = ((UInt32)1 << 22) - 1;
    else if (VAR_8 >= ((UInt32)1 << 22)) VAR_9 = ((UInt32)1 << 20) - 1;;
    VAR_7 = ((SizeT)VAR_8 + VAR_9) & ~VAR_9;
    if (VAR_7 < VAR_8)
      VAR_7 = VAR_8;
  }

  if (!VAR_2->dic || VAR_7 != VAR_2->dicBufSize)
  {
    FUNC_2(VAR_2, VAR_5);
    VAR_2->dic = (Byte *)FUNC_0(VAR_5, VAR_7);
    if (!VAR_2->dic)
    {
      FUNC_3(VAR_2, VAR_5);
      return VAR_0;
    }
  }
  VAR_2->dicBufSize = VAR_7;
  VAR_2->prop = VAR_6;
  return VAR_1;
}
