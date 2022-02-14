
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {char* filename; scalar_t__ dirty; int numrows; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;

int FUNC_8(char *VAR_3) {
    FILE *VAR_4;

    VAR_0.dirty = 0;
    FUNC_4(VAR_0.filename);
    VAR_0.filename = FUNC_7(VAR_3);

    VAR_4 = FUNC_3(VAR_3,"r");
    if (!VAR_4) {
        if (VAR_2 != VAR_1) {
            FUNC_6("Opening file");
            FUNC_1(1);
        }
        return 1;
    }

    char *VAR_5 = ((void*)0);
    size_t VAR_6 = 0;
    ssize_t VAR_7;
    while((VAR_7 = FUNC_5(&VAR_5,&VAR_6,VAR_4)) != -1) {
        if (VAR_7 && (VAR_5[VAR_7-1] == '\n' || VAR_5[VAR_7-1] == '\r'))
            VAR_5[--VAR_7] = '\0';
        FUNC_0(VAR_0.numrows,VAR_5,VAR_7);
    }
    FUNC_4(VAR_5);
    FUNC_2(VAR_4);
    VAR_0.dirty = 0;
    return 0;
}
