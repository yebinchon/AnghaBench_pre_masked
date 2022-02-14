
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UInt64 ;
typedef size_t UInt32 ;
struct TYPE_13__ {scalar_t__* Vals; } ;
struct TYPE_12__ {int* FoCodersOffsets; scalar_t__* FoToMainUnpackSizeIndex; size_t* FoToCoderUnpackSizes; TYPE_7__ FolderCRCs; scalar_t__* FoStartPackStreamIndex; scalar_t__ PackPositions; int * CoderUnpackSizes; int * CodersData; } ;
struct TYPE_11__ {int Size; int const* Data; } ;
struct TYPE_10__ {scalar_t__ UnpackStream; } ;
typedef int SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef TYPE_1__ CSzFolder ;
typedef TYPE_2__ CSzData ;
typedef TYPE_3__ CSzAr ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_2 (TYPE_3__ const*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_7__*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int const*,int *,scalar_t__,int *,int ,int *,int ,int ,int **) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*) ;

SRes FUNC_6(const CSzAr *VAR_3, UInt32 VAR_4,
    ILookInStream *VAR_5, UInt64 VAR_6,
    Byte *VAR_7, size_t VAR_8,
    ISzAllocPtr VAR_9)
{
  SRes VAR_10;
  CSzFolder VAR_11;
  CSzData VAR_12;

  const Byte *VAR_13 = VAR_3->CodersData + VAR_3->FoCodersOffsets[VAR_4];
  VAR_12.Data = VAR_13;
  VAR_12.Size = VAR_3->FoCodersOffsets[(size_t)VAR_4 + 1] - VAR_3->FoCodersOffsets[VAR_4];

  VAR_10 = FUNC_5(&VAR_11, &VAR_12);

  if (VAR_10 != VAR_2)
    return VAR_10;

  if (VAR_12.Size != 0
      || VAR_11.UnpackStream != VAR_3->FoToMainUnpackSizeIndex[VAR_4]
      || VAR_8 != FUNC_2(VAR_3, VAR_4))
    return VAR_1;
  {
    unsigned VAR_14;
    Byte *VAR_15[3] = { 0, 0, 0};

    VAR_10 = FUNC_4(&VAR_11, VAR_13,
        &VAR_3->CoderUnpackSizes[VAR_3->FoToCoderUnpackSizes[VAR_4]],
        VAR_3->PackPositions + VAR_3->FoStartPackStreamIndex[VAR_4],
        VAR_5, VAR_6,
        VAR_7, (SizeT)VAR_8, VAR_9, VAR_15);

    for (VAR_14 = 0; VAR_14 < 3; VAR_14++)
      FUNC_1(VAR_9, VAR_15[VAR_14]);

    if (VAR_10 == VAR_2)
      if (FUNC_3(&VAR_3->FolderCRCs, VAR_4))
        if (FUNC_0(VAR_7, VAR_8) != VAR_3->FolderCRCs.Vals[VAR_4])
          VAR_10 = VAR_0;

    return VAR_10;
  }
}
