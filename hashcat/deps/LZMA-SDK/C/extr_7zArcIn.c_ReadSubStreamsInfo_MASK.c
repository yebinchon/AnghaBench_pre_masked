
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_22__ {scalar_t__ Defs; } ;
struct TYPE_18__ {scalar_t__ Data; scalar_t__ Size; } ;
struct TYPE_17__ {scalar_t__ Data; scalar_t__ Size; } ;
struct TYPE_16__ {scalar_t__ Data; scalar_t__ Size; } ;
struct TYPE_21__ {TYPE_3__ sdCRCs; TYPE_2__ sdSizes; scalar_t__ NumSubDigests; scalar_t__ NumTotalSubStreams; TYPE_1__ sdNumSubStreams; } ;
struct TYPE_20__ {scalar_t__ NumFolders; TYPE_8__ FolderCRCs; } ;
struct TYPE_19__ {scalar_t__ Data; } ;
typedef int SRes ;
typedef TYPE_4__ CSzData ;
typedef TYPE_5__ CSzAr ;
typedef TYPE_6__ CSubStreamInfo ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (TYPE_8__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static SRes FUNC_8(CSzAr *VAR_6, CSzData *VAR_7, CSubStreamInfo *VAR_8)
{
  UInt64 VAR_9 = 0;
  UInt32 VAR_10 = 0;
  UInt32 VAR_11 = VAR_6->NumFolders;
  UInt32 VAR_12 = VAR_11;
  UInt32 VAR_13 = 0;

  for (;;)
  {
    FUNC_1(FUNC_2(VAR_7, &VAR_9));
    if (VAR_9 == VAR_4)
    {
      UInt32 VAR_14;
      VAR_8->sdNumSubStreams.Data = VAR_7->Data;
      VAR_12 = 0;
      VAR_10 = 0;
      for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
      {
        UInt32 VAR_15;
        FUNC_1(FUNC_7(VAR_7, &VAR_15));
        if (VAR_12 > VAR_12 + VAR_15)
          return VAR_0;
        VAR_12 += VAR_15;
        if (VAR_15 != 0)
          VAR_13 += (VAR_15 - 1);
        if (VAR_15 != 1 || !FUNC_6(&VAR_6->FolderCRCs, VAR_14))
          VAR_10 += VAR_15;
      }
      VAR_8->sdNumSubStreams.Size = VAR_7->Data - VAR_8->sdNumSubStreams.Data;
      continue;
    }
    if (VAR_9 == VAR_2 || VAR_9 == VAR_5 || VAR_9 == VAR_3)
      break;
    FUNC_1(FUNC_4(VAR_7));
  }

  if (!VAR_8->sdNumSubStreams.Data)
  {
    VAR_10 = VAR_11;
    if (VAR_6->FolderCRCs.Defs)
      VAR_10 = VAR_11 - FUNC_0(VAR_6->FolderCRCs.Defs, VAR_11);
  }

  VAR_8->NumTotalSubStreams = VAR_12;
  VAR_8->NumSubDigests = VAR_10;

  if (VAR_9 == VAR_5)
  {
    VAR_8->sdSizes.Data = VAR_7->Data;
    FUNC_1(FUNC_5(VAR_7, VAR_13));
    VAR_8->sdSizes.Size = VAR_7->Data - VAR_8->sdSizes.Data;
    FUNC_1(FUNC_2(VAR_7, &VAR_9));
  }

  for (;;)
  {
    if (VAR_9 == VAR_3)
      return VAR_1;
    if (VAR_9 == VAR_2)
    {
      VAR_8->sdCRCs.Data = VAR_7->Data;
      FUNC_1(FUNC_3(VAR_7, VAR_10));
      VAR_8->sdCRCs.Size = VAR_7->Data - VAR_8->sdCRCs.Data;
    }
    else
    {
      FUNC_1(FUNC_4(VAR_7));
    }
    FUNC_1(FUNC_2(VAR_7, &VAR_9));
  }
}
