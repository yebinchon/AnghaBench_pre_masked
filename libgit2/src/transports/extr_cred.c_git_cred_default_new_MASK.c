
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int free; int credtype; } ;
typedef TYPE_1__ git_cred_default ;
typedef TYPE_1__ git_cred ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int,int) ;

int FUNC_3(git_cred **VAR_2)
{
 git_cred_default *VAR_3;

 FUNC_1(VAR_2);

 VAR_3 = FUNC_2(1, sizeof(git_cred_default));
 FUNC_0(VAR_3);

 VAR_3->credtype = VAR_0;
 VAR_3->free = VAR_1;

 *VAR_2 = VAR_3;
 return 0;
}
