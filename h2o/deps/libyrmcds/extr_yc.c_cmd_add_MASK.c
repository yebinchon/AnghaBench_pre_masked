
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int serial; } ;
typedef TYPE_1__ yrmcds_response ;
typedef int yrmcds_error ;
typedef int yrmcds ;
typedef scalar_t__ uint64_t ;
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
 scalar_t__ FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (int *,char const*,int ,char*,size_t,int,int,scalar_t__,scalar_t__,int*) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,TYPE_1__*) ;

int FUNC_11(int VAR_3, char** VAR_4, yrmcds* VAR_5) {
    if( VAR_3 < 2 || 5 < VAR_3 ) {
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
    uint32_t VAR_9 = 0;
    uint32_t VAR_10 = 0;
    uint64_t VAR_11 = 0;

    if( VAR_3 > 2 )
        VAR_9 = (uint32_t)FUNC_7(VAR_4[2], ((void*)0), 0);
    if( VAR_3 > 3 )
        VAR_10 = (uint32_t)FUNC_7(VAR_4[3], ((void*)0), 0);
    if( VAR_3 > 4 )
        VAR_11 = (uint64_t)FUNC_7(VAR_4[4], ((void*)0), 0);

    yrmcds_response VAR_12[1];
    uint32_t VAR_13;
    yrmcds_error VAR_14 = FUNC_8(VAR_5, VAR_6, FUNC_6(VAR_6), VAR_7, VAR_8,
                                VAR_10, VAR_9, VAR_11, VAR_1, &VAR_13);
    FUNC_3(VAR_7);
    FUNC_0(VAR_14);
    if( VAR_1 ) {
        VAR_14 = FUNC_9(VAR_5, &VAR_13);
        FUNC_0(VAR_14);
    }
    if( VAR_0 )
        FUNC_2(VAR_2, "request serial = %u\n", VAR_13);
    while( 1 ) {
        VAR_14 = FUNC_10(VAR_5, VAR_12);
        FUNC_0(VAR_14);
        if( VAR_0 )
            FUNC_4(VAR_12);
        FUNC_1(VAR_12);
        if( VAR_12->serial == VAR_13 )
            break;
    }
    return 0;
}
