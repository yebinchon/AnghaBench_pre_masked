
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UInt64 ;
typedef size_t UInt32 ;
struct TYPE_5__ {scalar_t__* Vals; } ;
struct TYPE_4__ {size_t* FileToFolder; size_t* UnpackPositions; size_t* FolderToFile; TYPE_2__ CRCs; int dataPos; int db; } ;
typedef scalar_t__ SRes ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef TYPE_1__ CSzArEx ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int *,size_t,int *,int ,int *,size_t,int ) ;
 size_t FUNC_4 (int *,size_t) ;
 scalar_t__ FUNC_5 (TYPE_2__*,size_t) ;

SRes FUNC_6(
    const CSzArEx *VAR_4,
    ILookInStream *VAR_5,
    UInt32 VAR_6,
    UInt32 *VAR_7,
    Byte **VAR_8,
    size_t *VAR_9,
    size_t *VAR_10,
    size_t *VAR_11,
    ISzAllocPtr VAR_12,
    ISzAllocPtr VAR_13)
{
  UInt32 VAR_14 = VAR_4->FileToFolder[VAR_6];
  SRes VAR_15 = VAR_3;

  *VAR_10 = 0;
  *VAR_11 = 0;

  if (VAR_14 == (UInt32)-1)
  {
    FUNC_2(VAR_12, *VAR_8);
    *VAR_7 = VAR_14;
    *VAR_8 = ((void*)0);
    *VAR_9 = 0;
    return VAR_3;
  }

  if (*VAR_8 == ((void*)0) || *VAR_7 != VAR_14)
  {
    UInt64 VAR_16 = FUNC_4(&VAR_4->db, VAR_14);





    size_t VAR_17 = (size_t)VAR_16;

    if (VAR_17 != VAR_16)
      return VAR_2;
    *VAR_7 = VAR_14;
    FUNC_2(VAR_12, *VAR_8);
    *VAR_8 = ((void*)0);

    if (VAR_15 == VAR_3)
    {
      *VAR_9 = VAR_17;
      if (VAR_17 != 0)
      {
        *VAR_8 = (Byte *)FUNC_1(VAR_12, VAR_17);
        if (*VAR_8 == ((void*)0))
          VAR_15 = VAR_2;
      }

      if (VAR_15 == VAR_3)
      {
        VAR_15 = FUNC_3(&VAR_4->db, VAR_14,
            VAR_5, VAR_4->dataPos, *VAR_8, VAR_17, VAR_13);
      }
    }
  }

  if (VAR_15 == VAR_3)
  {
    UInt64 VAR_18 = VAR_4->UnpackPositions[VAR_6];
    *VAR_10 = (size_t)(VAR_18 - VAR_4->UnpackPositions[VAR_4->FolderToFile[VAR_14]]);
    *VAR_11 = (size_t)(VAR_4->UnpackPositions[(size_t)VAR_6 + 1] - VAR_18);
    if (*VAR_10 + *VAR_11 > *VAR_9)
      return VAR_1;
    if (FUNC_5(&VAR_4->CRCs, VAR_6))
      if (FUNC_0(*VAR_8 + *VAR_10, *VAR_11) != VAR_4->CRCs.Vals[VAR_6])
        VAR_15 = VAR_0;
  }

  return VAR_15;
}
