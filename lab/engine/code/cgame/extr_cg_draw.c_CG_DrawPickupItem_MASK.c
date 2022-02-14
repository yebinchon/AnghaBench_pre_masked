
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int pickup_name; } ;
struct TYPE_9__ {int itemPickup; int itemPickupTime; TYPE_2__* snap; } ;
struct TYPE_8__ {int icon; } ;
struct TYPE_6__ {scalar_t__* stats; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,float) ;
 int FUNC_1 (int,int,int,int,int ) ;
 float* FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_4 (float*) ;

__attribute__((used)) static int FUNC_5( int VAR_6 ) {
 int VAR_7;
 float *VAR_8;

 if ( VAR_4.snap->ps.stats[VAR_2] <= 0 ) {
  return VAR_6;
 }

 VAR_6 -= VAR_1;

 VAR_7 = VAR_4.itemPickup;
 if ( VAR_7 ) {
  VAR_8 = FUNC_2( VAR_4.itemPickupTime, 3000 );
  if ( VAR_8 ) {
   FUNC_3( VAR_7 );
   FUNC_4( VAR_8 );
   FUNC_1( 8, VAR_6, VAR_1, VAR_1, VAR_5[ VAR_7 ].icon );
   FUNC_0( VAR_1 + 16, VAR_6 + (VAR_1/2 - VAR_0/2), VAR_3[ VAR_7 ].pickup_name, VAR_8[0] );
   FUNC_4( ((void*)0) );
  }
 }

 return VAR_6;
}
