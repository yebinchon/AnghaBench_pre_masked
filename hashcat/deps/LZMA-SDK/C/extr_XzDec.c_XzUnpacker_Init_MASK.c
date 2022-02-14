
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ outDataWritten; void* decodeToStreamSignature; void* parseMode; scalar_t__ decodeOnlyOneBlock; scalar_t__ padSize; scalar_t__ numTotalBlocks; scalar_t__ numFinishedStreams; scalar_t__ numStartedStreams; scalar_t__ pos; int state; } ;
typedef TYPE_1__ CXzUnpacker ;


 void* VAR_0 ;
 int VAR_1 ;

void FUNC_0(CXzUnpacker *VAR_2)
{
  VAR_2->state = VAR_1;
  VAR_2->pos = 0;
  VAR_2->numStartedStreams = 0;
  VAR_2->numFinishedStreams = 0;
  VAR_2->numTotalBlocks = 0;
  VAR_2->padSize = 0;
  VAR_2->decodeOnlyOneBlock = 0;

  VAR_2->parseMode = VAR_0;
  VAR_2->decodeToStreamSignature = VAR_0;



  VAR_2->outDataWritten = 0;
}
