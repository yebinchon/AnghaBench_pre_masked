
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dirty; int filename; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int*) ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*,int) ;

int FUNC_8(void) {
    int VAR_4;
    char *VAR_5 = FUNC_1(&VAR_4);
    int VAR_6 = FUNC_5(VAR_0.filename,VAR_2|VAR_1,0644);
    if (VAR_6 == -1) goto writeerr;



    if (FUNC_4(VAR_6,VAR_4) == -1) goto writeerr;
    if (FUNC_7(VAR_6,VAR_5,VAR_4) != VAR_4) goto writeerr;

    FUNC_0(VAR_6);
    FUNC_3(VAR_5);
    VAR_0.dirty = 0;
    FUNC_2("%d bytes written on disk", VAR_4);
    return 0;

writeerr:
    FUNC_3(VAR_5);
    if (VAR_6 != -1) FUNC_0(VAR_6);
    FUNC_2("Can't save! I/O error: %s",FUNC_6(VAR_3));
    return 1;
}
