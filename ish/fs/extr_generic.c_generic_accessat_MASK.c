
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statbuf {int dummy; } ;
struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int (* stat ) (struct mount*,char*,struct statbuf*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct statbuf*,int) ;
 struct mount* FUNC_1 (char*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct fd*,char const*,char*,int ) ;
 int FUNC_4 (struct mount*,char*,struct statbuf*,int) ;

int FUNC_5(struct fd *VAR_2, const char *VAR_3, int VAR_4) {
    char VAR_5[VAR_0];
    int VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_1);
    if (VAR_6 < 0)
        return VAR_6;

    struct mount *VAR_7 = FUNC_1(VAR_5);
    struct statbuf VAR_8 = {};
    VAR_6 = VAR_7->fs->stat(VAR_7, VAR_5, &VAR_8, 1);
    FUNC_2(VAR_7);
    if (VAR_6 < 0)
        return VAR_6;
    return FUNC_0(&VAR_8, VAR_4);
}
