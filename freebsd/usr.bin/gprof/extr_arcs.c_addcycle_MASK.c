
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; struct TYPE_8__* next; TYPE_2__** list; } ;
typedef TYPE_1__ cltype ;
struct TYPE_9__ {int arc_flags; struct TYPE_9__* arc_next; int arc_cyclecnt; } ;
typedef TYPE_2__ arctype ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;

bool
FUNC_3(arctype **VAR_11, arctype **VAR_12)
{
    arctype **VAR_13;
    arctype **VAR_14;
    arctype **VAR_15;
    arctype **VAR_16;
    arctype *VAR_17;
    arctype *VAR_18;
    cltype *VAR_19;
    int VAR_20;

    VAR_20 = VAR_12 - VAR_11 + 1;
    if ( VAR_20 <= 1 )
 return( VAR_4 );
    for ( VAR_13 = VAR_11 , VAR_17 = *VAR_13 ; VAR_13 <= VAR_12 ; VAR_13++ ) {
 if ( *VAR_13 > VAR_17 )
     continue;
 VAR_17 = *VAR_13;
 VAR_14 = VAR_13;
    }
    for ( VAR_19 = VAR_7 ; VAR_19 ; VAR_19 = VAR_19 -> next ) {
 if ( VAR_19 -> size != VAR_20 )
     continue;
 VAR_15 = VAR_14;
 VAR_16 = &VAR_19 -> list[ VAR_20 ];
 for ( VAR_13 = VAR_19 -> list ; VAR_13 < VAR_16 ; VAR_13++ ) {
     if ( *VAR_15++ != *VAR_13 )
  break;
     if ( VAR_15 > VAR_12 )
  VAR_15 = VAR_11;
 }
 if ( VAR_13 == VAR_16 ) {



     return( VAR_4 );
 }
    }
    VAR_19 = (cltype *)
 FUNC_0( 1 , sizeof ( cltype ) + ( VAR_20 - 1 ) * sizeof( arctype * ) );
    if ( VAR_19 == ((void*)0) ) {
 FUNC_2( "no room for %zu bytes of subcycle storage" ,
     sizeof ( cltype ) + ( VAR_20 - 1 ) * sizeof( arctype * ) );
 return( VAR_1 );
    }
    VAR_15 = VAR_14;
    VAR_16 = &VAR_19 -> list[ VAR_20 ];
    for ( VAR_13 = VAR_19 -> list ; VAR_13 < VAR_16 ; VAR_13++ ) {
 VAR_18 = *VAR_13 = *VAR_15++;
 if ( VAR_15 > VAR_12 )
     VAR_15 = VAR_11;
 VAR_18 -> arc_cyclecnt++;
 if ( ( VAR_18 -> arc_flags & VAR_2 ) == 0 ) {
     VAR_18 -> arc_flags |= VAR_2;
     VAR_18 -> arc_next = VAR_5;
     VAR_5 = VAR_18;
 }
    }
    VAR_19 -> size = VAR_20;
    VAR_19 -> next = VAR_7;
    VAR_7 = VAR_19;






    VAR_6++;
    if ( VAR_6 >= VAR_0 )
 return( VAR_1 );
    return( VAR_4 );
}
