
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_state {int zf; int pf; int cf; scalar_t__ pf_res; scalar_t__ zf_res; } ;
typedef int float80 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct cpu_state *VAR_0, float80 VAR_1) {
    VAR_0->zf_res = VAR_0->pf_res = 0;
    VAR_0->zf = VAR_0->pf = VAR_0->cf = 0;
    VAR_0->cf = FUNC_2(FUNC_0(0), VAR_1);
    VAR_0->zf = FUNC_1(FUNC_0(0), VAR_1);
    if (FUNC_3(FUNC_0(0), VAR_1))
        VAR_0->zf = VAR_0->pf = VAR_0->cf = 1;
}
