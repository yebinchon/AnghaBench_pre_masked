
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ) ;

int FUNC_7( int VAR_1, char **VAR_2 ){

        if ( VAR_1 < 1 ) {
                FUNC_5( "Usage: q3map -exportents [-v] <mapname>\n" );
                return 0;
        }


        FUNC_6( VAR_0, FUNC_1( VAR_2[ VAR_1 - 1 ] ) );
        FUNC_4( VAR_0 );
        FUNC_0( VAR_0, ".bsp" );


        FUNC_5( "Loading %s\n", VAR_0 );
        FUNC_3( VAR_0 );


        FUNC_2();


        return 0;
}
