
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * CodersData; int * CoderUnpackSizes; int * FoToMainUnpackSizeIndex; int * FoToCoderUnpackSizes; int * FoStartPackStreamIndex; int * FoCodersOffsets; int FolderCRCs; int * PackPositions; scalar_t__ NumFolders; scalar_t__ NumPackStreams; } ;
typedef TYPE_1__ CSzAr ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(CSzAr *VAR_0)
{
  VAR_0->NumPackStreams = 0;
  VAR_0->NumFolders = 0;

  VAR_0->PackPositions = ((void*)0);
  FUNC_0(&VAR_0->FolderCRCs);

  VAR_0->FoCodersOffsets = ((void*)0);
  VAR_0->FoStartPackStreamIndex = ((void*)0);
  VAR_0->FoToCoderUnpackSizes = ((void*)0);
  VAR_0->FoToMainUnpackSizeIndex = ((void*)0);
  VAR_0->CoderUnpackSizes = ((void*)0);

  VAR_0->CodersData = ((void*)0);
}
