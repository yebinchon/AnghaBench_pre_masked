
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef size_t UInt64 ;
typedef int UInt32 ;
struct TYPE_16__ {size_t dicPos; } ;
struct TYPE_20__ {scalar_t__ unpackSize; TYPE_3__ decoder; } ;
struct TYPE_15__ {size_t outBlockMax; } ;
struct TYPE_14__ {int baseAlloc; } ;
struct TYPE_19__ {size_t outSize; size_t outProcessed_Parse; TYPE_2__ props; int finishMode; scalar_t__ outSize_Defined; TYPE_1__ alignOffsetAlloc; TYPE_5__* coders; } ;
struct TYPE_13__ {unsigned int numAlignBits; int offset; int baseAlloc; } ;
struct TYPE_18__ {int inPreSize; size_t outPreSize; int parseStatus; void* state; TYPE_7__ dec; int codeRes; scalar_t__ outCodeSize; scalar_t__ inCodeSize; TYPE_12__ alloc; void* dec_created; } ;
struct TYPE_17__ {int srcSize; int const src; size_t outPos; void* state; scalar_t__ startCall; } ;
typedef int SizeT ;
typedef int ELzma2ParseStatus ;
typedef TYPE_4__ CMtDecCallbackInfo ;
typedef TYPE_5__ CLzma2DecMtThread ;
typedef TYPE_6__ CLzma2DecMt ;
typedef int BoolInt ;


 int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,size_t,int const,int*,int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_5 (char*,unsigned int,int) ;
 int VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static void FUNC_6(void *VAR_13, unsigned VAR_14, CMtDecCallbackInfo *VAR_15)
{
  CLzma2DecMt *VAR_16 = (CLzma2DecMt *)VAR_13;
  CLzma2DecMtThread *VAR_17 = &VAR_16->coders[VAR_14];

  FUNC_5("Parse", VAR_14, VAR_15->srcSize);

  VAR_15->state = VAR_7;

  if (VAR_15->startCall)
  {
    if (!VAR_17->dec_created)
    {
      FUNC_1(&VAR_17->dec);
      VAR_17->dec_created = VAR_12;
      FUNC_0(&VAR_17->alloc);
      {


        const unsigned VAR_18 = 12;
        const unsigned VAR_19 = 7;
        VAR_17->alloc.numAlignBits = VAR_18;
        VAR_17->alloc.offset = ((UInt32)VAR_14 * ((1 << 11) + (1 << 8) + (1 << 6))) & ((1 << VAR_18) - (1 << VAR_19));
        VAR_17->alloc.baseAlloc = VAR_16->alignOffsetAlloc.baseAlloc;
      }
    }
    FUNC_3(&VAR_17->dec);

    VAR_17->inPreSize = 0;
    VAR_17->outPreSize = 0;


    VAR_17->parseStatus = (ELzma2ParseStatus)VAR_6;
    VAR_17->state = VAR_7;

    VAR_17->inCodeSize = 0;
    VAR_17->outCodeSize = 0;
    VAR_17->codeRes = VAR_11;


  }

  {
    ELzma2ParseStatus VAR_20;
    BoolInt VAR_21;
    UInt32 VAR_22 = 0;

    int VAR_23 = VAR_12;
    size_t VAR_24 = VAR_16->props.outBlockMax;
    if (VAR_16->outSize_Defined)
    {
      UInt64 VAR_25 = VAR_16->outSize - VAR_16->outProcessed_Parse;
      if (VAR_24 >= VAR_25)
      {
        VAR_24 = (size_t)VAR_25;
        if (!VAR_16->finishMode)
          VAR_23 = VAR_0;
      }
    }




    {
      const SizeT VAR_26 = VAR_15->srcSize;
      SizeT VAR_27 = 0;
      SizeT VAR_28 = 0;

      VAR_15->srcSize = 0;
      VAR_21 = VAR_0;

      for (;;)
      {
        SizeT VAR_29 = VAR_26 - VAR_15->srcSize;

        VAR_20 = FUNC_4(&VAR_17->dec,
            VAR_24 - VAR_17->dec.decoder.dicPos,
            VAR_15->src + VAR_15->srcSize, &VAR_29,
            VAR_23);

        VAR_15->srcSize += VAR_29;

        if (VAR_20 == VAR_2)
        {
          if (VAR_17->dec.unpackSize > VAR_16->props.outBlockMax - VAR_17->dec.decoder.dicPos)
          {
            VAR_21 = VAR_12;
            break;
          }
          continue;
        }

        if (VAR_20 == VAR_1)
        {
          if (VAR_17->dec.decoder.dicPos == 0)
            continue;

          if (VAR_17->dec.decoder.dicPos >= (1 << 14))
            break;
          VAR_28 = VAR_17->dec.decoder.dicPos;
          VAR_27 = VAR_15->srcSize;
          continue;
        }

        if ((int)VAR_20 == VAR_5 && VAR_23


            )
        {
          VAR_21 = VAR_12;
          break;
        }

        VAR_22 = FUNC_2(&VAR_17->dec);
        break;
      }

      if (VAR_28 != 0
          && (int)VAR_20 != VAR_1
          && (int)VAR_20 != VAR_3
          && (int)VAR_20 != VAR_6)
      {

        VAR_20 = VAR_1;
        VAR_22 = 0;
        VAR_17->dec.decoder.dicPos = VAR_28;
        VAR_15->srcSize = VAR_27;
        VAR_21 = VAR_0;
      }
    }

    VAR_17->inPreSize += VAR_15->srcSize;
    VAR_17->parseStatus = VAR_20;

    if (VAR_21)
      VAR_15->state = VAR_10;
    else
    {
      size_t VAR_30 = VAR_17->dec.decoder.dicPos;

      if ((int)VAR_20 != VAR_4)
      {
        if (VAR_20 == VAR_1)
        {
          VAR_15->state = VAR_9;
          VAR_15->srcSize--;
          VAR_17->inPreSize--;
        }
        else
        {
          VAR_15->state = VAR_8;
          if ((int)VAR_20 != VAR_3)
          {


            if (VAR_22 != 0)
            {

              SizeT VAR_31 = VAR_24 - VAR_30;
              if (VAR_31 > VAR_22)
                VAR_31 = VAR_22;
              VAR_30 += VAR_31;
            }
          }
        }

        VAR_16->outProcessed_Parse += VAR_30;
      }

      VAR_15->outPos = VAR_30;
      VAR_17->outPreSize = (size_t)VAR_30;
    }

    VAR_17->state = VAR_15->state;
    return;
  }
}
