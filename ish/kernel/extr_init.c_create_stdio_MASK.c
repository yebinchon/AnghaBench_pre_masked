
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; int rdev; } ;
struct fd {scalar_t__ refcount; int flags; TYPE_1__ stat; } ;
struct TYPE_6__ {TYPE_2__* files; } ;
struct TYPE_5__ {void** files; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int ,struct fd*) ;
 void* FUNC_4 (struct fd*) ;
 struct fd* FUNC_5 (char const*,int ,int ) ;

int FUNC_6(const char *VAR_5, int VAR_6, int VAR_7) {
    struct fd *VAR_8 = FUNC_5(VAR_5, VAR_1, 0);
    if (FUNC_0(VAR_8)) {

        VAR_8 = FUNC_1(((void*)0));
        VAR_8->stat.rdev = FUNC_2(VAR_6, VAR_7);
        VAR_8->stat.mode = VAR_2 | VAR_3;
        VAR_8->flags = VAR_1;
        int VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_0, VAR_8);
        if (VAR_9 < 0)
            return VAR_9;
    }

    VAR_8->refcount = 0;
    VAR_4->files->files[0] = FUNC_4(VAR_8);
    VAR_4->files->files[1] = FUNC_4(VAR_8);
    VAR_4->files->files[2] = FUNC_4(VAR_8);
    return 0;
}
