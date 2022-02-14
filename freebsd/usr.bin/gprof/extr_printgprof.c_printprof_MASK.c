
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nltype ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int **,int,int,int ) ;
 int VAR_3 ;

void
FUNC_7(void)
{
    register nltype *VAR_4;
    nltype **VAR_5;
    int VAR_6;

    VAR_0 = 0.0;
    FUNC_5( "\f\n" );
    FUNC_2();



    VAR_5 = (nltype **) FUNC_0( VAR_2 , sizeof(nltype *) );
    if ( VAR_5 == (nltype **) 0 )
 FUNC_1( 1 , "[printprof] ran out of memory for time sorting" );
    for ( VAR_6 = 0 ; VAR_6 < VAR_2 ; VAR_6 += 1 ) {
 VAR_5[ VAR_6 ] = &VAR_1[ VAR_6 ];
    }
    FUNC_6( VAR_5 , VAR_2 , sizeof(nltype *) , VAR_3 );
    for ( VAR_6 = 0 ; VAR_6 < VAR_2 ; VAR_6 += 1 ) {
 VAR_4 = VAR_5[ VAR_6 ];
 FUNC_3( VAR_4 );
    }
    VAR_0 = 0.0;
    FUNC_4( VAR_5 );
}
