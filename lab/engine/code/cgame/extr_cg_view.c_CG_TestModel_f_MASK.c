
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_5__ {int frame; int axis; int origin; int hModel; scalar_t__ oldframe; int backlerp; } ;
struct TYPE_4__ {int * viewaxis; int vieworg; } ;
struct TYPE_6__ {TYPE_2__ testModelEntity; scalar_t__* refdefViewAngles; TYPE_1__ refdef; int testModelName; int testGun; } ;


 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 size_t VAR_2 ;
 int FUNC_4 (int ,int,int ,int ) ;
 size_t VAR_3 ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

void FUNC_9 (void) {
 vec3_t VAR_6;

 VAR_4.testGun = VAR_5;
 FUNC_6( &VAR_4.testModelEntity, 0, sizeof(VAR_4.testModelEntity) );
 if ( FUNC_7() < 2 ) {
  return;
 }

 FUNC_3 (VAR_4.testModelName, FUNC_1( 1 ), VAR_0 );
 VAR_4.testModelEntity.hModel = FUNC_8( VAR_4.testModelName );

 if ( FUNC_7() == 3 ) {
  VAR_4.testModelEntity.backlerp = FUNC_5( FUNC_1( 2 ) );
  VAR_4.testModelEntity.frame = 1;
  VAR_4.testModelEntity.oldframe = 0;
 }
 if (! VAR_4.testModelEntity.hModel ) {
  FUNC_2( "Can't register model\n" );
  return;
 }

 FUNC_4( VAR_4.refdef.vieworg, 100, VAR_4.refdef.viewaxis[0], VAR_4.testModelEntity.origin );

 VAR_6[VAR_1] = 0;
 VAR_6[VAR_3] = 180 + VAR_4.refdefViewAngles[1];
 VAR_6[VAR_2] = 0;

 FUNC_0( VAR_6, VAR_4.testModelEntity.axis );
}
