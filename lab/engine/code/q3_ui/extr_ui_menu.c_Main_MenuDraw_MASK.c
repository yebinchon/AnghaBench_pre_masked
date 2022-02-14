
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {double member_0; int member_3; int member_2; int member_1; } ;
typedef TYPE_1__ vec4_t ;
typedef int* vec3_t ;
struct TYPE_13__ {float x; float y; float width; float height; int fov_x; double fov_y; int* origin; int* lightingOrigin; int renderfx; int* oldorigin; int hModel; int axis; scalar_t__ time; int viewaxis; int rdflags; } ;
typedef TYPE_2__ refdef_t ;
typedef int refdef ;
typedef TYPE_2__ refEntity_t ;
typedef int ent ;
struct TYPE_16__ {int errorMessage; } ;
struct TYPE_15__ {int menu; int bannerModel; } ;
struct TYPE_14__ {scalar_t__ demoversion; scalar_t__ realtime; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (float*,float*,float*,float*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int,char*,int,TYPE_1__) ;
 int FUNC_5 (int,int,int,int,int ,int,int ) ;
 int FUNC_6 (int,int,char*,int,TYPE_1__) ;
 int VAR_5 ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (int*,int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int VAR_6 ;
 TYPE_8__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 double FUNC_10 (float) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_4__ VAR_9 ;

__attribute__((used)) static void FUNC_15( void ) {
 refdef_t VAR_10;
 refEntity_t VAR_11;
 vec3_t VAR_12;
 vec3_t VAR_13;
 float VAR_14;
 float VAR_15, VAR_16, VAR_17, VAR_18;
 vec4_t VAR_19 = {0.5, 0, 0, 1};



 FUNC_9( &VAR_10, 0, sizeof( VAR_10 ) );

 VAR_10.rdflags = VAR_0;

 FUNC_1( VAR_10.viewaxis );

 VAR_15 = 0;
 VAR_16 = 0;
 VAR_17 = 640;
 VAR_18 = 120;
 FUNC_3( &VAR_15, &VAR_16, &VAR_17, &VAR_18 );
 VAR_10.x = VAR_15;
 VAR_10.y = VAR_16;
 VAR_10.width = VAR_17;
 VAR_10.height = VAR_18;

 VAR_14 = 0;
 VAR_10.fov_x = 60 + VAR_14;
 VAR_10.fov_y = 19.6875 + VAR_14;

 VAR_10.time = VAR_9.realtime;

 VAR_12[0] = 300;
 VAR_12[1] = 0;
 VAR_12[2] = -32;

 FUNC_13();



 FUNC_9( &VAR_11, 0, sizeof(VAR_11) );

 VAR_14 = 5.0 * FUNC_10( (float)VAR_9.realtime / 5000 );
 FUNC_8( VAR_13, 0, 180 + VAR_14, 0 );
 FUNC_0( VAR_13, VAR_11.axis );
 VAR_11.hModel = VAR_8.bannerModel;
 FUNC_7( VAR_12, VAR_11.origin );
 FUNC_7( VAR_12, VAR_11.lightingOrigin );
 VAR_11.renderfx = VAR_1 | VAR_2;
 FUNC_7( VAR_11.origin, VAR_11.oldorigin );

 FUNC_12( &VAR_11 );

 FUNC_14( &VAR_10 );

 if (FUNC_11(VAR_7.errorMessage))
 {
  FUNC_5( 320, 192, 600, 20, VAR_7.errorMessage, VAR_3|VAR_5|VAR_4, VAR_6 );
 }
 else
 {

  FUNC_2( &VAR_8.menu );
 }

 if (VAR_9.demoversion) {
  FUNC_4( 320, 372, "DEMO      FOR MATURE AUDIENCES      DEMO", VAR_3|VAR_5, VAR_19 );
  FUNC_6( 320, 400, "Quake III Arena(c) 1999-2000, Id Software, Inc.  All Rights Reserved", VAR_3|VAR_5, VAR_19 );
 } else {
  FUNC_6( 320, 450, "Quake III Arena(c) 1999-2000, Id Software, Inc.  All Rights Reserved", VAR_3|VAR_5, VAR_19 );
 }
}
