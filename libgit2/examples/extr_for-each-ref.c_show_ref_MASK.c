
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int **,int *,int const*,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int const*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_11(git_reference *VAR_3, void *VAR_4)
{
        git_repository *VAR_5 = VAR_4;
        git_reference *VAR_6 = ((void*)0);
        char VAR_7[VAR_1+1];
        const git_oid *VAR_8;
        git_object *VAR_9;

        if (FUNC_9(VAR_3) == VAR_2)
                FUNC_0(FUNC_7(&VAR_6, VAR_3),
                          "Unable to resolve symbolic reference",
                          FUNC_6(VAR_3));

        VAR_8 = FUNC_8(VAR_6 ? VAR_6 : VAR_3);
        FUNC_4(VAR_7, VAR_8);
        VAR_7[VAR_1] = 0;
        FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_8, VAR_0),
                  "Unable to lookup object", VAR_7);

        FUNC_10("%s %-6s\t%s\n",
               VAR_7,
               FUNC_3(FUNC_2(VAR_9)),
               FUNC_6(VAR_3));

        if (VAR_6)
                FUNC_5(VAR_6);
        return 0;
}
