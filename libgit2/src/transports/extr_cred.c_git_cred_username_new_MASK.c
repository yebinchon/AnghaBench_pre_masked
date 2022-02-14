
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int free; int credtype; } ;
struct TYPE_6__ {int username; TYPE_1__ parent; } ;
typedef TYPE_2__ git_cred_username ;
typedef int git_cred ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (int **) ;
 TYPE_2__* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;
 int VAR_1 ;

int FUNC_6(git_cred **VAR_2, const char *VAR_3)
{
 git_cred_username *VAR_4;
 size_t VAR_5, VAR_6;

 FUNC_2(VAR_2);

 VAR_5 = FUNC_5(VAR_3);

 FUNC_1(&VAR_6, sizeof(git_cred_username), VAR_5);
 FUNC_1(&VAR_6, VAR_6, 1);
 VAR_4 = FUNC_3(VAR_6);
 FUNC_0(VAR_4);

 VAR_4->parent.credtype = VAR_0;
 VAR_4->parent.free = VAR_1;
 FUNC_4(VAR_4->username, VAR_3, VAR_5 + 1);

 *VAR_2 = (git_cred *) VAR_4;
 return 0;
}
