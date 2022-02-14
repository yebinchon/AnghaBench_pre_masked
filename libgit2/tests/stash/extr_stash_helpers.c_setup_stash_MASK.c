
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;
typedef int git_index ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int *,int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;

void FUNC_8(git_repository *VAR_0, git_signature *VAR_1)
{
 git_index *VAR_2;

 FUNC_1(FUNC_7(&VAR_2, VAR_0));

 FUNC_0("stash/what", "hello\n");
 FUNC_0("stash/how", "small\n");
 FUNC_0("stash/who", "world\n");
 FUNC_0("stash/when", "now\n");
 FUNC_0("stash/just.ignore", "me\n");

 FUNC_0("stash/.gitignore", "*.ignore\n");

 FUNC_1(FUNC_4(VAR_2, "what"));
 FUNC_1(FUNC_4(VAR_2, "how"));
 FUNC_1(FUNC_4(VAR_2, "who"));
 FUNC_1(FUNC_4(VAR_2, ".gitignore"));

 FUNC_3(((void*)0), VAR_0, VAR_1, 0, "Initial commit");

 FUNC_2("stash/what", "goodbye\n");
 FUNC_2("stash/how", "not so small and\n");
 FUNC_2("stash/who", "funky world\n");
 FUNC_0("stash/why", "would anybody use stash?\n");
 FUNC_0("stash/where", "????\n");

 FUNC_1(FUNC_4(VAR_2, "what"));
 FUNC_1(FUNC_4(VAR_2, "how"));
 FUNC_1(FUNC_4(VAR_2, "why"));
 FUNC_1(FUNC_4(VAR_2, "where"));
 FUNC_1(FUNC_6(VAR_2));

 FUNC_2("stash/what", "see you later\n");
 FUNC_0("stash/where", "....\n");

 FUNC_5(VAR_2);
}
