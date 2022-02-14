
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (int *,int ,char*) ;

void FUNC_7(void)
{
 git_checkout_options VAR_4 = VAR_0;
 git_oid VAR_5;
 git_object *VAR_6 = ((void*)0);

 VAR_4.checkout_strategy = VAR_1;

 FUNC_1(FUNC_6(&VAR_5, VAR_3, "HEAD"));
 FUNC_1(FUNC_5(&VAR_6, VAR_3, &VAR_5, VAR_2));

 FUNC_2("conflicts.txt");

 FUNC_0(FUNC_3(VAR_3, VAR_6, &VAR_4));

 FUNC_4(VAR_6);
}
