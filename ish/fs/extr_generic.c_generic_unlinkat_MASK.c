
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int (* unlink ) (struct mount*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mount* FUNC_0 (char*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct fd*,char const*,char*,int ) ;
 int FUNC_3 (struct mount*,char*) ;

int FUNC_4(struct fd *VAR_2, const char *VAR_3) {
    char VAR_4[VAR_0];
    int VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1);
    if (VAR_5 < 0)
        return VAR_5;
    struct mount *VAR_6 = FUNC_0(VAR_4);
    VAR_5 = VAR_6->fs->unlink(VAR_6, VAR_4);
    FUNC_1(VAR_6);
    return VAR_5;
}
