
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*,char*,char*) ;
 int FUNC_2 (int ,char*,int ,unsigned int*) ;
 int VAR_1 ;

void FUNC_3(void)
{
 git_oid VAR_2, VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6 = 0;

 FUNC_1(&VAR_2, "refs/notes/i-can-see-dead-notes", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", "I decorate a65f\n");
 FUNC_1(&VAR_3, "refs/notes/i-can-see-dead-notes", "c47800c7266a2be04c571c04d5a6614691ea99bd", "I decorate c478\n");
 FUNC_1(&VAR_4, "refs/notes/i-can-see-dead-notes", "9fd738e8f7967c078dceed8190330fc8648ee56a", "I decorate 9fd7 and 4a20\n");
 FUNC_1(&VAR_5, "refs/notes/i-can-see-dead-notes", "4a202b346bb0fb0db7eff3cffeb3c70babbd2045", "I decorate 9fd7 and 4a20\n");

 FUNC_0(
  1,
  FUNC_2(VAR_0, "refs/notes/i-can-see-dead-notes",
   VAR_1, &VAR_6));
}
