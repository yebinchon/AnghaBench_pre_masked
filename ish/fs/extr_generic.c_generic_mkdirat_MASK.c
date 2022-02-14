
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
typedef int mode_t_ ;
struct TYPE_2__ {int (* mkdir ) (struct mount*,char*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mount* FUNC_0 (char*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct fd*,char const*,char*,int) ;
 int FUNC_3 (struct mount*,char*,int ) ;

int FUNC_4(struct fd *VAR_3, const char *VAR_4, mode_t_ VAR_5) {
    char VAR_6[VAR_0];
    int VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_2 | VAR_1);
    if (VAR_7 < 0)
        return VAR_7;
    struct mount *VAR_8 = FUNC_0(VAR_6);
    VAR_7 = VAR_8->fs->mkdir(VAR_8, VAR_6, VAR_5);
    FUNC_1(VAR_8);
    return VAR_7;
}
