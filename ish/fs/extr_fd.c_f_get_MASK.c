
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {int dummy; } ;
typedef int fd_t ;
struct TYPE_4__ {TYPE_1__* files; } ;
struct TYPE_3__ {int lock; } ;


 TYPE_2__* VAR_0 ;
 struct fd* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct fd *FUNC_3(fd_t VAR_1) {
    FUNC_1(&VAR_0->files->lock);
    struct fd *VAR_2 = FUNC_0(VAR_0->files, VAR_1);
    FUNC_2(&VAR_0->files->lock);
    return VAR_2;
}
