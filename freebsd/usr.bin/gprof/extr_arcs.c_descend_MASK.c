
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cycleno; int flags; TYPE_2__* children; } ;
typedef TYPE_1__ nltype ;
struct TYPE_9__ {int arc_flags; TYPE_1__* arc_childp; struct TYPE_9__* arc_childlist; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__**,TYPE_2__**) ;
 int VAR_5 ;
 int VAR_6 ;

bool
FUNC_1(nltype *VAR_7, arctype **VAR_8, arctype **VAR_9)
{
    arctype *VAR_10;
    bool VAR_11;

    for ( VAR_10 = VAR_7 -> children ; VAR_10 ; VAR_10 = VAR_10 -> arc_childlist ) {



 if ( VAR_10 -> arc_childp -> cycleno != VAR_7 -> cycleno
     || ( VAR_10 -> arc_childp -> flags & VAR_4 )
     || ( VAR_10 -> arc_flags & VAR_1 ) )
     continue;



 *VAR_9 = VAR_10;
 if ( VAR_10 -> arc_childp -> flags & VAR_0 ) {
     if ( FUNC_0( VAR_8 , VAR_9 ) == VAR_2 )
  return( VAR_2 );
     continue;
 }
 VAR_10 -> arc_childp -> flags |= VAR_4;
 VAR_11 = FUNC_1( VAR_10 -> arc_childp , VAR_8 , VAR_9 + 1 );
 VAR_10 -> arc_childp -> flags &= ~VAR_4;
 if ( VAR_11 == VAR_2 )
     return( VAR_2 );
    }
    return( VAR_3 );
}
