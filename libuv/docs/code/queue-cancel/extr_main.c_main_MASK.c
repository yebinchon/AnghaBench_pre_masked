
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_signal_t ;
struct TYPE_3__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5() {
    VAR_6 = FUNC_0();

    int VAR_8[VAR_0];
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        VAR_8[VAR_9] = VAR_9;
        VAR_5[VAR_9].data = (void *) &VAR_8[VAR_9];
        FUNC_1(VAR_6, &VAR_5[VAR_9], VAR_4, VAR_3);
    }

    uv_signal_t VAR_10;
    FUNC_3(VAR_6, &VAR_10);
    FUNC_4(&VAR_10, VAR_7, VAR_1);

    return FUNC_2(VAR_6, VAR_2);
}
