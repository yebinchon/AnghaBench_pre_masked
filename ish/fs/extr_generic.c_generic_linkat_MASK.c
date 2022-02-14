
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int (* link ) (struct mount*,char*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mount* FUNC_0 (char*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct fd*,char const*,char*,int) ;
 int FUNC_3 (struct mount*,char*,char*) ;

int FUNC_4(struct fd *VAR_4, const char *VAR_5, struct fd *VAR_6, const char *VAR_7) {
    char VAR_8[VAR_0];
    int VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_8, VAR_2);
    if (VAR_9 < 0)
        return VAR_9;
    char VAR_10[VAR_0];
    VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_10, VAR_2 | VAR_1);
    if (VAR_9 < 0)
        return VAR_9;
    struct mount *VAR_11 = FUNC_0(VAR_8);
    struct mount *VAR_12 = FUNC_0(VAR_10);
    if (VAR_11 != VAR_12)
        VAR_9 = VAR_3;
    else
        VAR_9 = VAR_11->fs->link(VAR_11, VAR_8, VAR_10);
    FUNC_1(VAR_11);
    FUNC_1(VAR_12);
    return VAR_9;
}
