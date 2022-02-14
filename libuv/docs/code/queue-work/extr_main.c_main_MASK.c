
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; } ;
typedef TYPE_1__ uv_work_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3() {
    VAR_4 = FUNC_0();

    int VAR_5[VAR_0];
    uv_work_t VAR_6[VAR_0];
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        VAR_5[VAR_7] = VAR_7;
        VAR_6[VAR_7].data = (void *) &VAR_5[VAR_7];
        FUNC_1(VAR_4, &VAR_6[VAR_7], VAR_3, VAR_2);
    }

    return FUNC_2(VAR_4, VAR_1);
}
