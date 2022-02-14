
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t_ ;
typedef int dword_t ;
struct TYPE_4__ {TYPE_1__* group; } ;
struct TYPE_3__ {int sid; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

dword_t FUNC_3() {
    FUNC_0("getsid()");
    FUNC_1(&VAR_1);
    pid_t_ VAR_2 = VAR_0->group->sid;
    FUNC_2(&VAR_1);
    return VAR_2;
}
