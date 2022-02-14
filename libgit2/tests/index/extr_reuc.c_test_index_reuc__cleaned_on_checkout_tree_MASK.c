
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 git_oid VAR_4;
 git_object *VAR_5;
 git_checkout_options VAR_6 = VAR_1;

 VAR_6.checkout_strategy = VAR_0;

 FUNC_7();
 FUNC_1(FUNC_5(&VAR_4, VAR_3, "refs/heads/master"));
 FUNC_1(FUNC_4(&VAR_5, VAR_3, &VAR_4, VAR_2));
 FUNC_1(FUNC_2(VAR_3, VAR_5, &VAR_6));
 FUNC_0(FUNC_6() == 0);

 FUNC_3(VAR_5);
}
