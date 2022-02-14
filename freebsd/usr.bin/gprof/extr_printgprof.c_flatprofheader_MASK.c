
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
     VAR_4 * VAR_0 );
    if ( VAR_5 > 0.0 ) {
 FUNC_1( " for %.2f%% of %.2f seconds\n\n" ,
  100.0/VAR_5 , VAR_5 / VAR_3 );
    } else {
 FUNC_1( " no time accumulated\n\n" );



 VAR_5 = 1.0;
    }
    FUNC_1( "%5.5s %10.10s %8.8s %8.8s %8.8s %8.8s  %-8.8s\n" ,
     "%  " , "cumulative" , "self  " , "" , "self  " , "total " , "" );
    FUNC_1( "%5.5s %10.10s %8.8s %8.8s %8.8s %8.8s  %-8.8s\n" ,
     "time" , "seconds " , "seconds" , "calls" ,
     VAR_3 >= 10000000 ? "ns/call" : VAR_3 >= 10000 ? "us/call" : "ms/call" ,
     VAR_3 >= 10000000 ? "ns/call" : VAR_3 >= 10000 ? "us/call" : "ms/call" ,
     "name" );
}
