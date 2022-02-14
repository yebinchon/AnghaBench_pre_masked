
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min_line; } ;
typedef TYPE_1__ git_blame_options ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int,int ,char*,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,char*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(void)
{
 git_blame_options VAR_3 = VAR_0;

 FUNC_3(FUNC_6(&VAR_2, FUNC_2("blametest.git")));

 VAR_3.min_line = 8;
 FUNC_3(FUNC_4(&VAR_1, VAR_2, "b.txt", &VAR_3));
 FUNC_1(2, FUNC_5(VAR_1));
 FUNC_0(VAR_2, VAR_1, 0, 8, 3, 0, "63d671eb", "b.txt");
 FUNC_0(VAR_2, VAR_1, 1, 11, 5, 0, "aa06ecca", "b.txt");
}
