
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_11__ {int size; int data; } ;
struct TYPE_10__ {scalar_t__ NumFolders; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef int CSzData ;
typedef TYPE_1__ CSzAr ;
typedef int CSubStreamInfo ;
typedef TYPE_2__ CBuf ;


 int FUNC_0 (TYPE_2__*,size_t,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int *,size_t,int ,int ,int ) ;
 size_t FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int *,scalar_t__,int *,int ,size_t*,int *,int ) ;

__attribute__((used)) static SRes FUNC_7(
    ILookInStream *VAR_3,
    CSzData *VAR_4,
    CBuf *VAR_5,
    UInt32 VAR_6,
    UInt64 VAR_7,
    CSzAr *VAR_8,
    ISzAllocPtr VAR_9)
{
  UInt64 VAR_10;
  UInt32 VAR_11;
  CSubStreamInfo VAR_12;

  FUNC_3(FUNC_6(VAR_8, VAR_4, VAR_6, ((void*)0), 0, &VAR_10, &VAR_12, VAR_9));

  VAR_10 += VAR_7;
  if (VAR_8->NumFolders == 0)
    return VAR_0;

  for (VAR_11 = 0; VAR_11 < VAR_8->NumFolders; VAR_11++)
    FUNC_1(VAR_5 + VAR_11);

  for (VAR_11 = 0; VAR_11 < VAR_8->NumFolders; VAR_11++)
  {
    CBuf *VAR_13 = VAR_5 + VAR_11;
    UInt64 VAR_14 = FUNC_5(VAR_8, VAR_11);
    if ((size_t)VAR_14 != VAR_14)
      return VAR_1;
    if (!FUNC_0(VAR_13, (size_t)VAR_14, VAR_9))
      return VAR_1;
  }

  for (VAR_11 = 0; VAR_11 < VAR_8->NumFolders; VAR_11++)
  {
    const CBuf *VAR_15 = VAR_5 + VAR_11;
    FUNC_3(FUNC_2(VAR_3, VAR_10));
    FUNC_3(FUNC_4(VAR_8, VAR_11, VAR_3, VAR_10, VAR_15->data, VAR_15->size, VAR_9));
  }

  return VAR_2;
}
