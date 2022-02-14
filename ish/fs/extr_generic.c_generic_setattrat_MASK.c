
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct attr {int dummy; } ;
struct TYPE_2__ {int (* setattr ) (struct mount*,char*,struct attr) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mount* FUNC_0 (char*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct fd*,char const*,char*,int ) ;
 int FUNC_3 (struct mount*,char*,struct attr) ;

int FUNC_4(struct fd *VAR_3, const char *VAR_4, struct attr VAR_5, bool VAR_6) {
    char VAR_7[VAR_0];
    int VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_7, VAR_6 ? VAR_1 : VAR_2);
    if (VAR_8 < 0)
        return VAR_8;
    struct mount *VAR_9 = FUNC_0(VAR_7);
    VAR_8 = VAR_9->fs->setattr(VAR_9, VAR_7, VAR_5);
    FUNC_1(VAR_9);
    return VAR_8;
}
