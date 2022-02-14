
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct note_create_payload {char* member_0; char* member_1; int object_oid; int member_2; } ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct note_create_payload*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,int *,int ,int ,int *,char*,int) ;
 int FUNC_3 (int ,char*,int ,struct note_create_payload**) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int **,int ,char*,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

void FUNC_7(void)
{
 git_oid VAR_3;
 git_oid VAR_4;
 git_reference *VAR_5;
 static struct note_create_payload VAR_6[] = {
  { "1c9b1bc36730582a42d56eeee0dc58673d7ae869", "4a202b346bb0fb0db7eff3cffeb3c70babbd2045", 0 },
  { ((void*)0), ((void*)0), 0 }
 };

 FUNC_1(FUNC_4(&VAR_3, VAR_6[0].object_oid));

 FUNC_1(FUNC_2(&VAR_4, ((void*)0), VAR_0, ((void*)0), VAR_1, VAR_1, &VAR_3, "I decorate 4a20\n", 1));



 FUNC_1(FUNC_5(&VAR_5, VAR_0, "refs/notes/i-can-see-dead-notes", &VAR_4, 0, ((void*)0)));

 FUNC_1(FUNC_3(VAR_0, "refs/notes/i-can-see-dead-notes", VAR_2, &VAR_6));

 FUNC_0(VAR_6, 1);

 FUNC_6(VAR_5);
}
