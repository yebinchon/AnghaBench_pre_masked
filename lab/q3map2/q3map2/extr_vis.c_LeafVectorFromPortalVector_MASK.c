
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int leaf; } ;
typedef TYPE_1__ vportal_t ;
typedef int byte ;
struct TYPE_5__ {int merged; } ;


 int FUNC_0 (int*,int) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int FUNC_1( byte *VAR_4, byte *VAR_5 ){
 int VAR_6, VAR_7, VAR_8;
 vportal_t *VAR_9;
 int VAR_10;


 for ( VAR_6 = 0 ; VAR_6 < VAR_1 * 2 ; VAR_6++ )
 {
  if ( VAR_4[VAR_6 >> 3] & ( 1 << ( VAR_6 & 7 ) ) ) {
   VAR_9 = VAR_3 + VAR_6;
   VAR_5[VAR_9->leaf >> 3] |= ( 1 << ( VAR_9->leaf & 7 ) );
  }
 }

 for ( VAR_7 = 0; VAR_7 < VAR_2; VAR_7++ )
 {
  VAR_8 = VAR_7;
  while ( VAR_0[VAR_8].merged >= 0 )
   VAR_8 = VAR_0[VAR_8].merged;

  if ( VAR_5[VAR_8 >> 3] & ( 1 << ( VAR_8 & 7 ) ) ) {
   VAR_5[VAR_7 >> 3] |= ( 1 << ( VAR_7 & 7 ) );
  }
 }

 VAR_10 = FUNC_0( VAR_5, VAR_2 );

 return VAR_10;
}
