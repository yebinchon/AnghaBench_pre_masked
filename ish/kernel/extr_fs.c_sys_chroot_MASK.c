
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {int dummy; } ;
typedef int path ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int lock; struct fd* root; } ;


 scalar_t__ FUNC_0 (struct fd*) ;
 int VAR_0 ;
 int FUNC_1 (struct fd*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (struct fd*) ;
 int FUNC_4 (int *) ;
 struct fd* FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,char*,int) ;

dword_t FUNC_8(addr_t VAR_3) {
    char VAR_4[VAR_0];
    if (FUNC_7(VAR_3, VAR_4, sizeof(VAR_4)))
        return VAR_1;
    FUNC_2("chroot(\"%s\")", VAR_4);

    struct fd *VAR_5 = FUNC_5(VAR_4);
    if (FUNC_0(VAR_5))
        return FUNC_1(VAR_5);
    FUNC_4(&VAR_2->fs->lock);
    FUNC_3(VAR_2->fs->root);
    VAR_2->fs->root = VAR_5;
    FUNC_6(&VAR_2->fs->lock);
    return 0;
}
