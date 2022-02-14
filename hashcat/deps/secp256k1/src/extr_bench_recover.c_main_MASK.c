
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ bench_recover_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int *,TYPE_1__*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(void) {
    bench_recover_data VAR_3;

    VAR_3.ctx = FUNC_1(VAR_0);

    FUNC_0("ecdsa_recover", VAR_1, VAR_2, ((void*)0), &VAR_3, 10, 20000);

    FUNC_2(VAR_3.ctx);
    return 0;
}
