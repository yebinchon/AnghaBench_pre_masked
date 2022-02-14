
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_blame_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int,int,char*,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,char*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(void)
{
 git_blame_options VAR_4 = VAR_1;
 VAR_4.flags |= VAR_0;

 FUNC_3(FUNC_6(&VAR_3, FUNC_2("blametest.git")));

 FUNC_3(FUNC_4(&VAR_2, VAR_3, "b.txt", &VAR_4));
 FUNC_1(4, FUNC_5(VAR_2));
 FUNC_0(VAR_3, VAR_2, 0, 1, 4, 0, "da237394", "b.txt");
 FUNC_0(VAR_3, VAR_2, 1, 5, 1, 1, "b99f7ac0", "b.txt");
 FUNC_0(VAR_3, VAR_2, 2, 6, 5, 0, "63d671eb", "b.txt");
 FUNC_0(VAR_3, VAR_2, 3, 11, 5, 0, "bc7c5ac2", "b.txt");
}
