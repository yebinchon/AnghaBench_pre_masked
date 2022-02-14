
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int serial; } ;
typedef TYPE_1__ yrmcds_response ;
typedef int yrmcds_error ;
typedef int yrmcds ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,char const*,int ,int,scalar_t__,int*) ;

int FUNC_9(int VAR_3, char** VAR_4, yrmcds* VAR_5) {
    if( VAR_3 != 2 ) {
        FUNC_2(VAR_2, "Wrong number of arguments.\n");
        return 1;
    }
    const char* VAR_6 = VAR_4[0];
    uint32_t VAR_7 = (uint32_t)FUNC_5(VAR_4[1], ((void*)0), 0);

    yrmcds_response VAR_8[1];
    uint32_t VAR_9;
    yrmcds_error VAR_10 = FUNC_8(VAR_5, VAR_6, FUNC_4(VAR_6), VAR_7, VAR_1, &VAR_9);
    FUNC_0(VAR_10);
    if( VAR_1 ) {
        VAR_10 = FUNC_6(VAR_5, &VAR_9);
        FUNC_0(VAR_10);
    }
    if( VAR_0 )
        FUNC_2(VAR_2, "request serial = %u\n", VAR_9);
    while( 1 ) {
        VAR_10 = FUNC_7(VAR_5, VAR_8);
        FUNC_0(VAR_10);
        if( VAR_0 )
            FUNC_3(VAR_8);
        FUNC_1(VAR_8);
        if( VAR_8->serial == VAR_9 )
            break;
    }
    return 0;
}
