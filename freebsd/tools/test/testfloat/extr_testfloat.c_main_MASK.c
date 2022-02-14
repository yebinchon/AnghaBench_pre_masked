
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
 void* VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__* VAR_19 ;
 TYPE_1__* VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int VAR_23 ;
 int FUNC_7 (int) ;
 int VAR_24 ;
 int FUNC_8 (size_t,int,int) ;
 char* VAR_25 ;
 scalar_t__ VAR_26 ;
 int * VAR_27 ;
 char* VAR_28 ;

int
FUNC_9( int VAR_29, char **VAR_30 )
{
    char *VAR_31;
    flag VAR_32;
    uint8 VAR_33;
    int8 VAR_34, VAR_35, VAR_36;

    VAR_13 = "testfloat";
    if ( VAR_29 <= 1 ) goto writeHelpMessage;
    FUNC_7( 1 );
    VAR_28 = "soft";
    VAR_25 = "syst";
    VAR_12 = VAR_1;
    VAR_18 = VAR_1;
    VAR_21 = 20;
    VAR_27 = &VAR_15;
    VAR_24 = VAR_23;
    VAR_26 = 0;
    VAR_32 = VAR_1;
    VAR_33 = 0;
    VAR_34 = 0;
    VAR_35 = 0;
    VAR_36 = 0;
    --VAR_29;
    ++VAR_30;
    while ( VAR_29 && ( VAR_31 = VAR_30[ 0 ] ) ) {
        if ( VAR_31[ 0 ] == '-' ) ++VAR_31;
        if ( FUNC_6( VAR_31, "help" ) == 0 ) {
 writeHelpMessage:
            FUNC_3(
"testfloat [<option>...] <function>\n"
"  <option>:  (* is default)\n"
"    -help            --Write this message and exit.\n"
"    -list            --List all testable functions and exit.\n"
"    -level <num>     --Testing level <num> (1 or 2).\n"
" *  -level 1\n"
"    -errors <num>    --Stop each function test after <num> errors.\n"
" *  -errors 20\n"
"    -errorstop       --Exit after first function with any error.\n"
"    -forever         --Test one function repeatedly (implies `-level 2').\n"
"    -checkNaNs       --Check for bitwise correctness of NaN results.\n"





"    -nearesteven     --Only test rounding to nearest/even.\n"
"    -tozero          --Only test rounding to zero.\n"
"    -down            --Only test rounding down.\n"
"    -up              --Only test rounding up.\n"
"    -tininessbefore  --Underflow tininess detected before rounding.\n"
"    -tininessafter   --Underflow tininess detected after rounding.\n"
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
                VAR_22
            );
            return VAR_0;
        }
        else if ( FUNC_6( VAR_31, "list" ) == 0 ) {
            for ( VAR_33 = 1;
                  VAR_33 < VAR_2;
                  ++VAR_33
                ) {
                if ( VAR_19[ VAR_33 ] ) {
                    FUNC_4( VAR_20[ VAR_33 ].name );
                }
            }
            return VAR_0;
        }
        else if ( FUNC_6( VAR_31, "level" ) == 0 ) {
            if ( VAR_29 < 2 ) goto optionError;
            FUNC_7( FUNC_0( VAR_30[ 1 ] ) );
            --VAR_29;
            ++VAR_30;
        }
        else if ( FUNC_6( VAR_31, "level1" ) == 0 ) {
            FUNC_7( 1 );
        }
        else if ( FUNC_6( VAR_31, "level2" ) == 0 ) {
            FUNC_7( 2 );
        }
        else if ( FUNC_6( VAR_31, "errors" ) == 0 ) {
            if ( VAR_29 < 2 ) {
     optionError:
                FUNC_2( "`%s' option requires numeric argument", VAR_30[ 0 ] );
            }
            VAR_21 = FUNC_0( VAR_30[ 1 ] );
            --VAR_29;
            ++VAR_30;
        }
        else if ( FUNC_6( VAR_31, "errorstop" ) == 0 ) {
            VAR_12 = VAR_9;
        }
        else if ( FUNC_6( VAR_31, "forever" ) == 0 ) {
            FUNC_7( 2 );
            VAR_18 = VAR_9;
        }
        else if ( ( FUNC_6( VAR_31, "checkNaNs" ) == 0 )
                  || ( FUNC_6( VAR_31, "checknans" ) == 0 ) ) {
            VAR_11 = VAR_9;
        }
        else if ( ( FUNC_6( VAR_31, "nearesteven" ) == 0 )
                  || ( FUNC_6( VAR_31, "nearest_even" ) == 0 ) ) {
            VAR_36 = VAR_4;
        }
        else if ( ( FUNC_6( VAR_31, "tozero" ) == 0 )
                  || ( FUNC_6( VAR_31, "to_zero" ) == 0 ) ) {
            VAR_36 = VAR_5;
        }
        else if ( FUNC_6( VAR_31, "down" ) == 0 ) {
            VAR_36 = VAR_3;
        }
        else if ( FUNC_6( VAR_31, "up" ) == 0 ) {
            VAR_36 = VAR_6;
        }
        else if ( FUNC_6( VAR_31, "tininessbefore" ) == 0 ) {
            VAR_14 = VAR_17;
        }
        else if ( FUNC_6( VAR_31, "tininessafter" ) == 0 ) {
            VAR_14 = VAR_16;
        }
        else if ( FUNC_6( VAR_31, "all1" ) == 0 ) {
            VAR_32 = VAR_9;
            VAR_33 = 0;
            VAR_34 = 1;
        }
        else if ( FUNC_6( VAR_31, "all2" ) == 0 ) {
            VAR_32 = VAR_9;
            VAR_33 = 0;
            VAR_34 = 2;
        }
        else if ( FUNC_6( VAR_31, "all" ) == 0 ) {
            VAR_32 = VAR_9;
            VAR_33 = 0;
            VAR_34 = 0;
        }
        else {
            for ( VAR_33 = 1;
                  VAR_33 < VAR_2;
                  ++VAR_33
                ) {
                if ( FUNC_6( VAR_31, VAR_20[ VAR_33 ].name ) == 0 ) {
                    break;
                }
            }
            if ( VAR_33 == VAR_2 ) {
                FUNC_2( "Invalid option or function `%s'", VAR_30[ 0 ] );
            }
            if ( ! VAR_19[ VAR_33 ] ) {
                FUNC_2(
                    "Function `%s' is not supported or cannot be tested",
                    VAR_31
                );
            }
            VAR_32 = VAR_9;
        }
        --VAR_29;
        ++VAR_30;
    }
    if ( ! VAR_32 ) FUNC_2( "Function argument required" );
    (void) FUNC_5( VAR_7, VAR_10 );
    (void) FUNC_5( VAR_8, VAR_10 );
    if ( VAR_33 ) {
        if ( VAR_18 ) {
            if ( ! VAR_35 ) VAR_35 = 80;
            if ( ! VAR_36 ) VAR_36 = VAR_4;
        }
        FUNC_8( VAR_33, VAR_35, VAR_36 );
    }
    else {
        if ( VAR_18 ) {
            FUNC_2( "Can only test one function with `-forever' option" );
        }
        if ( VAR_34 == 1 ) {
            for ( VAR_33 = 1;
                  VAR_33 < VAR_2;
                  ++VAR_33
                ) {
                if ( VAR_19[ VAR_33 ]
                     && ( VAR_20[ VAR_33 ].numInputs == 1 ) ) {
                    FUNC_8(
                        VAR_33, VAR_35, VAR_36 );
                }
            }
        }
        else if ( VAR_34 == 2 ) {
            for ( VAR_33 = 1;
                  VAR_33 < VAR_2;
                  ++VAR_33
                ) {
                if ( VAR_19[ VAR_33 ]
                     && ( VAR_20[ VAR_33 ].numInputs == 2 ) ) {
                    FUNC_8(
                        VAR_33, VAR_35, VAR_36 );
                }
            }
        }
        else {
            for ( VAR_33 = 1;
                  VAR_33 < VAR_2;
                  ++VAR_33
                ) {
                if ( VAR_19[ VAR_33 ] ) {
                    FUNC_8(
                        VAR_33, VAR_35, VAR_36 );
                }
            }
        }
    }
    FUNC_1();

}
