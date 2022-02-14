
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* CombinedRes_Type; void* CombinedRes; void* ProgressRes; void* ReadRes; void* DecodeRes; void* DecodingTruncated; void* DataAfterEnd; void* NumBlocks_Defined; void* NumStreams_Defined; void* UnpackSize_Defined; scalar_t__ NumBlocks; scalar_t__ NumStreams; scalar_t__ OutSize; scalar_t__ InSize; } ;
typedef TYPE_1__ CXzStatInfo ;


 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_0(CXzStatInfo *VAR_2)
{
  VAR_2->InSize = 0;
  VAR_2->OutSize = 0;

  VAR_2->NumStreams = 0;
  VAR_2->NumBlocks = 0;

  VAR_2->UnpackSize_Defined = VAR_0;

  VAR_2->NumStreams_Defined = VAR_0;
  VAR_2->NumBlocks_Defined = VAR_0;
  VAR_2->DataAfterEnd = VAR_0;
  VAR_2->DecodingTruncated = VAR_0;

  VAR_2->DecodeRes = VAR_1;
  VAR_2->ReadRes = VAR_1;
  VAR_2->ProgressRes = VAR_1;

  VAR_2->CombinedRes = VAR_1;
  VAR_2->CombinedRes_Type = VAR_1;
}
