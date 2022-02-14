
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* errstr; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;

void FUNC_2(const redisAsyncContext *VAR_2, int VAR_3) {
    if (VAR_3 != VAR_0) {
        FUNC_1("Error: %s\n", VAR_2->errstr);
        FUNC_0(VAR_1);
        return;
    }

    FUNC_1("Connected...\n");
}
