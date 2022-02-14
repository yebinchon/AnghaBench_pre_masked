
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cnext; double time; double childtime; double propfraction; double propself; double propchild; int cycleno; int npropcall; scalar_t__ selfcalls; TYPE_2__* parents; struct TYPE_7__* cyclehead; scalar_t__ children; int toporder; scalar_t__ index; int printflag; scalar_t__ ncall; scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ nltype ;
struct TYPE_8__ {scalar_t__ arc_count; TYPE_1__* arc_parentp; struct TYPE_8__* arc_parentlist; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void)
{
    register nltype *VAR_8;
    register nltype *VAR_9;
    int VAR_10;
    nltype *VAR_11;
    arctype *VAR_12;




    VAR_5 = 0;
    for ( VAR_8 = VAR_6 ; VAR_8 < VAR_7 ; VAR_8++ ) {



 if ( VAR_8 -> cyclehead == VAR_8 && VAR_8 -> cnext != 0 ) {
     VAR_5 += 1;
 }
    }




    VAR_3 = (nltype *) FUNC_0( VAR_5 + 1 , sizeof( nltype ) );
    if ( VAR_3 == ((void*)0) )
 FUNC_1( 1 , "no room for %zu bytes of cycle headers" ,
     ( VAR_5 + 1 ) * sizeof( nltype ) );




    VAR_10 = 0;
    for ( VAR_8 = VAR_6 ; VAR_8 < VAR_7 ; VAR_8++ ) {
 if ( !( VAR_8 -> cyclehead == VAR_8 && VAR_8 -> cnext != 0 ) ) {
     continue;
 }
 VAR_10 += 1;
 VAR_9 = &VAR_3[VAR_10];
        VAR_9 -> name = 0;
        VAR_9 -> value = 0;
        VAR_9 -> time = 0.0;
        VAR_9 -> childtime = 0.0;
 VAR_9 -> ncall = 0;
 VAR_9 -> selfcalls = 0;
 VAR_9 -> propfraction = 0.0;
 VAR_9 -> propself = 0.0;
 VAR_9 -> propchild = 0.0;
 VAR_9 -> printflag = VAR_2;
 VAR_9 -> index = 0;
 VAR_9 -> toporder = VAR_1;
 VAR_9 -> cycleno = VAR_10;
 VAR_9 -> cyclehead = VAR_9;
 VAR_9 -> cnext = VAR_8;
 VAR_9 -> parents = 0;
 VAR_9 -> children = 0;
 for ( VAR_11 = VAR_8 ; VAR_11 ; VAR_11 = VAR_11 -> cnext ) {
     VAR_11 -> cycleno = VAR_10;
     VAR_11 -> cyclehead = VAR_9;
 }




 for ( VAR_11 = VAR_8 ; VAR_11 ; VAR_11 = VAR_11 -> cnext ) {
     for ( VAR_12=VAR_11->parents ; VAR_12 ; VAR_12=VAR_12->arc_parentlist ) {
  if ( VAR_12 -> arc_parentp == VAR_11 ) {
      continue;
  }
  if ( VAR_12 -> arc_parentp -> cycleno == VAR_10 ) {
      VAR_9 -> selfcalls += VAR_12 -> arc_count;
  } else {
      VAR_9 -> npropcall += VAR_12 -> arc_count;
  }
     }
 }
    }
}
