
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct stat*) ;
 char* FUNC_2 (int ,char) ;
 int FUNC_3 (int ) ;

void FUNC_4(void) {
    struct stat VAR_1;
    char *VAR_2;

    if (!VAR_0)
        return;


    if ((FUNC_1(VAR_0, &VAR_1)) == -1 || VAR_1.st_size > 0)
        return;

    if (FUNC_3(VAR_0) == -1)
        return;

    if ((VAR_2 = FUNC_2(VAR_0, '/')) != ((void*)0)) {
        *VAR_2 = '\0';


        FUNC_0(VAR_0);
    }
}
