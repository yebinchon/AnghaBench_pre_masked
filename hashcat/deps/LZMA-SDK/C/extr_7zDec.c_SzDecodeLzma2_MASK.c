
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_8__ {scalar_t__ dicPos; scalar_t__ dicBufSize; int * dic; } ;
struct TYPE_9__ {TYPE_1__ decoder; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef scalar_t__ ELzmaStatus ;
typedef TYPE_2__ CLzma2Dec ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int *,void const**,size_t*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int const,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__,int const*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static SRes FUNC_8(const Byte *VAR_4, unsigned VAR_5, UInt64 VAR_6, ILookInStream *VAR_7,
    Byte *VAR_8, SizeT VAR_9, ISzAllocPtr VAR_10)
{
  CLzma2Dec VAR_11;
  SRes VAR_12 = VAR_3;

  FUNC_3(&VAR_11);
  if (VAR_5 != 1)
    return VAR_2;
  FUNC_7(FUNC_2(&VAR_11, VAR_4[0], VAR_10));
  VAR_11.decoder.dic = VAR_8;
  VAR_11.decoder.dicBufSize = VAR_9;
  FUNC_6(&VAR_11);

  for (;;)
  {
    const void *VAR_13 = ((void*)0);
    size_t VAR_14 = (1 << 18);
    if (VAR_14 > VAR_6)
      VAR_14 = (size_t)VAR_6;
    VAR_12 = FUNC_0(VAR_7, &VAR_13, &VAR_14);
    if (VAR_12 != VAR_3)
      break;

    {
      SizeT VAR_15 = (SizeT)VAR_14, VAR_16 = VAR_11.decoder.dicPos;
      ELzmaStatus VAR_17;
      VAR_12 = FUNC_4(&VAR_11, VAR_9, (const Byte *)VAR_13, &VAR_15, VAR_0, &VAR_17);
      VAR_14 -= VAR_15;
      VAR_6 -= VAR_15;
      if (VAR_12 != VAR_3)
        break;

      if (VAR_17 == VAR_1)
      {
        if (VAR_9 != VAR_11.decoder.dicPos || VAR_6 != 0)
          VAR_12 = VAR_2;
        break;
      }

      if (VAR_15 == 0 && VAR_16 == VAR_11.decoder.dicPos)
      {
        VAR_12 = VAR_2;
        break;
      }

      VAR_12 = FUNC_1(VAR_7, VAR_15);
      if (VAR_12 != VAR_3)
        break;
    }
  }

  FUNC_5(&VAR_11, VAR_10);
  return VAR_12;
}
