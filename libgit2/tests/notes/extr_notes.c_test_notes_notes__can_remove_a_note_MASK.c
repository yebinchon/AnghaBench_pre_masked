
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (int **,int ,char*,int *) ;
 int FUNC_4 (int ,char*,int ,int ,int *) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(void)
{
 git_oid VAR_2, VAR_3;
 git_note *VAR_4;

 FUNC_2(&VAR_2, "refs/notes/i-can-see-dead-notes", "4a202b346bb0fb0db7eff3cffeb3c70babbd2045", "I decorate 4a20\n");

 FUNC_1(FUNC_5(&VAR_3, "4a202b346bb0fb0db7eff3cffeb3c70babbd2045"));
 FUNC_1(FUNC_4(VAR_0, "refs/notes/i-can-see-dead-notes", VAR_1, VAR_1, &VAR_3));

 FUNC_0(FUNC_3(&VAR_4, VAR_0, "refs/notes/i-can-see-dead-notes", &VAR_3));
}
