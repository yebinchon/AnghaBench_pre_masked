
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ncall; int time; int childtime; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_2(register nltype *VAR_4)
{

    if ( VAR_3 == 0 && VAR_4 -> ncall == 0 && VAR_4 -> time == 0 &&
  VAR_4 -> childtime == 0 ) {
 return;
    }
    VAR_0 += VAR_4 -> time;
    if (VAR_1 >= 10000)
 FUNC_0( "%5.1f %10.3f %8.3f" ,
     100 * VAR_4 -> time / VAR_2 , VAR_0 / VAR_1 , VAR_4 -> time / VAR_1 );
    else
 FUNC_0( "%5.1f %10.2f %8.2f" ,
     100 * VAR_4 -> time / VAR_2 , VAR_0 / VAR_1 , VAR_4 -> time / VAR_1 );
    if ( VAR_4 -> ncall != 0 ) {
 if (VAR_1 >= 10000000)
     FUNC_0( " %8ld %8.0f %8.0f  " , VAR_4 -> ncall ,
  1e9 * VAR_4 -> time / VAR_1 / VAR_4 -> ncall ,
  1e9 * ( VAR_4 -> time + VAR_4 -> childtime ) / VAR_1 / VAR_4 -> ncall );
 else if (VAR_1 >= 10000)
     FUNC_0( " %8ld %8.0f %8.0f  " , VAR_4 -> ncall ,
  1e6 * VAR_4 -> time / VAR_1 / VAR_4 -> ncall ,
  1e6 * ( VAR_4 -> time + VAR_4 -> childtime ) / VAR_1 / VAR_4 -> ncall );
 else
     FUNC_0( " %8ld %8.2f %8.2f  " , VAR_4 -> ncall ,
  1000 * VAR_4 -> time / VAR_1 / VAR_4 -> ncall ,
  1000 * ( VAR_4 -> time + VAR_4 -> childtime ) / VAR_1 / VAR_4 -> ncall );
    } else if ( VAR_4 -> time != 0 || VAR_4 -> childtime != 0 ) {
 FUNC_0( " %8ld %7.2f%% %8.8s  " , VAR_4 -> ncall ,
     100 * VAR_4 -> time / ( VAR_4 -> time + VAR_4 -> childtime ) , "" );
    } else {
 FUNC_0( " %8.8s %8.8s %8.8s  " , "" , "" , "" );
    }
    FUNC_1( VAR_4 );
    FUNC_0( "\n" );
}
