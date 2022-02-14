
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cycleno; int npropcall; TYPE_2__* parents; struct TYPE_6__* cyclehead; } ;
typedef TYPE_1__ nltype ;
struct TYPE_7__ {int arc_flags; double arc_time; double arc_childtime; int arc_count; TYPE_1__* arc_parentp; struct TYPE_7__* arc_parentlist; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(nltype *VAR_2)
{
    nltype *VAR_3;
    arctype *VAR_4;
    nltype *VAR_5;

    if ( VAR_2 -> cyclehead != 0 ) {
 VAR_5 = VAR_2 -> cyclehead;
    } else {
 VAR_5 = VAR_2;
    }
    if ( VAR_2 -> parents == 0 ) {
 FUNC_0( "%6.6s %5.5s %7.7s %11.11s %7.7s %7.7s     <spontaneous>\n" ,
  "" , "" , "" , "" , "" , "" );
 return;
    }
    FUNC_2( VAR_2 );
    for ( VAR_4 = VAR_2 -> parents ; VAR_4 ; VAR_4 = VAR_4 -> arc_parentlist ) {
 VAR_3 = VAR_4 -> arc_parentp;
 if ( VAR_2 == VAR_3 || ( VAR_4 -> arc_flags & VAR_0 ) ||
      ( VAR_2->cycleno != 0 && VAR_3->cycleno == VAR_2->cycleno ) ) {



     FUNC_0( "%6.6s %5.5s %7.7s %11.11s %7ld %7.7s     " ,
      "" , "" , "" , "" ,
      VAR_4 -> arc_count , "" );
     FUNC_1( VAR_3 );
     FUNC_0( "\n" );
 } else {



     FUNC_0( "%6.6s %5.5s %7.2f %11.2f %7ld/%-7ld     " ,
      "" , "" ,
      VAR_4 -> arc_time / VAR_1 , VAR_4 -> arc_childtime / VAR_1 ,
      VAR_4 -> arc_count , VAR_5 -> npropcall );
     FUNC_1( VAR_3 );
     FUNC_0( "\n" );
 }
    }
}
