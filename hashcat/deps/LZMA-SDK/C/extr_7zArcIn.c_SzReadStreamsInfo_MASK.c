
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef int UInt32 ;
struct TYPE_10__ {int NumTotalSubStreams; int sdNumSubStreams; int sdCRCs; int sdSizes; } ;
struct TYPE_9__ {int NumFolders; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int CSzData ;
typedef TYPE_1__ CSzAr ;
typedef TYPE_2__ CSubStreamInfo ;
typedef int CBuf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int const*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static SRes FUNC_7(CSzAr *VAR_6,
    CSzData *VAR_7,
    UInt32 VAR_8, const CBuf *VAR_9, UInt32 VAR_10,
    UInt64 *VAR_11,
    CSubStreamInfo *VAR_12,
    ISzAllocPtr VAR_13)
{
  UInt64 VAR_14;

  FUNC_6(&VAR_12->sdSizes);
  FUNC_6(&VAR_12->sdCRCs);
  FUNC_6(&VAR_12->sdNumSubStreams);

  *VAR_11 = 0;
  FUNC_0(FUNC_1(VAR_7, &VAR_14));
  if (VAR_14 == VAR_3)
  {
    FUNC_0(FUNC_2(VAR_7, VAR_11));
    FUNC_0(FUNC_3(VAR_6, VAR_7, VAR_13));
    FUNC_0(FUNC_1(VAR_7, &VAR_14));
  }
  if (VAR_14 == VAR_5)
  {
    FUNC_0(FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_13));
    FUNC_0(FUNC_1(VAR_7, &VAR_14));
  }
  if (VAR_14 == VAR_4)
  {
    FUNC_0(FUNC_4(VAR_6, VAR_7, VAR_12));
    FUNC_0(FUNC_1(VAR_7, &VAR_14));
  }
  else
  {
    VAR_12->NumTotalSubStreams = VAR_6->NumFolders;

  }

  return (VAR_14 == VAR_2 ? VAR_1 : VAR_0);
}
