
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t_ ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {scalar_t__ pid; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

pid_t_ FUNC_3() {
    FUNC_0("getppid()");
    pid_t_ VAR_2;
    FUNC_1(&VAR_1);
    if (VAR_0->parent != ((void*)0))
        VAR_2 = VAR_0->parent->pid;
    else
        VAR_2 = 0;
    FUNC_2(&VAR_1);
    return VAR_2;
}
