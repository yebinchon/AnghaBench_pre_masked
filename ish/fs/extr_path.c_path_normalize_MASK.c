
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {int dummy; } ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int lock; struct fd* pwd; struct fd* root; } ;


 struct fd* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,char*,int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct fd*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct fd *VAR_4, const char *VAR_5, char *VAR_6, int VAR_7) {
    FUNC_1(VAR_4 != ((void*)0));
    if (FUNC_5(VAR_5, "") == 0)
        return VAR_2;


    FUNC_3(&VAR_3->fs->lock);
    if (VAR_5[0] == '/')
        VAR_4 = VAR_3->fs->root;
    else if (VAR_4 == VAR_0)
        VAR_4 = VAR_3->fs->pwd;
    FUNC_6(&VAR_3->fs->lock);
    char VAR_8[VAR_1];
    if (VAR_4 != ((void*)0)) {
        int VAR_9 = FUNC_2(VAR_4, VAR_8);
        if (VAR_9 < 0)
            return VAR_9;
        FUNC_1(FUNC_4(VAR_8));
    }

    return FUNC_0(VAR_4 != ((void*)0) ? VAR_8 : ((void*)0), VAR_5, VAR_6, VAR_7, 0);
}
