
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_3__ {scalar_t__ inBufSize_ST; } ;
struct TYPE_4__ {size_t outSize; size_t outProcessed; scalar_t__ inPos; scalar_t__ inLim; size_t inBuf; int inProcessed; int dec; int inStream; TYPE_1__ props; scalar_t__ finishMode; scalar_t__ outSize_Defined; } ;
typedef size_t SizeT ;
typedef scalar_t__ SRes ;
typedef int ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef scalar_t__ CLzma2DecMtHandle ;
typedef TYPE_2__ CLzma2DecMt ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,size_t*,size_t,size_t*,int ,int *) ;
 scalar_t__ VAR_2 ;

SRes FUNC_2(CLzma2DecMtHandle VAR_3,
    Byte *VAR_4, size_t *VAR_5,
    UInt64 *VAR_6)
{
  CLzma2DecMt *VAR_7 = (CLzma2DecMt *)VAR_3;
  ELzmaFinishMode VAR_8;
  SRes VAR_9;
  size_t VAR_10 = *VAR_5;

  *VAR_5 = 0;
  *VAR_6 = 0;

  VAR_8 = VAR_0;
  if (VAR_7->outSize_Defined)
  {
    const UInt64 VAR_11 = VAR_7->outSize - VAR_7->outProcessed;
    if (VAR_10 >= VAR_11)
    {
      VAR_10 = (size_t)VAR_11;
      if (VAR_7->finishMode)
        VAR_8 = VAR_1;
    }
  }

  VAR_9 = VAR_2;

  for (;;)
  {
    SizeT VAR_12;
    SizeT VAR_13;
    ELzmaStatus VAR_14;
    SRes VAR_15;

    if (VAR_7->inPos == VAR_7->inLim && VAR_9 == VAR_2)
    {
      VAR_7->inPos = 0;
      VAR_7->inLim = VAR_7->props.inBufSize_ST;
      VAR_9 = FUNC_0(VAR_7->inStream, VAR_7->inBuf, &VAR_7->inLim);
    }

    VAR_12 = VAR_7->inLim - VAR_7->inPos;
    VAR_13 = VAR_10;

    VAR_15 = FUNC_1(&VAR_7->dec, VAR_4, &VAR_13,
        VAR_7->inBuf + VAR_7->inPos, &VAR_12, VAR_8, &VAR_14);

    VAR_7->inPos += VAR_12;
    VAR_7->inProcessed += VAR_12;
    *VAR_6 += VAR_12;
    VAR_7->outProcessed += VAR_13;
    *VAR_5 += VAR_13;
    VAR_10 -= VAR_13;
    VAR_4 += VAR_13;

    if (VAR_15 != 0)
      return VAR_15;
    if (VAR_12 == 0 && VAR_13 == 0)
      return VAR_9;
  }
}
