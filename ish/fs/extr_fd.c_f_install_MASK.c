
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {int dummy; } ;
typedef scalar_t__ fd_t ;
struct TYPE_4__ {TYPE_1__* files; } ;
struct TYPE_3__ {int lock; int cloexec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (struct fd*,int ) ;
 int FUNC_2 (struct fd*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

fd_t FUNC_5(struct fd *VAR_3, int VAR_4) {
    FUNC_3(&VAR_2->files->lock);
    fd_t VAR_5 = FUNC_1(VAR_3, 0);
    if (VAR_5 >= 0) {
        if (VAR_4 & VAR_0)
            FUNC_0(VAR_5, VAR_2->files->cloexec);
        if (VAR_4 & VAR_1)
            FUNC_2(VAR_3, VAR_1);
    }
    FUNC_4(&VAR_2->files->lock);
    return VAR_5;
}
