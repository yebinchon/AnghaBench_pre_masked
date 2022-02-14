
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (char*,int) ;

void FUNC_9(void)
{
 git_checkout_options VAR_4 = VAR_1;
 git_oid VAR_5;
 git_object *VAR_6 = ((void*)0);

 FUNC_0(VAR_3, "master");

 FUNC_2(FUNC_8("testrepo/a", 0777));




 VAR_4.checkout_strategy = VAR_0;

 FUNC_2(FUNC_7(&VAR_5, VAR_3, "refs/heads/dir"));
 FUNC_2(FUNC_5(&VAR_6, VAR_3, &VAR_5, VAR_2));

 FUNC_2(FUNC_3(VAR_3, VAR_6, &VAR_4));

 FUNC_1(FUNC_6("testrepo/a/b.txt"));

 FUNC_4(VAR_6);
}
