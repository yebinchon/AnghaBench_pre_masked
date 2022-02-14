
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_8__ {scalar_t__ InSize; scalar_t__ DecodeRes; void* DataAfterEnd; void* NumBlocks_Defined; void* NumStreams_Defined; void* UnpackSize_Defined; int NumBlocks; int NumStreams; scalar_t__ DecodingTruncated; } ;
struct TYPE_7__ {int numTotalBlocks; int numStartedStreams; } ;
typedef scalar_t__ SRes ;
typedef scalar_t__ ECoderStatus ;
typedef TYPE_1__ CXzUnpacker ;
typedef TYPE_2__ CXzStatInfo ;
typedef scalar_t__ Byte ;
typedef scalar_t__ BoolInt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static SRes FUNC_2(const CXzUnpacker *VAR_6,
    int VAR_7,
    UInt64 VAR_8, UInt64 VAR_9,
    SRes VAR_10, ECoderStatus VAR_11,
    BoolInt VAR_12,
    CXzStatInfo *VAR_13)
{
  UInt64 VAR_14;

  VAR_13->DecodingTruncated = (Byte)(VAR_12 ? 1 : 0);
  VAR_13->InSize = VAR_9;
  VAR_13->NumStreams = VAR_6->numStartedStreams;
  VAR_13->NumBlocks = VAR_6->numTotalBlocks;

  VAR_13->UnpackSize_Defined = VAR_5;
  VAR_13->NumStreams_Defined = VAR_5;
  VAR_13->NumBlocks_Defined = VAR_5;

  VAR_14 = FUNC_0(VAR_6);

  if (VAR_10 == VAR_4)
  {
    if (VAR_11 == VAR_0)
    {

      VAR_14 = 0;
      if (!FUNC_1(VAR_6))
        VAR_10 = VAR_2;
    }
    else if (!VAR_12 || VAR_7)
      VAR_10 = VAR_1;
  }
  else if (VAR_10 == VAR_3)
  {






    if (VAR_9 != VAR_14)
      if (VAR_14 != 0 || VAR_8 != VAR_9)
      {
        VAR_13->DataAfterEnd = VAR_5;

        VAR_10 = VAR_4;
      }
  }

  VAR_13->DecodeRes = VAR_10;

  VAR_13->InSize -= VAR_14;
  return VAR_10;
}
