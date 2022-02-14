
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_3__ {int prop; int finishMode; scalar_t__ inLim; scalar_t__ inPos; scalar_t__ inProcessed; scalar_t__ outProcessed; scalar_t__ outSize; int outSize_Defined; int * inStream; int props; } ;
typedef int SRes ;
typedef int ISeqInStream ;
typedef int CLzma2DecMtProps ;
typedef scalar_t__ CLzma2DecMtHandle ;
typedef TYPE_1__ CLzma2DecMt ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

SRes FUNC_1(CLzma2DecMtHandle VAR_3,
    Byte VAR_4,
    const CLzma2DecMtProps *VAR_5,
    const UInt64 *VAR_6, int VAR_7,
    ISeqInStream *VAR_8)
{
  CLzma2DecMt *VAR_9 = (CLzma2DecMt *)VAR_3;

  if (VAR_4 > 40)
    return VAR_1;

  VAR_9->prop = VAR_4;
  VAR_9->props = *VAR_5;

  VAR_9->inStream = VAR_8;

  VAR_9->outSize = 0;
  VAR_9->outSize_Defined = VAR_0;
  if (VAR_6)
  {
    VAR_9->outSize_Defined = VAR_2;
    VAR_9->outSize = *VAR_6;
  }
  VAR_9->finishMode = VAR_7;

  VAR_9->outProcessed = 0;
  VAR_9->inProcessed = 0;

  VAR_9->inPos = 0;
  VAR_9->inLim = 0;

  return FUNC_0(VAR_9);
}
