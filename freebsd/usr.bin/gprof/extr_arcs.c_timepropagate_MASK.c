
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double propfraction; scalar_t__ cycleno; scalar_t__ toporder; scalar_t__ npropcall; double time; double childtime; double propchild; struct TYPE_5__* cyclehead; TYPE_2__* children; } ;
typedef TYPE_1__ nltype ;
struct TYPE_6__ {int arc_flags; scalar_t__ arc_count; double arc_time; double arc_childtime; TYPE_1__* arc_childp; struct TYPE_6__* arc_childlist; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;

void
FUNC_3(nltype *VAR_4)
{
    arctype *VAR_5;
    nltype *VAR_6;
    double VAR_7;
    double VAR_8;

    if ( VAR_4 -> propfraction == 0.0 ) {
 return;
    }



    for ( VAR_5 = VAR_4 -> children ; VAR_5 ; VAR_5 = VAR_5 -> arc_childlist ) {
 VAR_6 = VAR_5 -> arc_childp;
 if ( VAR_5 -> arc_flags & VAR_0 ) {
     continue;
 }
 if ( VAR_5 -> arc_count == 0 ) {
     continue;
 }
 if ( VAR_6 == VAR_4 ) {
     continue;
 }
 if ( VAR_6 -> propfraction == 0.0 ) {
     continue;
 }
 if ( VAR_6 -> cyclehead != VAR_6 ) {
     if ( VAR_4 -> cycleno == VAR_6 -> cycleno ) {
  continue;
     }
     if ( VAR_4 -> toporder <= VAR_6 -> toporder ) {
  FUNC_0( VAR_3 , "[propagate] toporder botches\n" );
     }
     VAR_6 = VAR_6 -> cyclehead;
 } else {
     if ( VAR_4 -> toporder <= VAR_6 -> toporder ) {
  FUNC_0( VAR_3 , "[propagate] toporder botches\n" );
  continue;
     }
 }
 if ( VAR_6 -> npropcall == 0 ) {
     continue;
 }



 VAR_5 -> arc_time = VAR_6 -> time
           * ( ( (double) VAR_5 -> arc_count ) /
        ( (double) VAR_6 -> npropcall ) );
 VAR_5 -> arc_childtime = VAR_6 -> childtime
           * ( ( (double) VAR_5 -> arc_count ) /
        ( (double) VAR_6 -> npropcall ) );
 VAR_7 = VAR_5 -> arc_time + VAR_5 -> arc_childtime;
 VAR_4 -> childtime += VAR_7;



 VAR_8 = VAR_4 -> propfraction * VAR_7;



 VAR_4 -> propchild += VAR_8;
 VAR_5 -> arc_time *= VAR_4 -> propfraction;
 VAR_5 -> arc_childtime *= VAR_4 -> propfraction;



 if ( VAR_4 -> cyclehead != VAR_4 ) {
     VAR_4 -> cyclehead -> childtime += VAR_7;
     VAR_4 -> cyclehead -> propchild += VAR_8;
 }
    }
}
