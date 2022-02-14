
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yrmcds_error ;
typedef int yrmcds ;
typedef int uint16_t ;


 int FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int (*) ()) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int,char**,char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_20 () ;
 int VAR_7 ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int VAR_8 ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 (int *) ;
 scalar_t__ FUNC_32 (int *,char const*,int ) ;
 scalar_t__ FUNC_33 (int *,size_t) ;
 scalar_t__ FUNC_34 (int *) ;

int FUNC_35(int VAR_9, char** VAR_10) {
    const char* VAR_11 = VAR_2;
    uint16_t VAR_12 = VAR_1;
    size_t VAR_13 = VAR_0;
    int VAR_14 = 0;

    while( 1 ) {
        int VAR_15;
        int VAR_16 = FUNC_13(VAR_9, VAR_10, "s:p:c:dtqvh");
        if( VAR_16 == -1 ) break;
        switch( VAR_16 ) {
        case 's':
            VAR_11 = VAR_5;
            break;
        case 'p':
            VAR_15 = FUNC_3(VAR_5);
            if( VAR_15 <= 0 || VAR_15 > 65535 ) {
                FUNC_8(VAR_8, "Invalid TCP port.\n");
                return 1;
            }
            VAR_12 = (uint16_t)VAR_15;
            break;
        case 'c':
            VAR_15 = FUNC_3(VAR_5);
            if( VAR_15 <= 0 ) {
                FUNC_8(VAR_8, "Invalid compression thoreshold.\n");
                return 1;
            }
            VAR_13 = (size_t)VAR_15;
            break;
        case 'd':
            VAR_4 = 1;
            break;
        case 't':
            VAR_14 = 1;
            break;
        case 'q':
            VAR_7 = 1;
            break;
        case 'v':
            FUNC_30();
            return 0;
        case 'h':
            FUNC_29();
            return 0;
        default:
            return 1;
        }
    }

    if( VAR_6 == VAR_9 ) {
        FUNC_29();
        return 0;
    }

    const char* VAR_17 = VAR_10[VAR_6];
    VAR_9 -= VAR_6 + 1;
    VAR_10 += VAR_6 + 1;

    yrmcds VAR_18[1];
    yrmcds_error VAR_19 = FUNC_32(VAR_18, VAR_11, VAR_12);
    FUNC_0(VAR_19);
    if( VAR_14 ) {
        VAR_19 = FUNC_34(VAR_18);
        FUNC_0(VAR_19);
    }
    VAR_19 = FUNC_33(VAR_18, VAR_13);
    if( VAR_19 != 0 && VAR_19 != VAR_3 ) {
        FUNC_31(VAR_18);
        FUNC_0(VAR_19);
    }

    int VAR_20 = 1;






    if( strcmp(VAR_17, "noop") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "get") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "getk") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "gat") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "gatk") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "lag") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "lagk") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "touch") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "set") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "replace") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "add") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "rau") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "incr") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "decr") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "append") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "prepend") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "delete") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "lock") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "unlock") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "unlockall") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "flush") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "stat") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "keys") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "version") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };
    if( FUNC_0(VAR_17, "quit") == 0 ) { VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_18); goto OUT; };

    FUNC_8(VAR_8, "No such command: %s\n", VAR_17);

  OUT:
    FUNC_31(VAR_18);
    return VAR_20;
}
