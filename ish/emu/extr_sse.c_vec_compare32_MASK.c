
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_state {int zf; int pf; int cf; scalar_t__ pf_res; scalar_t__ zf_res; } ;


 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct cpu_state *VAR_0, float *VAR_1, float *VAR_2) {
    if (FUNC_0(*VAR_2) || FUNC_0(*VAR_1)) {
        VAR_0->zf = 1;
        VAR_0->pf = 1;
        VAR_0->cf = 1;
    }
    else if (*VAR_2 > *VAR_1) {
        VAR_0->zf = 0;
        VAR_0->pf = 0;
        VAR_0->cf = 0;
    }
    else if (*VAR_2 < *VAR_1) {
        VAR_0->zf = 0;
        VAR_0->pf = 0;
        VAR_0->cf = 1;
    }
    else if (*VAR_2 == *VAR_1) {
        VAR_0->zf = 1;
        VAR_0->pf = 0;
        VAR_0->cf = 0;
    }
    else {
        FUNC_1("something's horribly wrong. err 1093281094");
    }
    VAR_0->zf_res = 0;
    VAR_0->pf_res = 0;
}
