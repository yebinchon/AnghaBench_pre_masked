
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {TYPE_1__* fs; } ;
typedef int mode_t_ ;
typedef int dev_t_ ;
struct TYPE_2__ {int (* mknod ) (struct mount*,char*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct mount* FUNC_4 (char*) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (int ,char const*,char*,int) ;
 int FUNC_7 (struct mount*,char*,int ,int ) ;
 int FUNC_8 () ;

int FUNC_9(const char *VAR_6, mode_t_ VAR_7, dev_t_ VAR_8) {
    if (FUNC_2(VAR_7) || FUNC_3(VAR_7))
        return VAR_4;
    if (!FUNC_8() && (FUNC_0(VAR_7) || FUNC_1(VAR_7)))
        return VAR_5;

    char VAR_9[VAR_1];
    int VAR_10 = FUNC_6(VAR_0, VAR_6, VAR_9, VAR_3 | VAR_2);
    if (VAR_10 < 0)
        return VAR_10;
    struct mount *VAR_11 = FUNC_4(VAR_9);
    if (VAR_11->fs->mknod == ((void*)0))
        VAR_10 = VAR_5;
    else
        VAR_10 = VAR_11->fs->mknod(VAR_11, VAR_9, VAR_7, VAR_8);
    FUNC_5(VAR_11);
    return VAR_10;
}
