
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct note_create_payload {int seen; int * object_oid; int * note_oid; } ;
typedef int git_oid ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(
 const git_oid *VAR_0, const git_oid *VAR_1, void *VAR_2)
{
 git_oid VAR_3, VAR_4;
 struct note_create_payload *VAR_5 = VAR_2;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_5[VAR_6].note_oid != ((void*)0); VAR_6++) {
  FUNC_1(FUNC_3(&VAR_3, VAR_5[VAR_6].note_oid));

  if (FUNC_2(&VAR_3, VAR_0) != 0)
   continue;

  FUNC_1(FUNC_3(&VAR_4, VAR_5[VAR_6].object_oid));

  if (FUNC_2(&VAR_4, VAR_1) != 0)
   continue;

  VAR_5[VAR_6].seen = 1;
  return 0;
 }

 FUNC_0("Did not see expected note");
 return 0;
}
