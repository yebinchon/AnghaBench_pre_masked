
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int fov_x; int fov_y; float x; float y; float width; float height; int time; int viewaxis; int rdflags; int renderfx; void* customSkin; void* hModel; int origin; int axis; } ;
typedef TYPE_1__ refdef_t ;
typedef int refdef ;
typedef TYPE_1__ refEntity_t ;
typedef void* qhandle_t ;
typedef int ent ;
struct TYPE_12__ {int time; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int integer; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (float*,float*,float*,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8( float VAR_5, float VAR_6, float VAR_7, float VAR_8, qhandle_t VAR_9, qhandle_t VAR_10, vec3_t VAR_11, vec3_t VAR_12 ) {
 refdef_t VAR_13;
 refEntity_t VAR_14;

 if ( !VAR_3.integer || !VAR_4.integer ) {
  return;
 }

 FUNC_2( &VAR_5, &VAR_6, &VAR_7, &VAR_8 );

 FUNC_4( &VAR_13, 0, sizeof( VAR_13 ) );

 FUNC_4( &VAR_14, 0, sizeof( VAR_14 ) );
 FUNC_0( VAR_12, VAR_14.axis );
 FUNC_3( VAR_11, VAR_14.origin );
 VAR_14.hModel = VAR_9;
 VAR_14.customSkin = VAR_10;
 VAR_14.renderfx = VAR_1;

 VAR_13.rdflags = VAR_0;

 FUNC_1( VAR_13.viewaxis );

 VAR_13.fov_x = 30;
 VAR_13.fov_y = 30;

 VAR_13.x = VAR_5;
 VAR_13.y = VAR_6;
 VAR_13.width = VAR_7;
 VAR_13.height = VAR_8;

 VAR_13.time = VAR_2.time;

 FUNC_6();
 FUNC_5( &VAR_14 );
 FUNC_7( &VAR_13 );
}
