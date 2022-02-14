
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int *,char**) ;

__attribute__((used)) static char *FUNC_4(char *VAR_2) {
    if (VAR_0 == ((void*)0)) {
        return ((void*)0);
    }


    if (VAR_1 == ((void*)0)) {
        VAR_1 = FUNC_1(VAR_0);

        if (VAR_1 == ((void*)0)) {
            FUNC_0("Failed to open the resource database.\n");



            VAR_1 = FUNC_2("");

            return ((void*)0);
        }
    }

    char *VAR_3;
    FUNC_3(VAR_1, VAR_2, ((void*)0), &VAR_3);
    return VAR_3;
}
