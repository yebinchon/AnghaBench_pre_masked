
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* files; } ;
struct TYPE_3__ {void** files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 void* FUNC_0 (int ) ;

int FUNC_1() {
    if (!(VAR_3->files->files[0] = FUNC_0(VAR_1))) {
        return -1;
    }
    if (!(VAR_3->files->files[1] = FUNC_0(VAR_2))) {
        return -1;
    }
    if (!(VAR_3->files->files[2] = FUNC_0(VAR_0))) {
        return -1;
    }
    return 0;
}
