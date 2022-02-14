
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct note_create_payload {char* member_0; char* member_1; int member_2; } ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct note_create_payload*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int *,int ,int *,int ,int ,int *,char*,int ) ;
 int FUNC_6 (int ,char*,int ,struct note_create_payload**) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int **,int ,char*,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;

void FUNC_10(void)
{
 git_oid VAR_3;
 git_oid VAR_4;
 git_commit *VAR_5 = ((void*)0);
 git_reference *VAR_6;
 static struct note_create_payload VAR_7[] = {
  { "1c9b1bc36730582a42d56eeee0dc58673d7ae869", "4a202b346bb0fb0db7eff3cffeb3c70babbd2045", 0 },
  { "1aaf94147c21f981e0a20bf57b89137c5a6aae52", "9fd738e8f7967c078dceed8190330fc8648ee56a", 0 },
  { ((void*)0), ((void*)0), 0 }
 };

 FUNC_2(FUNC_7(&VAR_3, "4a202b346bb0fb0db7eff3cffeb3c70babbd2045"));

 FUNC_2(FUNC_5(&VAR_4, ((void*)0), VAR_0, ((void*)0), VAR_1, VAR_1, &VAR_3, "I decorate 4a20\n", 0));

 FUNC_2(FUNC_7(&VAR_3, "9fd738e8f7967c078dceed8190330fc8648ee56a"));

 FUNC_4(&VAR_5, VAR_0, &VAR_4);

 FUNC_1(VAR_5);

 FUNC_2(FUNC_5(&VAR_4, ((void*)0), VAR_0, VAR_5, VAR_1, VAR_1, &VAR_3, "I decorate 9fd7\n", 0));



 FUNC_2(FUNC_8(&VAR_6, VAR_0, "refs/notes/i-can-see-dead-notes", &VAR_4, 0, ((void*)0)));

 FUNC_2(FUNC_6(VAR_0, "refs/notes/i-can-see-dead-notes", VAR_2, &VAR_7));

 FUNC_0(VAR_7, 2);

 FUNC_3(VAR_5);
 FUNC_9(VAR_6);
}
