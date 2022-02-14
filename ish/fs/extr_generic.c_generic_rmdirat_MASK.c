
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int (* rmdir ) (struct mount*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 struct mount* FUNC_1 (char*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct fd*,char const*,char*,int) ;
 int FUNC_4 (struct mount*,char*) ;

int FUNC_5(struct fd *VAR_4, const char *VAR_5) {
    char VAR_6[VAR_0];
    int VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_2 | VAR_1);
    if (VAR_7 < 0)
        return VAR_7;
    if (FUNC_0(VAR_6))
        return VAR_3;
    struct mount *VAR_8 = FUNC_1(VAR_6);
    VAR_7 = VAR_8->fs->rmdir(VAR_8, VAR_6);
    FUNC_2(VAR_8);
    return VAR_7;
}
