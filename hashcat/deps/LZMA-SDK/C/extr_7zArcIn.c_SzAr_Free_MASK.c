
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CodersData; int CoderUnpackSizes; int FoToMainUnpackSizeIndex; int FoToCoderUnpackSizes; int FoStartPackStreamIndex; int FoCodersOffsets; int FolderCRCs; int PackPositions; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CSzAr ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(CSzAr *VAR_0, ISzAllocPtr VAR_1)
{
  FUNC_0(VAR_1, VAR_0->PackPositions);
  FUNC_2(&VAR_0->FolderCRCs, VAR_1);

  FUNC_0(VAR_1, VAR_0->FoCodersOffsets);
  FUNC_0(VAR_1, VAR_0->FoStartPackStreamIndex);
  FUNC_0(VAR_1, VAR_0->FoToCoderUnpackSizes);
  FUNC_0(VAR_1, VAR_0->FoToMainUnpackSizeIndex);
  FUNC_0(VAR_1, VAR_0->CoderUnpackSizes);

  FUNC_0(VAR_1, VAR_0->CodersData);

  FUNC_1(VAR_0);
}
