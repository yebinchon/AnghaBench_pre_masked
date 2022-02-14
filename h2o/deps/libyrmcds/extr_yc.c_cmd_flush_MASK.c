
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
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (int *,int,scalar_t__,int*) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *,TYPE_1__*) ;

int FUNC_8(int VAR_3, char** VAR_4, yrmcds* VAR_5) {
    uint32_t VAR_6 = 0;
    if( VAR_3 == 1 )
        VAR_6 = (uint32_t)FUNC_4(VAR_4[0], ((void*)0), 0);

    yrmcds_response VAR_7[1];
    uint32_t VAR_8;
    yrmcds_error VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_1, &VAR_8);
    FUNC_0(VAR_9);
    if( VAR_1 ) {
        VAR_9 = FUNC_6(VAR_5, &VAR_8);
        FUNC_0(VAR_9);
    }
    if( VAR_0 )
        FUNC_2(VAR_2, "request serial = %u\n", VAR_8);
    while( 1 ) {
        VAR_9 = FUNC_7(VAR_5, VAR_7);
        FUNC_0(VAR_9);
        if( VAR_0 )
            FUNC_3(VAR_7);
        FUNC_1(VAR_7);
        if( VAR_7->serial == VAR_8 )
            break;
    }
    return 0;
}
