
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bufPos; scalar_t__ bufConv; int bufTotal; int const* buf; } ;
typedef scalar_t__ SizeT ;
typedef int SRes ;
typedef int ECoderStatus ;
typedef int ECoderFinishMode ;
typedef TYPE_1__ CBraState ;
typedef int const Byte ;


 size_t VAR_0 ;
 size_t FUNC_0 (void*,int const*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (int const*,int const*,int) ;

__attribute__((used)) static SRes FUNC_4(void *VAR_4,
    Byte *VAR_5, SizeT *VAR_6,
    const Byte *VAR_7, SizeT *VAR_8, int VAR_9,
    ECoderFinishMode VAR_10,

    ECoderStatus *VAR_11)
{
  CBraState *VAR_12 = ((CBraState *)VAR_4);
  SizeT VAR_13 = *VAR_6;
  SizeT VAR_14 = *VAR_8;
  FUNC_1(VAR_10);

  *VAR_6 = 0;
  *VAR_8 = 0;

  *VAR_11 = VAR_2;

  while (VAR_13 > 0)
  {
    if (VAR_12->bufPos != VAR_12->bufConv)
    {
      size_t VAR_15 = VAR_12->bufConv - VAR_12->bufPos;
      if (VAR_15 > VAR_13)
        VAR_15 = VAR_13;
      FUNC_2(VAR_5, VAR_12->buf + VAR_12->bufPos, VAR_15);
      VAR_12->bufPos += VAR_15;
      *VAR_6 += VAR_15;
      VAR_5 += VAR_15;
      VAR_13 -= VAR_15;
      continue;
    }

    VAR_12->bufTotal -= VAR_12->bufPos;
    FUNC_3(VAR_12->buf, VAR_12->buf + VAR_12->bufPos, VAR_12->bufTotal);
    VAR_12->bufPos = 0;
    VAR_12->bufConv = 0;
    {
      size_t VAR_16 = VAR_0 - VAR_12->bufTotal;
      if (VAR_16 > VAR_14)
        VAR_16 = VAR_14;
      FUNC_2(VAR_12->buf + VAR_12->bufTotal, VAR_7, VAR_16);
      *VAR_8 += VAR_16;
      VAR_7 += VAR_16;
      VAR_14 -= VAR_16;
      VAR_12->bufTotal += VAR_16;
    }
    if (VAR_12->bufTotal == 0)
      break;

    VAR_12->bufConv = FUNC_0(VAR_4, VAR_12->buf, VAR_12->bufTotal);

    if (VAR_12->bufConv == 0)
    {
      if (!VAR_9)
        break;
      VAR_12->bufConv = VAR_12->bufTotal;
    }
  }

  if (VAR_12->bufTotal == VAR_12->bufPos && VAR_14 == 0 && VAR_9)
  {
    *VAR_11 = VAR_1;

  }

  return VAR_3;
}
