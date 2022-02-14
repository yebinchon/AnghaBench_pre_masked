
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_pathspec ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int **,TYPE_1__*) ;

void FUNC_6(void)
{
 static char *VAR_2[] = { "one", "two*", "!three*", "*four" };
 git_strarray VAR_3 = { VAR_2, FUNC_0(VAR_2) };
 git_pathspec *VAR_4;

 FUNC_2(FUNC_5(&VAR_4, &VAR_3));

 FUNC_1(FUNC_4(VAR_4, 0, "one"));
 FUNC_1(!FUNC_4(VAR_4, 0, "ONE"));
 FUNC_1(FUNC_4(VAR_4, VAR_0, "ONE"));
 FUNC_1(FUNC_4(VAR_4, 0, "two"));
 FUNC_1(FUNC_4(VAR_4, 0, "two.txt"));
 FUNC_1(!FUNC_4(VAR_4, 0, "three.txt"));
 FUNC_1(FUNC_4(VAR_4, 0, "anything.four"));
 FUNC_1(!FUNC_4(VAR_4, 0, "three.four"));
 FUNC_1(!FUNC_4(VAR_4, 0, "nomatch"));
 FUNC_1(!FUNC_4(VAR_4, VAR_1, "two"));
 FUNC_1(FUNC_4(VAR_4, VAR_1, "two*"));
 FUNC_1(!FUNC_4(VAR_4, VAR_1, "anyfour"));
 FUNC_1(FUNC_4(VAR_4, VAR_1, "*four"));

 FUNC_3(VAR_4);
}
