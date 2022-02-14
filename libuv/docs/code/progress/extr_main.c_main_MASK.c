
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
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4() {
    VAR_4 = FUNC_1();

    uv_work_t VAR_6;
    int VAR_7 = 10240;
    VAR_6.data = (void*) &VAR_7;

    FUNC_0(VAR_4, &VAR_2, VAR_5);
    FUNC_2(VAR_4, &VAR_6, VAR_3, VAR_1);

    return FUNC_3(VAR_4, VAR_0);
}
