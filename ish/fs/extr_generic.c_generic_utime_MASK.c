
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int (* utime ) (struct mount*,char*,struct timespec,struct timespec) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mount* FUNC_0 (char*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct fd*,char const*,char*,int ) ;
 int FUNC_3 (struct mount*,char*,struct timespec,struct timespec) ;

int FUNC_4(struct fd *VAR_3, const char *VAR_4, struct timespec VAR_5, struct timespec VAR_6, bool VAR_7) {
    char VAR_8[VAR_0];
    int VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_8, VAR_7 ? VAR_1 : VAR_2);
    if (VAR_9 < 0)
        return VAR_9;
    struct mount *VAR_10 = FUNC_0(VAR_8);
    VAR_9 = VAR_10->fs->utime(VAR_10, VAR_8, VAR_5, VAR_6);
    FUNC_1(VAR_10);
    return VAR_9;
}
