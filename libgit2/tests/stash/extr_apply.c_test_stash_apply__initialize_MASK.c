
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ,int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char*,char*,int,int) ;
 int FUNC_10 (int *,int ,int ,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_11(void)
{
 git_oid VAR_10;

 VAR_7 = FUNC_4("stash");
 FUNC_2(FUNC_8(&VAR_8, VAR_7));
 FUNC_2(FUNC_9(&VAR_9, "nulltoken", "emeric.fermas@gmail.com", 1323847743, 60));

 FUNC_1("stash/what", "hello\n");
 FUNC_1("stash/how", "small\n");
 FUNC_1("stash/who", "world\n");
 FUNC_1("stash/where", "meh\n");

 FUNC_2(FUNC_6(VAR_8, "what"));
 FUNC_2(FUNC_6(VAR_8, "how"));
 FUNC_2(FUNC_6(VAR_8, "who"));

 FUNC_5(((void*)0), VAR_7, VAR_9, 0, "Initial commit");

 FUNC_3("stash/what", "goodbye\n");
 FUNC_3("stash/who", "funky world\n");
 FUNC_1("stash/when", "tomorrow\n");
 FUNC_1("stash/why", "would anybody use stash?\n");
 FUNC_1("stash/where", "????\n");

 FUNC_2(FUNC_6(VAR_8, "who"));
 FUNC_2(FUNC_6(VAR_8, "why"));
 FUNC_2(FUNC_6(VAR_8, "where"));
 FUNC_2(FUNC_7(VAR_8));

 FUNC_3("stash/where", "....\n");


 FUNC_0(VAR_7, "what", VAR_5);
 FUNC_0(VAR_7, "how", VAR_2);
 FUNC_0(VAR_7, "who", VAR_3);
 FUNC_0(VAR_7, "when", VAR_6);
 FUNC_0(VAR_7, "why", VAR_4);
 FUNC_0(VAR_7, "where", VAR_4|VAR_5);

 FUNC_2(FUNC_10(&VAR_10, VAR_7, VAR_9, ((void*)0), VAR_1));


 FUNC_0(VAR_7, "what", VAR_2);
 FUNC_0(VAR_7, "how", VAR_2);
 FUNC_0(VAR_7, "who", VAR_2);
 FUNC_0(VAR_7, "when", VAR_0);
 FUNC_0(VAR_7, "why", VAR_0);
 FUNC_0(VAR_7, "where", VAR_0);
}
