
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_10__ {scalar_t__ dicPos; scalar_t__ dicBufSize; scalar_t__ dic; } ;
struct TYPE_12__ {TYPE_2__ decoder; } ;
struct TYPE_9__ {scalar_t__ outStep_ST; } ;
struct TYPE_11__ {scalar_t__ inProcessed; scalar_t__ outProcessed; size_t inBufSize; scalar_t__ readRes; scalar_t__ outSize; scalar_t__ progress; scalar_t__ finishMode; scalar_t__ outSize_Defined; int outStream; TYPE_1__ props; scalar_t__ readWasFinished; int inStream; int * inBuf; int mtc; TYPE_4__ dec; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef TYPE_3__ CLzma2DecMt ;
typedef TYPE_4__ CLzma2Dec ;
typedef int Byte ;
typedef int BoolInt ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,void*,size_t*) ;
 size_t FUNC_2 (int ,scalar_t__,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__,int const*,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,size_t*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static SRes FUNC_9(CLzma2DecMt *VAR_10

    , BoolInt VAR_11

    )
{
  SizeT VAR_12;
  size_t VAR_13, VAR_14;
  const Byte *VAR_15;
  UInt64 VAR_16, VAR_17;

  CLzma2Dec *VAR_18;


  if (VAR_11)
  {
    FUNC_3(VAR_10);
    VAR_11 = FUNC_6(&VAR_10->mtc);
  }


  FUNC_8(FUNC_5(VAR_10));

  VAR_18 = &VAR_10->dec;

  VAR_16 = VAR_10->inProcessed;
  VAR_17 = VAR_10->outProcessed;

  VAR_13 = 0;
  VAR_14 = 0;
  VAR_15 = ((void*)0);
  VAR_12 = VAR_18->decoder.dicPos;

  for (;;)
  {
    SizeT VAR_19;
    SizeT VAR_20;
    ELzmaFinishMode VAR_21;
    SizeT VAR_22;
    ELzmaStatus VAR_23;
    SRes VAR_24;

    SizeT VAR_25;
    BoolInt VAR_26;
    BoolInt VAR_27;

    if (VAR_13 == VAR_14)
    {

      if (VAR_11)
      {
        VAR_15 = FUNC_7(&VAR_10->mtc, &VAR_14);
        VAR_13 = 0;
        if (VAR_15)
          continue;
        VAR_11 = VAR_0;
        VAR_14 = 0;
      }


      if (!VAR_10->readWasFinished)
      {
        VAR_13 = 0;
        VAR_14 = VAR_10->inBufSize;
        VAR_15 = VAR_10->inBuf;
        VAR_10->readRes = FUNC_1(VAR_10->inStream, (void *)VAR_15, &VAR_14);


        if (VAR_14 == 0 || VAR_10->readRes != VAR_8)
          VAR_10->readWasFinished = VAR_9;
      }
    }

    VAR_19 = VAR_18->decoder.dicPos;
    {
      SizeT VAR_28 = VAR_18->decoder.dicBufSize;
      if (VAR_28 - VAR_12 > VAR_10->props.outStep_ST)
        VAR_28 = VAR_12 + VAR_10->props.outStep_ST;
      VAR_20 = VAR_28 - VAR_19;
    }

    VAR_21 = VAR_1;
    if (VAR_10->outSize_Defined)
    {
      const UInt64 VAR_29 = VAR_10->outSize - VAR_10->outProcessed;
      if (VAR_20 >= VAR_29)
      {
        VAR_20 = (SizeT)VAR_29;
        if (VAR_10->finishMode)
          VAR_21 = VAR_2;
      }
    }

    VAR_22 = VAR_14 - VAR_13;

    VAR_24 = FUNC_4(VAR_18, VAR_19 + VAR_20, VAR_15 + VAR_13, &VAR_22, VAR_21, &VAR_23);

    VAR_13 += VAR_22;
    VAR_10->inProcessed += VAR_22;
    VAR_25 = VAR_18->decoder.dicPos - VAR_19;
    VAR_10->outProcessed += VAR_25;

    VAR_26 = (VAR_10->outSize_Defined && VAR_10->outSize <= VAR_10->outProcessed);

    VAR_27 = (VAR_24 != VAR_8
        || (VAR_22 == 0 && VAR_25 == 0)
        || VAR_23 == VAR_3
        || (!VAR_10->finishMode && VAR_26));

    if (VAR_27 || VAR_25 >= VAR_20)
    {
      SRes VAR_30;
      {
        size_t VAR_31 = VAR_18->decoder.dicPos - VAR_12;
        size_t VAR_32 = FUNC_2(VAR_10->outStream, VAR_18->decoder.dic + VAR_12, VAR_31);
        VAR_30 = (VAR_32 == VAR_31) ? VAR_8 : VAR_7;
      }

      if (VAR_18->decoder.dicPos == VAR_18->decoder.dicBufSize)
        VAR_18->decoder.dicPos = 0;
      VAR_12 = VAR_18->decoder.dicPos;

      FUNC_8(VAR_30);

      if (VAR_27)
      {
        if (VAR_24 != VAR_8)
          return VAR_24;

        if (VAR_23 == VAR_3)
        {
          if (VAR_10->finishMode)
          {
            if (VAR_10->outSize_Defined && VAR_10->outSize != VAR_10->outProcessed)
              return VAR_5;
          }
          return VAR_8;
        }

        if (!VAR_10->finishMode && VAR_26)
          return VAR_8;

        if (VAR_23 == VAR_4)
          return VAR_6;

        return VAR_5;
      }
    }

    if (VAR_10->progress)
    {
      UInt64 VAR_33 = VAR_10->inProcessed - VAR_16;
      UInt64 VAR_34 = VAR_10->outProcessed - VAR_17;
      if (VAR_33 >= (1 << 22) || VAR_34 >= (1 << 22))
      {
        FUNC_8(FUNC_0(VAR_10->progress, VAR_10->inProcessed, VAR_10->outProcessed));
        VAR_16 = VAR_10->inProcessed;
        VAR_17 = VAR_10->outProcessed;
      }
    }
  }
}
