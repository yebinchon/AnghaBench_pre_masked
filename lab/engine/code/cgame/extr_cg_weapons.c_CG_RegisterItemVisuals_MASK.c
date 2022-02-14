
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void** models; int icon; scalar_t__ registered; } ;
typedef TYPE_1__ itemInfo_t ;
struct TYPE_7__ {scalar_t__ giType; scalar_t__* world_model; int giTag; int icon; } ;
typedef TYPE_2__ gitem_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_8 ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

void FUNC_5( int VAR_9 ) {
 itemInfo_t *VAR_10;
 gitem_t *VAR_11;

 if ( VAR_9 < 0 || VAR_9 >= VAR_6 ) {
  FUNC_0( "CG_RegisterItemVisuals: itemNum %d out of range [0-%d]", VAR_9, VAR_6-1 );
 }

 VAR_10 = &VAR_7[ VAR_9 ];
 if ( VAR_10->registered ) {
  return;
 }

 VAR_11 = &VAR_5[ VAR_9 ];

 FUNC_2( VAR_10, 0, sizeof( *VAR_10 ) );
 VAR_10->registered = VAR_8;

 VAR_10->models[0] = FUNC_3( VAR_11->world_model[0] );

 VAR_10->icon = FUNC_4( VAR_11->icon );

 if ( VAR_11->giType == VAR_4 ) {
  FUNC_1( VAR_11->giTag );
 }




 if ( VAR_11->giType == VAR_3 || VAR_11->giType == VAR_1 ||
  VAR_11->giType == VAR_0 || VAR_11->giType == VAR_2 ) {
  if ( VAR_11->world_model[1] ) {
   VAR_10->models[1] = FUNC_3( VAR_11->world_model[1] );
  }
 }
}
