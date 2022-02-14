
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_8(void)
{
 git_buf VAR_7 = VAR_0;

 FUNC_3(FUNC_7(VAR_5, 0, ((void*)0)));

 FUNC_1(FUNC_6(VAR_6), 0);
 FUNC_0(VAR_5, "what", VAR_3);
 FUNC_0(VAR_5, "how", VAR_1);
 FUNC_0(VAR_5, "who", VAR_3);
 FUNC_0(VAR_5, "when", VAR_4);
 FUNC_0(VAR_5, "why", VAR_2);
 FUNC_0(VAR_5, "where", VAR_2);

 FUNC_3(FUNC_5(&VAR_7, "stash/where"));
 FUNC_2("....\n", VAR_7.ptr);

 FUNC_4(&VAR_7);
}
