
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; scalar_t__ portalvis; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_6__ {int merged; int numportals; TYPE_1__** portals; } ;
typedef TYPE_2__ leaf_t ;
typedef int byte ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (scalar_t__,int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void FUNC_5( int VAR_12 ){
 leaf_t *VAR_13;
 byte VAR_14[VAR_1 / 8];
 byte VAR_15[VAR_0 / 8];
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;
 vportal_t *VAR_20;
 int VAR_21;



 VAR_19 = VAR_12;
 while ( VAR_6[VAR_19].merged >= 0 )
  VAR_19 = VAR_6[VAR_19].merged;

 FUNC_4( VAR_14, 0, VAR_7 );
 VAR_13 = &VAR_6[VAR_19];
 for ( VAR_16 = 0; VAR_16 < VAR_13->numportals; VAR_16++ )
 {
  VAR_20 = VAR_13->portals[VAR_16];
  if ( VAR_20->removed ) {
   continue;
  }

  if ( VAR_20->status != VAR_10 ) {
   FUNC_0( "portal not done" );
  }
  for ( VAR_17 = 0 ; VAR_17 < VAR_8 ; VAR_17++ )
   ( (long *)VAR_14 )[VAR_17] |= ( (long *)VAR_20->portalvis )[VAR_17];
  VAR_21 = VAR_20 - VAR_9;
  VAR_14[VAR_21 >> 3] |= 1 << ( VAR_21 & 7 );
 }

 FUNC_4( VAR_15, 0, VAR_5 );

 VAR_15[VAR_19 >> 3] |= ( 1 << ( VAR_19 & 7 ) );

 VAR_18 = FUNC_1( VAR_14, VAR_15 );






 VAR_18++;

 VAR_11 += VAR_18;

 FUNC_2( VAR_2,"cluster %4i : %4i visible\n", VAR_12, VAR_18 );

 FUNC_3( VAR_4 + VAR_3 + VAR_12 * VAR_5, VAR_15, VAR_5 );
}
