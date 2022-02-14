
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_state {int c2; int c1; int c0; int c3; } ;
typedef int float80 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct cpu_state *VAR_0, float80 VAR_1) {
    VAR_0->c2 = VAR_0->c1 = 0;
    VAR_0->c0 = FUNC_2(FUNC_0(0), VAR_1);
    VAR_0->c3 = FUNC_1(FUNC_0(0), VAR_1);
    if (FUNC_3(FUNC_0(0), VAR_1))
        VAR_0->c0 = VAR_0->c2 = VAR_0->c3 = 1;
}
