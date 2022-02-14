
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int db; int CTime; int MTime; int Attribs; int CRCs; int FileNames; int FileNameOffsets; int FileToFolder; int FolderToFile; int IsDirs; int UnpackPositions; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CSzArEx ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(CSzArEx *VAR_0, ISzAllocPtr VAR_1)
{
  FUNC_0(VAR_1, VAR_0->UnpackPositions);
  FUNC_0(VAR_1, VAR_0->IsDirs);

  FUNC_0(VAR_1, VAR_0->FolderToFile);
  FUNC_0(VAR_1, VAR_0->FileToFolder);

  FUNC_0(VAR_1, VAR_0->FileNameOffsets);
  FUNC_0(VAR_1, VAR_0->FileNames);

  FUNC_3(&VAR_0->CRCs, VAR_1);
  FUNC_3(&VAR_0->Attribs, VAR_1);

  FUNC_4(&VAR_0->MTime, VAR_1);
  FUNC_4(&VAR_0->CTime, VAR_1);

  FUNC_2(&VAR_0->db, VAR_1);
  FUNC_1(VAR_0);
}
