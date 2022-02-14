
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* children; } ;
typedef TYPE_1__ nltype ;
struct TYPE_11__ {int arc_flags; TYPE_1__* arc_childp; struct TYPE_11__* arc_childlist; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(nltype *VAR_3)
{
    arctype *VAR_4;
    if ( FUNC_2( VAR_3 ) ) {
 return;
    }



    if ( FUNC_0( VAR_3 ) ) {
 FUNC_1( VAR_3 );
 return;
    }



    FUNC_4( VAR_3 );



    for ( VAR_4 = VAR_3 -> children ; VAR_4 ; VAR_4 = VAR_4 -> arc_childlist ) {
     if ( VAR_4 -> arc_flags & VAR_0 )
  continue;
     FUNC_7( VAR_4 -> arc_childp );
    }



    FUNC_3( VAR_3 );
}
