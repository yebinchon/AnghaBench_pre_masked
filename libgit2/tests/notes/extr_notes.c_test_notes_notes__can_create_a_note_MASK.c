
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct note_create_payload {char* member_0; char* member_1; int object_oid; int member_2; } ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (struct note_create_payload*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,char*) ;
 int FUNC_3 (int ,char*,int ,struct note_create_payload**) ;
 int VAR_1 ;

void FUNC_4(void)
{
 git_oid VAR_2;
 static struct note_create_payload VAR_3[] = {
  { "1c9b1bc36730582a42d56eeee0dc58673d7ae869", "4a202b346bb0fb0db7eff3cffeb3c70babbd2045", 0 },
  { ((void*)0), ((void*)0), 0 }
 };

 FUNC_2(&VAR_2, "refs/notes/i-can-see-dead-notes", VAR_3[0].object_oid, "I decorate 4a20\n");

 FUNC_1(FUNC_3(VAR_0, "refs/notes/i-can-see-dead-notes", VAR_1, &VAR_3));

 FUNC_0(VAR_3, 1);
}
