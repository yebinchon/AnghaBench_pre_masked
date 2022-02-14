
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int trBase; } ;
struct TYPE_11__ {int otherEntityNum; int eventParm; int origin2; TYPE_3__ pos; } ;
typedef TYPE_4__ entityState_t ;
struct TYPE_13__ {int time; } ;
struct TYPE_9__ {int shotgunSmokePuffShader; } ;
struct TYPE_8__ {scalar_t__ hardwareType; } ;
struct TYPE_12__ {TYPE_2__ media; TYPE_1__ glconfig; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int,float,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;

void FUNC_8( entityState_t *VAR_5 ) {
 vec3_t VAR_6;
 int VAR_7;

 FUNC_7( VAR_5->origin2, VAR_5->pos.trBase, VAR_6 );
 FUNC_4( VAR_6 );
 FUNC_5( VAR_6, 32, VAR_6 );
 FUNC_3( VAR_5->pos.trBase, VAR_6, VAR_6 );
 if ( VAR_4.glconfig.hardwareType != VAR_1 ) {

  vec3_t VAR_8;

  VAR_7 = FUNC_0( VAR_5->pos.trBase, 0 );
  if ( !( VAR_7 & VAR_0 ) ) {
   FUNC_6( VAR_8, 0, 0, 8 );
   FUNC_2( VAR_6, VAR_8, 32, 1, 1, 1, 0.33f, 900, VAR_3.time, 0, VAR_2, VAR_4.media.shotgunSmokePuffShader );
  }
 }
 FUNC_1( VAR_5->pos.trBase, VAR_5->origin2, VAR_5->eventParm, VAR_5->otherEntityNum );
}
