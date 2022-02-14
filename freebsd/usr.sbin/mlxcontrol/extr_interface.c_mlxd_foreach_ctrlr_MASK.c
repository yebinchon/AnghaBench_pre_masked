
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxd_foreach_action {int arg; int (* func ) (int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;

void
FUNC_6(int VAR_1, void *VAR_2)
{
    struct mlxd_foreach_action *VAR_3 = (struct mlxd_foreach_action *)VAR_2;
    int VAR_4, VAR_5, VAR_6;


    if ((VAR_6 = FUNC_4(FUNC_1(VAR_1), 0)) < 0)
 return;

    for (VAR_4 = -1; ;) {

 if (FUNC_3(VAR_6, VAR_0, &VAR_4) < 0) {
     FUNC_0(VAR_6);
     return;
 }


 if ((VAR_5 = FUNC_4(FUNC_2(VAR_4), 0)) >= 0)
     FUNC_0(VAR_5);

 if (VAR_5 >= 0) {
     VAR_3->func(VAR_4, VAR_3->arg);
 }
    }
}
