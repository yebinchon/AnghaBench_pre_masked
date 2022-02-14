
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct cpu_state {int c0; int c2; int c3; int c1; } ;
struct TYPE_8__ {int sign; } ;
typedef TYPE_1__ float80 ;


 TYPE_1__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;

void FUNC_6(struct cpu_state *VAR_0) {
    float80 VAR_1 = FUNC_0(0);
    int VAR_2 = 0;
    if (!FUNC_1(VAR_1)) {
        VAR_2 = 0b000;
    } else if (FUNC_4(VAR_1)) {
        VAR_2 = 0b001;
    } else if (FUNC_3(VAR_1)) {
        VAR_2 = 0b011;
    } else if (FUNC_5(VAR_1)) {
        VAR_2 = 0b100;
    } else if (FUNC_2(VAR_1)) {
        VAR_2 = 0b110;
    } else {


        VAR_2 = 0b010;
    }
    VAR_0->c1 = VAR_1.sign;
    VAR_0->c0 = VAR_2 & 1;
    VAR_0->c2 = (VAR_2 >> 1) & 1;
    VAR_0->c3 = (VAR_2 >> 2) & 1;
}
