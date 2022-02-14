
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pts; } ;
typedef TYPE_1__ AMC_Buf_Out ;



__attribute__((used)) static void FUNC_0(AMC_Buf_Out *VAR_0, int VAR_1) {
    AMC_Buf_Out *VAR_2, *VAR_3, VAR_4;
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_1; VAR_6++) {
            VAR_2 = VAR_0 + VAR_5;
            VAR_3 = VAR_0 + VAR_6;
            if (VAR_2->pts < VAR_3->pts) {
                VAR_4 = *VAR_2;
                *VAR_2 = *VAR_3;
                *VAR_3 = VAR_4;
            }
        }
    }
}
