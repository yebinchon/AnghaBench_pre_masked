
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int **,int ,char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,struct stat*) ;

void FUNC_10(void)
{
 git_checkout_options VAR_4 = VAR_1;
 git_object *VAR_5;
 struct stat VAR_6;

 VAR_4.checkout_strategy = VAR_0;

 FUNC_2(FUNC_7(&VAR_5, VAR_3, "HEAD"));
 FUNC_2(FUNC_6(VAR_3, VAR_5, VAR_2, ((void*)0)));

 FUNC_3(FUNC_8("testrepo/new.txt", 0755));
 FUNC_2(FUNC_4(VAR_3, &VAR_4));

 FUNC_2(FUNC_9("testrepo/new.txt", &VAR_6));
 FUNC_1(!FUNC_0(VAR_6.st_mode));

 FUNC_5(VAR_5);
}
