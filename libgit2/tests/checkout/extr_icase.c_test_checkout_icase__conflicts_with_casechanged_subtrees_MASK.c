
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*,int) ;
 int FUNC_9 (int *,int ,char*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (char*,int) ;
 int VAR_7 ;

void FUNC_13(void)
{
 git_reference *VAR_8;
 git_object *VAR_9, *VAR_10;
 git_oid VAR_11;
 git_checkout_options VAR_12 = VAR_0;

 VAR_12.checkout_strategy = VAR_1;

 FUNC_1(FUNC_8(&VAR_8, VAR_7, "HEAD", 100));
 FUNC_1(FUNC_6(&VAR_9, VAR_7, FUNC_10(VAR_8), VAR_3));
 FUNC_1(FUNC_11(VAR_7, (git_object *)VAR_9, VAR_4, ((void*)0)));

 FUNC_3(FUNC_12("testrepo/AB", 0777));
 FUNC_3(FUNC_12("testrepo/AB/C", 0777));
 FUNC_2("testrepo/AB/C/3.txt", "Foobar!\n", 8, VAR_6|VAR_5, 0666);

 FUNC_1(FUNC_9(&VAR_11, VAR_7, "refs/heads/subtrees"));
 FUNC_1(FUNC_6(&VAR_10, VAR_7, &VAR_11, VAR_2));

 FUNC_0(FUNC_4(VAR_7, VAR_10, &VAR_12));

 FUNC_5(VAR_9);
 FUNC_5(VAR_10);
    FUNC_7(VAR_8);
}
