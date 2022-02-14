
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int dummy; } ;
typedef int path ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_2__ {int fs; } ;


 scalar_t__ FUNC_0 (struct fd*) ;
 int VAR_0 ;
 int FUNC_1 (struct fd*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,struct fd*) ;
 struct fd* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;

dword_t FUNC_6(addr_t VAR_3) {
    char VAR_4[VAR_0];
    if (FUNC_5(VAR_3, VAR_4, sizeof(VAR_4)))
        return VAR_1;
    FUNC_2("chdir(\"%s\")", VAR_4);

    struct fd *VAR_5 = FUNC_4(VAR_4);
    if (FUNC_0(VAR_5))
        return FUNC_1(VAR_5);
    FUNC_3(VAR_2->fs, VAR_5);
    return 0;
}
