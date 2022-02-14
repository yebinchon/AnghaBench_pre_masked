
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_work_t ;


 long FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,long) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_0 ;

void FUNC_4(uv_work_t *VAR_1) {
    int VAR_2 = *(int *) VAR_1->data;
    if (FUNC_2() % 2)
        FUNC_3(1);
    else
        FUNC_3(3);
    long VAR_3 = FUNC_0(VAR_2);
    FUNC_1(VAR_0, "%dth fibonacci is %lu\n", VAR_2, VAR_3);
}
