
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CTime; int MTime; int Attribs; int CRCs; int * FileNames; int * FileNameOffsets; int * FileToFolder; int * FolderToFile; int * IsDirs; int * UnpackPositions; scalar_t__ dataPos; scalar_t__ NumFiles; int db; } ;
typedef TYPE_1__ CSzArEx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(CSzArEx *VAR_0)
{
  FUNC_0(&VAR_0->db);

  VAR_0->NumFiles = 0;
  VAR_0->dataPos = 0;

  VAR_0->UnpackPositions = ((void*)0);
  VAR_0->IsDirs = ((void*)0);

  VAR_0->FolderToFile = ((void*)0);
  VAR_0->FileToFolder = ((void*)0);

  VAR_0->FileNameOffsets = ((void*)0);
  VAR_0->FileNames = ((void*)0);

  FUNC_1(&VAR_0->CRCs);
  FUNC_1(&VAR_0->Attribs);

  FUNC_2(&VAR_0->MTime);
  FUNC_2(&VAR_0->CTime);
}
