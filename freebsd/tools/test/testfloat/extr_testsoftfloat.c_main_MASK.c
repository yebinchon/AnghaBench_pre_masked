
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int int8 ;
typedef void* flag ;
struct TYPE_2__ {char* name; int numInputs; } ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 char* VAR_15 ;
 void* VAR_16 ;
 int FUNC_3 (char*,int ) ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 int VAR_21 ;
 int FUNC_7 (size_t,int,int,int) ;
 char* VAR_22 ;
 int * VAR_23 ;
 char* VAR_24 ;

int
FUNC_8( int VAR_25, char **VAR_26 )
{
    char *VAR_27;
    flag VAR_28;
    uint8 VAR_29;
    int8 VAR_30, VAR_31, VAR_32, VAR_33;

    VAR_15 = "testsoftfloat";
    if ( VAR_25 <= 1 ) goto writeHelpMessage;
    FUNC_6( 1 );
    VAR_24 = "true";
    VAR_22 = "soft";
    VAR_14 = VAR_1;
    VAR_16 = VAR_1;
    VAR_18 = 20;
    VAR_23 = &VAR_19;
    VAR_21 = VAR_13;
    VAR_28 = VAR_1;
    VAR_29 = 0;
    VAR_30 = 0;
    VAR_31 = 0;
    VAR_32 = 0;
    VAR_33 = 0;
    --VAR_25;
    ++VAR_26;
    while ( VAR_25 && ( VAR_27 = VAR_26[ 0 ] ) ) {
        if ( VAR_27[ 0 ] == '-' ) ++VAR_27;
        if ( FUNC_5( VAR_27, "help" ) == 0 ) {
 writeHelpMessage:
            FUNC_3(
"testsoftfloat [<option>...] <function>\n"
"  <option>:  (* is default)\n"
"    -help            --Write this message and exit.\n"
"    -level <num>     --Testing level <num> (1 or 2).\n"
" *  -level 1\n"
"    -errors <num>    --Stop each function test after <num> errors.\n"
" *  -errors 20\n"
"    -errorstop       --Exit after first function with any error.\n"
"    -forever         --Test one function repeatedly (implies `-level 2').\n"





"    -nearesteven     --Only test rounding to nearest/even.\n"
"    -tozero          --Only test rounding to zero.\n"
"    -down            --Only test rounding down.\n"
"    -up              --Only test rounding up.\n"
"    -tininessbefore  --Only test underflow tininess before rounding.\n"
"    -tininessafter   --Only test underflow tininess after rounding.\n"
"  <function>:\n"
"    int32_to_<float>                 <float>_add   <float>_eq\n"
"    <float>_to_int32                 <float>_sub   <float>_le\n"
"    <float>_to_int32_round_to_zero   <float>_mul   <float>_lt\n"
"    <float>_to_<float>               <float>_div   <float>_eq_signaling\n"
"    <float>_round_to_int             <float>_rem   <float>_le_quiet\n"
"    <float>_sqrt                                   <float>_lt_quiet\n"

"    -all1            --All 1-operand functions.\n"
"    -all2            --All 2-operand functions.\n"
"    -all             --All functions.\n"
"  <float>:\n"
"    float32          --Single precision.\n"
"    float64          --Double precision.\n"






                ,
                VAR_20
            );
            return VAR_0;
        }
        else if ( FUNC_5( VAR_27, "level" ) == 0 ) {
            if ( VAR_25 < 2 ) goto optionError;
            FUNC_6( FUNC_0( VAR_26[ 1 ] ) );
            --VAR_25;
            ++VAR_26;
        }
        else if ( FUNC_5( VAR_27, "level1" ) == 0 ) {
            FUNC_6( 1 );
        }
        else if ( FUNC_5( VAR_27, "level2" ) == 0 ) {
            FUNC_6( 2 );
        }
        else if ( FUNC_5( VAR_27, "errors" ) == 0 ) {
            if ( VAR_25 < 2 ) {
     optionError:
                FUNC_2( "`%s' option requires numeric argument", VAR_26[ 0 ] );
            }
            VAR_18 = FUNC_0( VAR_26[ 1 ] );
            --VAR_25;
            ++VAR_26;
        }
        else if ( FUNC_5( VAR_27, "errorstop" ) == 0 ) {
            VAR_14 = VAR_11;
        }
        else if ( FUNC_5( VAR_27, "forever" ) == 0 ) {
            FUNC_6( 2 );
            VAR_16 = VAR_11;
        }
        else if ( ( FUNC_5( VAR_27, "nearesteven" ) == 0 )
                  || ( FUNC_5( VAR_27, "nearest_even" ) == 0 ) ) {
            VAR_32 = VAR_4;
        }
        else if ( ( FUNC_5( VAR_27, "tozero" ) == 0 )
                  || ( FUNC_5( VAR_27, "to_zero" ) == 0 ) ) {
            VAR_32 = VAR_5;
        }
        else if ( FUNC_5( VAR_27, "down" ) == 0 ) {
            VAR_32 = VAR_3;
        }
        else if ( FUNC_5( VAR_27, "up" ) == 0 ) {
            VAR_32 = VAR_6;
        }
        else if ( FUNC_5( VAR_27, "tininessbefore" ) == 0 ) {
            VAR_33 = VAR_10;
        }
        else if ( FUNC_5( VAR_27, "tininessafter" ) == 0 ) {
            VAR_33 = VAR_9;
        }
        else if ( FUNC_5( VAR_27, "all1" ) == 0 ) {
            VAR_28 = VAR_11;
            VAR_29 = 0;
            VAR_30 = 1;
        }
        else if ( FUNC_5( VAR_27, "all2" ) == 0 ) {
            VAR_28 = VAR_11;
            VAR_29 = 0;
            VAR_30 = 2;
        }
        else if ( FUNC_5( VAR_27, "all" ) == 0 ) {
            VAR_28 = VAR_11;
            VAR_29 = 0;
            VAR_30 = 0;
        }
        else {
            for ( VAR_29 = 1;
                  VAR_29 < VAR_2;
                  ++VAR_29
                ) {
                if ( FUNC_5( VAR_27, VAR_17[ VAR_29 ].name ) == 0 ) {
                    break;
                }
            }
            if ( VAR_29 == VAR_2 ) {
                FUNC_2( "Invalid option or function `%s'", VAR_26[ 0 ] );
            }
            VAR_28 = VAR_11;
        }
        --VAR_25;
        ++VAR_26;
    }
    if ( ! VAR_28 ) FUNC_2( "Function argument required" );
    (void) FUNC_4( VAR_7, VAR_12 );
    (void) FUNC_4( VAR_8, VAR_12 );
    if ( VAR_29 ) {
        if ( VAR_16 ) {
            if ( ! VAR_31 ) VAR_31 = 80;
            if ( ! VAR_32 ) VAR_32 = VAR_4;
        }
        FUNC_7(
            VAR_29, VAR_31, VAR_32, VAR_33 );
    }
    else {
        if ( VAR_30 == 1 ) {
            for ( VAR_29 = 1;
                  VAR_29 < VAR_2;
                  ++VAR_29
                ) {
                if ( VAR_17[ VAR_29 ].numInputs == 1 ) {
                    FUNC_7(
                        VAR_29,
                        VAR_31,
                        VAR_32,
                        VAR_33
                    );
                }
            }
        }
        else if ( VAR_30 == 2 ) {
            for ( VAR_29 = 1;
                  VAR_29 < VAR_2;
                  ++VAR_29
                ) {
                if ( VAR_17[ VAR_29 ].numInputs == 2 ) {
                    FUNC_7(
                        VAR_29,
                        VAR_31,
                        VAR_32,
                        VAR_33
                    );
                }
            }
        }
        else {
            for ( VAR_29 = 1;
                  VAR_29 < VAR_2;
                  ++VAR_29
                ) {
                FUNC_7(
                    VAR_29, VAR_31, VAR_32, VAR_33
                );
            }
        }
    }
    FUNC_1();

}
