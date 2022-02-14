
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bus_entry_ptr ;
struct TYPE_3__ {int bus_id; char* bus_type; } ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3( bus_entry_ptr VAR_2 )
{
    int VAR_3;
    char VAR_4[ 8 ];
    char VAR_5;


    ++VAR_1;

    FUNC_2( "\t\t%2d", VAR_2->bus_id );
    FUNC_2( "\t " ); FUNC_1( VAR_2->bus_type, 6 ); FUNC_2( "\n" );

    for ( VAR_3 = 0; VAR_3 < 6; ++VAR_3 ) {
 if ( (VAR_5 = VAR_2->bus_type[ VAR_3 ]) == ' ' )
     break;
 VAR_4[ VAR_3 ] = VAR_5;
    }
    VAR_4[ VAR_3 ] = '\0';
    VAR_0[ VAR_2->bus_id ] = FUNC_0( VAR_4 );
}
