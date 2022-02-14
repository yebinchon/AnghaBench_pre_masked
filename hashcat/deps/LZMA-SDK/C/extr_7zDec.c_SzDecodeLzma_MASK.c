
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_7__ {scalar_t__ dicPos; scalar_t__ dicBufSize; int * dic; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef scalar_t__ ELzmaStatus ;
typedef TYPE_1__ CLzmaDec ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int *,void const**,size_t*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int const*,unsigned int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int const*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static SRes FUNC_8(const Byte *VAR_5, unsigned VAR_6, UInt64 VAR_7, ILookInStream *VAR_8,
    Byte *VAR_9, SizeT VAR_10, ISzAllocPtr VAR_11)
{
  CLzmaDec VAR_12;
  SRes VAR_13 = VAR_4;

  FUNC_3(&VAR_12);
  FUNC_7(FUNC_2(&VAR_12, VAR_5, VAR_6, VAR_11));
  VAR_12.dic = VAR_9;
  VAR_12.dicBufSize = VAR_10;
  FUNC_6(&VAR_12);

  for (;;)
  {
    const void *VAR_14 = ((void*)0);
    size_t VAR_15 = (1 << 18);
    if (VAR_15 > VAR_7)
      VAR_15 = (size_t)VAR_7;
    VAR_13 = FUNC_0(VAR_8, &VAR_14, &VAR_15);
    if (VAR_13 != VAR_4)
      break;

    {
      SizeT VAR_16 = (SizeT)VAR_15, VAR_17 = VAR_12.dicPos;
      ELzmaStatus VAR_18;
      VAR_13 = FUNC_4(&VAR_12, VAR_10, (const Byte *)VAR_14, &VAR_16, VAR_0, &VAR_18);
      VAR_15 -= VAR_16;
      VAR_7 -= VAR_16;
      if (VAR_13 != VAR_4)
        break;

      if (VAR_18 == VAR_1)
      {
        if (VAR_10 != VAR_12.dicPos || VAR_7 != 0)
          VAR_13 = VAR_3;
        break;
      }

      if (VAR_10 == VAR_12.dicPos && VAR_7 == 0 && VAR_18 == VAR_2)
        break;

      if (VAR_16 == 0 && VAR_17 == VAR_12.dicPos)
      {
        VAR_13 = VAR_3;
        break;
      }

      VAR_13 = FUNC_1(VAR_8, VAR_16);
      if (VAR_13 != VAR_4)
        break;
    }
  }

  FUNC_5(&VAR_12, VAR_11);
  return VAR_13;
}
