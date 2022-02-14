
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int (* rename ) (struct mount*,char*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 struct mount* FUNC_1 (char*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct fd*,char const*,char*,int) ;
 int FUNC_4 (struct mount*,char*,char*) ;

int FUNC_5(struct fd *VAR_5, const char *VAR_6, struct fd *VAR_7, const char *VAR_8) {
    char VAR_9[VAR_0];
    int VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_9, VAR_2);
    if (VAR_10 < 0)
        return VAR_10;
    char VAR_11[VAR_0];
    VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_11, VAR_2 | VAR_1);
    if (VAR_10 < 0)
        return VAR_10;
    if (FUNC_0(VAR_9))
        return VAR_3;
    struct mount *VAR_12 = FUNC_1(VAR_9);
    struct mount *VAR_13 = FUNC_1(VAR_11);
    if (VAR_12 != VAR_13)
        VAR_10 = VAR_4;
    else
        VAR_10 = VAR_12->fs->rename(VAR_12, VAR_9, VAR_11);
    FUNC_2(VAR_12);
    FUNC_2(VAR_13);
    return VAR_10;
}
