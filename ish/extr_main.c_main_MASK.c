
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,scalar_t__) ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int,char* const*,char*) ;

int FUNC_8(int VAR_4, char *const VAR_5[]) {
    char VAR_6[100] = {0};
    if (FUNC_3("TERM"))
        FUNC_4(VAR_6, FUNC_3("TERM") - FUNC_6("TERM") - 1);
    int VAR_7 = FUNC_7(VAR_4, VAR_5, VAR_6);
    if (VAR_7 < 0) {
        FUNC_2(VAR_3, "%s\n", FUNC_5(-VAR_7));
        return VAR_7;
    }
    FUNC_1(&VAR_2, "proc", "/proc", 0);
    FUNC_1(&VAR_1, "devpts", "/dev/pts", 0);
    FUNC_0(&VAR_0->cpu);
}
