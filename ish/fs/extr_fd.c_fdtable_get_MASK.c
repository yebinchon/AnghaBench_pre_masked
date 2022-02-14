
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fdtable {struct fd** files; } ;
struct fd {int dummy; } ;
typedef size_t fd_t ;
struct TYPE_4__ {TYPE_1__* files; } ;
struct TYPE_3__ {unsigned int size; } ;


 TYPE_2__* VAR_0 ;

struct fd *FUNC_0(struct fdtable *VAR_1, fd_t VAR_2) {
    if (VAR_2 < 0 || (unsigned) VAR_2 >= VAR_0->files->size)
        return ((void*)0);
    return VAR_1->files[VAR_2];
}
