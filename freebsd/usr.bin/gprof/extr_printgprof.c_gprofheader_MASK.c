
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 double VAR_4 ;
 double VAR_5 ;

void
FUNC_2(void)
{

    if ( VAR_2 ) {
 FUNC_0( VAR_1 );
    }
    FUNC_1( "\ngranularity: each sample hit covers %g byte(s)" ,
     VAR_5 * VAR_0 );
    if ( VAR_4 > 0.0 ) {
 FUNC_1( " for %.2f%% of %.2f seconds\n\n" ,
  100.0/VAR_4 , VAR_4 / VAR_3 );
    } else {
 FUNC_1( " no time propagated\n\n" );



 VAR_4 = 1.0;
    }
    FUNC_1( "%6.6s %5.5s %7.7s %11.11s %7.7s/%-7.7s     %-8.8s\n" ,
 "" , "" , "" , "" , "called" , "total" , "parents");
    FUNC_1( "%-6.6s %5.5s %7.7s %11.11s %7.7s+%-7.7s %-8.8s\t%5.5s\n" ,
 "index" , "%time" , "self" , "descendents" ,
 "called" , "self" , "name" , "index" );
    FUNC_1( "%6.6s %5.5s %7.7s %11.11s %7.7s/%-7.7s     %-8.8s\n" ,
 "" , "" , "" , "" , "called" , "total" , "children");
    FUNC_1( "\n" );
}
