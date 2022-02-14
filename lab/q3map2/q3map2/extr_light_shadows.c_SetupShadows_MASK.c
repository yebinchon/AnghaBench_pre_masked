
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* si; } ;
typedef TYPE_1__ surfaceInfo_t ;
struct TYPE_9__ {int contents; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_10__ {scalar_t__ cluster; struct TYPE_10__* next; } ;
typedef TYPE_3__ light_t ;
typedef int dsurface_t ;
struct TYPE_11__ {int numLeafSurfaces; int firstLeafSurface; int cluster; } ;
typedef TYPE_4__ dleaf_t ;
typedef int byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__* VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* FUNC_3 (int) ;
 TYPE_1__* VAR_9 ;

void FUNC_4( void ){
 int VAR_10, VAR_11, VAR_12;
 light_t *VAR_13;
 dleaf_t *VAR_14;
 dsurface_t *VAR_15;
 surfaceInfo_t *VAR_16;
 shaderInfo_t *VAR_17;
 byte *VAR_18;



 if ( VAR_5 == ((void*)0) ) {
  return;
 }


 FUNC_1( VAR_1, "--- SetupShadows ---\n" );


 VAR_18 = FUNC_3( VAR_6 / 8 + 1 );


 for ( VAR_13 = VAR_5; VAR_13 != ((void*)0); VAR_13 = VAR_13->next )
 {

  if ( VAR_13->cluster < 0 ) {
   continue;
  }


  FUNC_2( VAR_18, 0, VAR_6 / 8 + 1 );


  for ( VAR_10 = 0, VAR_14 = VAR_2; VAR_10 < VAR_7; VAR_10++, VAR_14++ )
  {

   if ( FUNC_0( VAR_13->cluster, VAR_14->cluster ) == VAR_8 ) {
    continue;
   }


   for ( VAR_11 = 0; VAR_11 < VAR_14->numLeafSurfaces; VAR_11++ )
   {

    VAR_12 = VAR_3[ VAR_14->firstLeafSurface + VAR_11 ];
    if ( VAR_18[ VAR_12 >> 3 ] & ( 1 << ( VAR_12 & 7 ) ) ) {
     continue;
    }
    VAR_18[ VAR_12 >> 3 ] |= ( 1 << ( VAR_12 & 7 ) );


    VAR_15 = &VAR_4[ VAR_12 ];
    VAR_16 = &VAR_9[ VAR_12 ];
    VAR_17 = VAR_16->si;


    if ( VAR_17->contents & VAR_0 ) {
     continue;
    }
   }
  }
 }
}
