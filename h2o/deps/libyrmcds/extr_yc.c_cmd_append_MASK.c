
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
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_5 (char*,char**) ;
 int VAR_2 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,char const*,int ,char*,size_t,scalar_t__,int*) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,TYPE_1__*) ;

int FUNC_10(int VAR_3, char** VAR_4, yrmcds* VAR_5) {
    if( VAR_3 != 2 ) {
        FUNC_2(VAR_2, "Wrong number of arguments.\n");
        return 1;
    }
    const char* VAR_6 = VAR_4[0];
    char* VAR_7 = ((void*)0);
    size_t VAR_8 = FUNC_5(VAR_4[1], &VAR_7);
    if( VAR_7 == ((void*)0) ) {
        FUNC_2(VAR_2, "Failed to read data.\n");
        return 2;
    }

    yrmcds_response VAR_9[1];
    uint32_t VAR_10;
    yrmcds_error VAR_11 = FUNC_7(VAR_5, VAR_6, FUNC_6(VAR_6),
                                   VAR_7, VAR_8, VAR_1, &VAR_10);
    FUNC_3(VAR_7);
    FUNC_0(VAR_11);
    if( VAR_1 ) {
        VAR_11 = FUNC_8(VAR_5, &VAR_10);
        FUNC_0(VAR_11);
    }
    if( VAR_0 )
        FUNC_2(VAR_2, "request serial = %u\n", VAR_10);
    while( 1 ) {
        VAR_11 = FUNC_9(VAR_5, VAR_9);
        FUNC_0(VAR_11);
        if( VAR_0 )
            FUNC_4(VAR_9);
        FUNC_1(VAR_9);
        if( VAR_9->serial == VAR_10 )
            break;
    }
    return 0;
}
