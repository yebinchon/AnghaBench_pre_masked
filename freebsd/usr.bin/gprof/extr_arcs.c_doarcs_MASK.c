
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {double childtime; double propfraction; double propself; double propchild; scalar_t__ toporder; long index; scalar_t__ cnext; struct TYPE_15__* cyclehead; scalar_t__ cycleno; int printflag; int ncall; int npropcall; scalar_t__ selfcalls; } ;
typedef TYPE_1__ nltype ;
struct TYPE_16__ {scalar_t__ arc_count; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (long,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 long VAR_8 ;
 TYPE_1__* VAR_9 ;
 long VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__**,long,int,int ) ;
 int VAR_12 ;
 TYPE_1__** VAR_13 ;
 int VAR_14 ;

nltype **
FUNC_13(void)
{
    nltype *VAR_15, **VAR_16;
    arctype *VAR_17;
    long VAR_18;
    long VAR_19;







    for ( VAR_15 = VAR_9 ; VAR_15 < VAR_11 ; VAR_15++ ) {
 VAR_15 -> childtime = 0.0;
 VAR_17 = FUNC_0( VAR_15 , VAR_15 );
 if ( VAR_17 != 0 ) {
     VAR_15 -> ncall -= VAR_17 -> arc_count;
     VAR_15 -> selfcalls = VAR_17 -> arc_count;
 } else {
     VAR_15 -> selfcalls = 0;
 }
 VAR_15 -> npropcall = VAR_15 -> ncall;
 VAR_15 -> propfraction = 0.0;
 VAR_15 -> propself = 0.0;
 VAR_15 -> propchild = 0.0;
 VAR_15 -> printflag = VAR_4;
 VAR_15 -> toporder = VAR_3;
 VAR_15 -> cycleno = 0;
 VAR_15 -> cyclehead = VAR_15;
 VAR_15 -> cnext = 0;
    }
    for ( VAR_19 = 1 ; ; VAR_19++ ) {





 for ( FUNC_5() , VAR_15 = VAR_9 ; VAR_15 < VAR_11 ; VAR_15++ ) {
     if ( VAR_15 -> toporder == VAR_3 ) {
  FUNC_4( VAR_15 );
     }
 }



 FUNC_3();



 if ( ! VAR_1 )
     break;
 if ( VAR_19 == 1 ) {
     FUNC_10( "\n\n%s %s\n%s %d:\n" ,
  "The following arcs were deleted" ,
  "from the propagation calculation" ,
  "to reduce the maximum cycle size to", VAR_6 );
 }
 if ( FUNC_2() )
     break;
 FUNC_9 ( VAR_5 );
 VAR_8 = 0;
 for ( VAR_15 = VAR_9 ; VAR_15 < VAR_11 ; VAR_15++ ) {
     VAR_15 -> toporder = VAR_3;
     VAR_15 -> cycleno = 0;
     VAR_15 -> cyclehead = VAR_15;
     VAR_15 -> cnext = 0;
 }
    }
    if ( VAR_19 > 1 ) {
 FUNC_10( "\f\n" );
    } else {
 FUNC_10( "\tNone\n\n" );
    }



    VAR_13 = (nltype **) FUNC_1( VAR_10 , sizeof(nltype *) );
    if ( VAR_13 == (nltype **) 0 )
 FUNC_8( 1 , "[doarcs] ran out of memory for topo sorting" );
    for ( VAR_18 = 0 ; VAR_18 < VAR_10 ; VAR_18 += 1 ) {
 VAR_13[ VAR_18 ] = &VAR_9[ VAR_18 ];
    }
    FUNC_12( VAR_13 , VAR_10 , sizeof(nltype *) , VAR_12 );
    FUNC_6();




    FUNC_7();





    VAR_16 = (nltype **) FUNC_1( VAR_10 + VAR_8 , sizeof(nltype *) );
    if ( VAR_16 == (nltype **) 0 )
 FUNC_8( 1 , "ran out of memory for sorting" );
    for ( VAR_18 = 0 ; VAR_18 < VAR_10 ; VAR_18++ ) {
 VAR_16[VAR_18] = &VAR_9[VAR_18];
    }
    for ( VAR_18 = 1 ; VAR_18 <= VAR_8 ; VAR_18++ ) {
 VAR_16[VAR_10+VAR_18-1] = &VAR_5[VAR_18];
    }
    FUNC_12( VAR_16 , VAR_10 + VAR_8 , sizeof(nltype *) , VAR_14 );
    for ( VAR_18 = 0 ; VAR_18 < VAR_10 + VAR_8 ; VAR_18++ ) {
 VAR_16[ VAR_18 ] -> index = VAR_18 + 1;
    }
    return( VAR_16 );
}
