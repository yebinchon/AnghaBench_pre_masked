
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_code; int si_addr; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (char*,int,int,int ) ;

void FUNC_1(int VAR_0, siginfo_t *VAR_1, void *VAR_2) {
    FUNC_0("caught signal %d code %d at %p\n", VAR_0, VAR_1->si_code, VAR_1->si_addr);
}
