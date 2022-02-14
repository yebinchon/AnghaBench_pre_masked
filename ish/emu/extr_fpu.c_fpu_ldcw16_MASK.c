
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct cpu_state {int rc; int fcw; } ;


 int VAR_0 ;

void FUNC_0(struct cpu_state *VAR_1, uint16_t *VAR_2) {
    VAR_1->fcw = *VAR_2;
    VAR_0 = VAR_1->rc;
}
