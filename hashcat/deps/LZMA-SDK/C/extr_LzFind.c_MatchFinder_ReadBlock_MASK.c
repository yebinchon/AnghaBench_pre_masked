
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {int streamEndWasReached; scalar_t__ result; scalar_t__ streamPos; scalar_t__ pos; scalar_t__ directInputRem; int blockSize; scalar_t__ keepSizeAfter; int stream; int * bufferBase; int * buffer; scalar_t__ directInput; } ;
typedef TYPE_1__ CMatchFinder ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,int *,size_t*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(CMatchFinder *VAR_1)
{
  if (VAR_1->streamEndWasReached || VAR_1->result != VAR_0)
    return;



  if (VAR_1->directInput)
  {
    UInt32 VAR_2 = 0xFFFFFFFF - (VAR_1->streamPos - VAR_1->pos);
    if (VAR_2 > VAR_1->directInputRem)
      VAR_2 = (UInt32)VAR_1->directInputRem;
    VAR_1->directInputRem -= VAR_2;
    VAR_1->streamPos += VAR_2;
    if (VAR_1->directInputRem == 0)
      VAR_1->streamEndWasReached = 1;
    return;
  }

  for (;;)
  {
    Byte *VAR_3 = VAR_1->buffer + (VAR_1->streamPos - VAR_1->pos);
    size_t VAR_4 = (VAR_1->bufferBase + VAR_1->blockSize - VAR_3);
    if (VAR_4 == 0)
      return;

    VAR_1->result = FUNC_0(VAR_1->stream, VAR_3, &VAR_4);
    if (VAR_1->result != VAR_0)
      return;
    if (VAR_4 == 0)
    {
      VAR_1->streamEndWasReached = 1;
      return;
    }
    VAR_1->streamPos += (UInt32)VAR_4;
    if (VAR_1->streamPos - VAR_1->pos > VAR_1->keepSizeAfter)
      return;
  }
}
