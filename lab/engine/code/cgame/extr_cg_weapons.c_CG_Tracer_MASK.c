
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_11__ {double* xyz; int* st; int* modulate; } ;
typedef TYPE_3__ polyVert_t ;
struct TYPE_9__ {double** viewaxis; } ;
struct TYPE_15__ {TYPE_1__ refdef; } ;
struct TYPE_14__ {float value; } ;
struct TYPE_13__ {double value; } ;
struct TYPE_10__ {int tracerSound; int tracerShader; } ;
struct TYPE_12__ {TYPE_2__ media; } ;


 int VAR_0 ;
 double FUNC_0 (double*,double*) ;
 int VAR_1 ;
 int FUNC_1 (double*,double,double*,double*) ;
 float FUNC_2 (double*) ;
 int FUNC_3 (double*,double,double*) ;
 int FUNC_4 (double*,double*,double*) ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 float FUNC_5 () ;
 int FUNC_6 (int ,int,TYPE_3__*) ;
 int FUNC_7 (double*,int ,int ,int ) ;

void FUNC_8( vec3_t VAR_6, vec3_t VAR_7 ) {
 vec3_t VAR_8, VAR_9;
 polyVert_t VAR_10[4];
 vec3_t VAR_11;
 float VAR_12, VAR_13, VAR_14;
 vec3_t VAR_15, VAR_16;
 vec3_t VAR_17;


 FUNC_4( VAR_7, VAR_6, VAR_8 );
 VAR_12 = FUNC_2( VAR_8 );


 if ( VAR_12 < 100 ) {
  return;
 }
 VAR_13 = 50 + FUNC_5() * (VAR_12 - 60);
 VAR_14 = VAR_13 + VAR_3.value;
 if ( VAR_14 > VAR_12 ) {
  VAR_14 = VAR_12;
 }
 FUNC_1( VAR_6, VAR_13, VAR_8, VAR_15 );
 FUNC_1( VAR_6, VAR_14, VAR_8, VAR_16 );

 VAR_11[0] = FUNC_0( VAR_8, VAR_2.refdef.viewaxis[1] );
 VAR_11[1] = FUNC_0( VAR_8, VAR_2.refdef.viewaxis[2] );

 FUNC_3( VAR_2.refdef.viewaxis[1], VAR_11[1], VAR_9 );
 FUNC_1( VAR_9, -VAR_11[0], VAR_2.refdef.viewaxis[2], VAR_9 );
 FUNC_2( VAR_9 );

 FUNC_1( VAR_16, VAR_4.value, VAR_9, VAR_10[0].xyz );
 VAR_10[0].st[0] = 0;
 VAR_10[0].st[1] = 1;
 VAR_10[0].modulate[0] = 255;
 VAR_10[0].modulate[1] = 255;
 VAR_10[0].modulate[2] = 255;
 VAR_10[0].modulate[3] = 255;

 FUNC_1( VAR_16, -VAR_4.value, VAR_9, VAR_10[1].xyz );
 VAR_10[1].st[0] = 1;
 VAR_10[1].st[1] = 0;
 VAR_10[1].modulate[0] = 255;
 VAR_10[1].modulate[1] = 255;
 VAR_10[1].modulate[2] = 255;
 VAR_10[1].modulate[3] = 255;

 FUNC_1( VAR_15, -VAR_4.value, VAR_9, VAR_10[2].xyz );
 VAR_10[2].st[0] = 1;
 VAR_10[2].st[1] = 1;
 VAR_10[2].modulate[0] = 255;
 VAR_10[2].modulate[1] = 255;
 VAR_10[2].modulate[2] = 255;
 VAR_10[2].modulate[3] = 255;

 FUNC_1( VAR_15, VAR_4.value, VAR_9, VAR_10[3].xyz );
 VAR_10[3].st[0] = 0;
 VAR_10[3].st[1] = 0;
 VAR_10[3].modulate[0] = 255;
 VAR_10[3].modulate[1] = 255;
 VAR_10[3].modulate[2] = 255;
 VAR_10[3].modulate[3] = 255;

 FUNC_6( VAR_5.media.tracerShader, 4, VAR_10 );

 VAR_17[0] = ( VAR_15[0] + VAR_16[0] ) * 0.5;
 VAR_17[1] = ( VAR_15[1] + VAR_16[1] ) * 0.5;
 VAR_17[2] = ( VAR_15[2] + VAR_16[2] ) * 0.5;


 FUNC_7( VAR_17, VAR_1, VAR_0, VAR_5.media.tracerSound );

}
