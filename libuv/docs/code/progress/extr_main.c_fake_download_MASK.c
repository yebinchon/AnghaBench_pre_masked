
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_work_t ;
struct TYPE_6__ {void* data; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(uv_work_t *VAR_2) {
    int VAR_3 = *((int*) VAR_2->data);
    int VAR_4 = 0;
    while (VAR_4 < VAR_3) {
        VAR_1 = VAR_4*100.0/VAR_3;
        VAR_0.data = (void*) &VAR_1;
        FUNC_2(&VAR_0);

        FUNC_1(1);
        VAR_4 += (200+FUNC_0())%1000;

    }
}
