
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cycleno; TYPE_1__* cyclehead; TYPE_3__* children; } ;
typedef TYPE_2__ nltype ;
struct TYPE_9__ {int arc_flags; double arc_time; double arc_childtime; int arc_count; TYPE_2__* arc_childp; struct TYPE_9__* arc_childlist; } ;
typedef TYPE_3__ arctype ;
struct TYPE_7__ {int npropcall; } ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(nltype *VAR_2)
{
    nltype *VAR_3;
    arctype *VAR_4;

    FUNC_2( VAR_2 );
    VAR_4 = VAR_2 -> children;
    for ( VAR_4 = VAR_2 -> children ; VAR_4 ; VAR_4 = VAR_4 -> arc_childlist ) {
 VAR_3 = VAR_4 -> arc_childp;
 if ( VAR_3 == VAR_2 || ( VAR_4 -> arc_flags & VAR_0 ) ||
     ( VAR_3->cycleno != 0 && VAR_3->cycleno == VAR_2->cycleno ) ) {



     FUNC_0( "%6.6s %5.5s %7.7s %11.11s %7ld %7.7s     " ,
      "" , "" , "" , "" , VAR_4 -> arc_count , "" );
     FUNC_1( VAR_3 );
     FUNC_0( "\n" );
 } else {



     FUNC_0( "%6.6s %5.5s %7.2f %11.2f %7ld/%-7ld     " ,
      "" , "" ,
      VAR_4 -> arc_time / VAR_1 , VAR_4 -> arc_childtime / VAR_1 ,
      VAR_4 -> arc_count , VAR_3 -> cyclehead -> npropcall );
     FUNC_1( VAR_3 );
     FUNC_0( "\n" );
 }
    }
}
