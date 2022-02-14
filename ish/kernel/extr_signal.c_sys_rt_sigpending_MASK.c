
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sigset_t_ ;
typedef int int_t ;
typedef int addr_t ;
struct TYPE_2__ {int pending; int blocked; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;

int_t FUNC_2(addr_t VAR_2) {
    FUNC_0("rt_sigpending(%#x)");

    sigset_t_ VAR_3 = VAR_1->pending & VAR_1->blocked;
    if (FUNC_1(VAR_2, VAR_3))
        return VAR_0;
    return 0;
}
