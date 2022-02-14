
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {int dummy; } ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int lock; struct fd* pwd; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct fd*,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,char*,int) ;

dword_t FUNC_9(addr_t VAR_5, dword_t VAR_6) {
    FUNC_0("getcwd(%#x, %#x)", VAR_5, VAR_6);
    FUNC_3(&VAR_4->fs->lock);
    struct fd *VAR_7 = VAR_4->fs->pwd;
    char VAR_8[VAR_0 + 1];
    int VAR_9 = FUNC_2(VAR_7, VAR_8);
    FUNC_7(&VAR_4->fs->lock);
    if (VAR_9 < 0)
        return VAR_9;

    if (FUNC_6(VAR_8) + 1 > VAR_6)
        return VAR_3;
    VAR_6 = FUNC_6(VAR_8) + 1;
    char *VAR_10 = FUNC_4(VAR_6);
    if (VAR_10 == ((void*)0))
        return VAR_2;
    FUNC_5(VAR_10, VAR_8);
    FUNC_0(" \"%.*s\"", VAR_6, VAR_10);
    dword_t VAR_11 = VAR_6;
    if (FUNC_8(VAR_5, VAR_10, VAR_6))
        VAR_11 = VAR_1;
    FUNC_1(VAR_10);
    return VAR_11;
}
