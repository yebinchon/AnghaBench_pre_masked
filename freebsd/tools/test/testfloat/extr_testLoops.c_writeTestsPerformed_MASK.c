
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( int16 VAR_4 )
{

    if ( VAR_3 ) {
        FUNC_1(
            VAR_1, "\r%d%04d tests performed", VAR_3, VAR_4 );
    }
    else {
        FUNC_1( VAR_1, "\r%d tests performed", VAR_4 );
    }
    if ( VAR_0 ) {
        FUNC_1(
            VAR_1,
            "; %d error%s found.\n",
            VAR_0,
            ( VAR_0 == 1 ) ? "" : "s"
        );
    }
    else {
        FUNC_2( ".\n", VAR_1 );
        FUNC_2( "No errors found in ", VAR_2 );
        FUNC_3( VAR_2 );
        FUNC_2( ".\n", VAR_2 );
        FUNC_0( VAR_2 );
    }

}
