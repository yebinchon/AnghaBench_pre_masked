
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_0 ;

int FUNC_4(git_repository *VAR_1, int VAR_2, char **VAR_3)
{
 FUNC_0(VAR_3);

        if (VAR_2 != 1)
                FUNC_2("Sorry, no for-each-ref options supported yet", ((void*)0));

        FUNC_1(FUNC_3(VAR_1, VAR_0, VAR_1),
                  "Could not iterate over references", ((void*)0));

        return 0;
}
