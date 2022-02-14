
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ res; scalar_t__ status; scalar_t__ outWritten; int numCoders; int* pos; scalar_t__* size; int* finished; scalar_t__* results; int * buf; TYPE_1__* coders; int alloc; scalar_t__ outBuf; void* wasFinished; } ;
struct TYPE_4__ {scalar_t__ (* Code2 ) (int ,int *,scalar_t__*,int const*,scalar_t__*,int,int ,scalar_t__*) ;size_t (* Filter ) (int ,scalar_t__,size_t) ;int p; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ IStateCoder ;
typedef scalar_t__ ECoderStatus ;
typedef int ECoderFinishMode ;
typedef TYPE_2__ CMixCoder ;
typedef int Byte ;
typedef void* BoolInt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*,int const*,scalar_t__*,int,int ,scalar_t__*) ;
 size_t FUNC_4 (int ,scalar_t__,size_t) ;
 scalar_t__ FUNC_5 (int ,int *,scalar_t__*,int const*,scalar_t__*,int,int ,scalar_t__*) ;

__attribute__((used)) static SRes FUNC_6(CMixCoder *VAR_9,
    Byte *VAR_10, SizeT *VAR_11, int VAR_12,
    const Byte *VAR_13, SizeT *VAR_14, int VAR_15,
    ECoderFinishMode VAR_16)
{
  SizeT VAR_17 = *VAR_11;
  SizeT VAR_18 = *VAR_14;

  *VAR_11 = 0;
  *VAR_14 = 0;

  if (VAR_9->wasFinished)
    return VAR_9->res;

  VAR_9->status = VAR_3;


  if (VAR_9->outBuf)
  {
    SRes VAR_19;
    SizeT VAR_20, VAR_21;
    int VAR_22;

    FUNC_1("------- MixCoder Single ----------");

    VAR_21 = VAR_18;
    VAR_20 = VAR_17;

    {
      IStateCoder *VAR_23 = &VAR_9->coders[0];
      VAR_19 = VAR_23->Code2(VAR_23->p, ((void*)0), &VAR_20, VAR_13, &VAR_21, VAR_15, VAR_16,

          &VAR_9->status);
      VAR_22 = (VAR_9->status == VAR_2);
    }

    VAR_9->res = VAR_19;
    *VAR_14 = VAR_21;
    VAR_13 += VAR_21;
    VAR_9->outWritten += VAR_20;

    if (VAR_19 != VAR_7 || VAR_15 || VAR_22)
      VAR_9->wasFinished = VAR_8;

    if (VAR_9->numCoders == 1)
      *VAR_11 = VAR_20;
    else if (VAR_9->wasFinished)
    {
      unsigned VAR_24;
      size_t VAR_25 = VAR_9->outWritten;

      for (VAR_24 = 1; VAR_24 < VAR_9->numCoders; VAR_24++)
      {
        IStateCoder *VAR_26 = &VAR_9->coders[VAR_24];
        VAR_25 = VAR_26->Filter(VAR_26->p, VAR_9->outBuf, VAR_25);
        if (VAR_22 || (VAR_12 && VAR_9->outWritten == VAR_17))
          VAR_25 = VAR_9->outWritten;
        FUNC_2("filter", VAR_24);
      }
      *VAR_11 = VAR_25;
    }
    return VAR_19;
  }

  FUNC_1("standard mix");

  if (VAR_9->numCoders != 1)
  {
    if (!VAR_9->buf)
    {
      VAR_9->buf = (Byte *)FUNC_0(VAR_9->alloc, VAR_0 * (VAR_5 - 1));
      if (!VAR_9->buf)
        return VAR_6;
    }

    VAR_16 = VAR_1;
  }

  for (;;)
  {
    BoolInt VAR_27 = VAR_4;
    BoolInt VAR_28 = VAR_8;
    SRes VAR_29 = VAR_7;
    unsigned VAR_30;

    VAR_9->status = VAR_3;





    for (VAR_30 = 0; VAR_30 < VAR_9->numCoders; VAR_30++)
    {
      SRes VAR_31;
      IStateCoder *VAR_32 = &VAR_9->coders[VAR_30];
      Byte *VAR_33;
      SizeT VAR_34, VAR_35;
      const Byte *VAR_36;
      int VAR_37;
      int VAR_38;
      ECoderStatus VAR_39;

      if (VAR_30 == 0)
      {
        VAR_36 = VAR_13;
        VAR_35 = VAR_18 - *VAR_14;
        VAR_37 = VAR_15;
      }
      else
      {
        size_t VAR_40 = VAR_30 - 1;
        VAR_36 = VAR_9->buf + (VAR_0 * VAR_40) + VAR_9->pos[VAR_40];
        VAR_35 = VAR_9->size[VAR_40] - VAR_9->pos[VAR_40];
        VAR_37 = VAR_9->finished[VAR_40];
      }

      if (VAR_30 == VAR_9->numCoders - 1)
      {
        VAR_33 = VAR_10;
        VAR_34 = VAR_17 - *VAR_11;
      }
      else
      {
        if (VAR_9->pos[VAR_30] != VAR_9->size[VAR_30])
          continue;
        VAR_33 = VAR_9->buf + (VAR_0 * VAR_30);
        VAR_34 = VAR_0;
      }



      if (VAR_9->results[VAR_30] != VAR_7)
      {
        if (VAR_29 == VAR_7)
          VAR_29 = VAR_9->results[VAR_30];
        continue;
      }

      VAR_31 = VAR_32->Code2(VAR_32->p,
          VAR_33, &VAR_34,
          VAR_36, &VAR_35, VAR_37,
          VAR_16,

          &VAR_39);

      if (VAR_31 != VAR_7)
      {
        VAR_9->results[VAR_30] = VAR_31;
        if (VAR_29 == VAR_7)
          VAR_29 = VAR_31;
      }

      VAR_38 = (VAR_39 == VAR_2);

      if (!VAR_38)
      {
        VAR_28 = VAR_4;
        if (VAR_9->numCoders == 1 && VAR_31 == VAR_7)
          VAR_9->status = VAR_39;
      }

      if (VAR_30 == 0)
      {
        *VAR_14 += VAR_35;
        VAR_13 += VAR_35;
      }
      else
        VAR_9->pos[(size_t)VAR_30 - 1] += VAR_35;

      if (VAR_30 == VAR_9->numCoders - 1)
      {
        *VAR_11 += VAR_34;
        VAR_10 += VAR_34;
      }
      else
      {
        VAR_9->size[VAR_30] = VAR_34;
        VAR_9->pos[VAR_30] = 0;
        VAR_9->finished[VAR_30] = VAR_38;
      }

      if (VAR_34 != 0 || VAR_35 != 0)
        VAR_27 = VAR_8;
    }

    if (!VAR_27)
    {
      if (VAR_28)
        VAR_9->status = VAR_2;
      return VAR_29;
    }
  }
}
