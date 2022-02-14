
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ gl_pathc; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(char *VAR_3) {
    static glob_t VAR_4;
    if (FUNC_2(VAR_3, VAR_1 | VAR_2, ((void*)0), &VAR_4) < 0) {
        FUNC_0("glob() failed\n");
        FUNC_1(VAR_0);
    }
    char *VAR_5 = FUNC_4(VAR_4.gl_pathc > 0 ? VAR_4.gl_pathv[0] : VAR_3);
    FUNC_3(&VAR_4);
    return VAR_5;
}
