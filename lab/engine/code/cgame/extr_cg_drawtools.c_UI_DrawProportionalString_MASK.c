
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_6__ {int time; } ;
struct TYPE_4__ {int charsetProp; int charsetPropGlow; } ;
struct TYPE_5__ {TYPE_1__ media; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int,int,char const*,double*,float,int ) ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 float FUNC_1 (int) ;
 float FUNC_2 (char const*) ;

 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 double FUNC_3 (int) ;

void FUNC_4( int VAR_7, int VAR_8, const char* VAR_9, int VAR_10, vec4_t VAR_11 ) {
 vec4_t VAR_12;
 int VAR_13;
 float VAR_14;

 VAR_14 = FUNC_1( VAR_10 );

 switch( VAR_10 & VAR_2 ) {
  case 130:
   VAR_13 = FUNC_2( VAR_9 ) * VAR_14;
   VAR_7 -= VAR_13 / 2;
   break;

  case 128:
   VAR_13 = FUNC_2( VAR_9 ) * VAR_14;
   VAR_7 -= VAR_13;
   break;

  case 129:
  default:
   break;
 }

 if ( VAR_10 & VAR_1 ) {
  VAR_12[0] = VAR_12[1] = VAR_12[2] = 0;
  VAR_12[3] = VAR_11[3];
  FUNC_0( VAR_7+2, VAR_8+2, VAR_9, VAR_12, VAR_14, VAR_6.media.charsetProp );
 }

 if ( VAR_10 & VAR_3 ) {
  VAR_12[0] = VAR_11[0] * 0.8;
  VAR_12[1] = VAR_11[1] * 0.8;
  VAR_12[2] = VAR_11[2] * 0.8;
  VAR_12[3] = VAR_11[3];
  FUNC_0( VAR_7, VAR_8, VAR_9, VAR_12, VAR_14, VAR_6.media.charsetProp );
  return;
 }

 if ( VAR_10 & VAR_4 ) {
  VAR_12[0] = VAR_11[0] * 0.8;
  VAR_12[1] = VAR_11[1] * 0.8;
  VAR_12[2] = VAR_11[2] * 0.8;
  VAR_12[3] = VAR_11[3];
  FUNC_0( VAR_7, VAR_8, VAR_9, VAR_11, VAR_14, VAR_6.media.charsetProp );

  VAR_12[0] = VAR_11[0];
  VAR_12[1] = VAR_11[1];
  VAR_12[2] = VAR_11[2];
  VAR_12[3] = 0.5 + 0.5 * FUNC_3( VAR_5.time / VAR_0 );
  FUNC_0( VAR_7, VAR_8, VAR_9, VAR_12, VAR_14, VAR_6.media.charsetPropGlow );
  return;
 }

 FUNC_0( VAR_7, VAR_8, VAR_9, VAR_11, VAR_14, VAR_6.media.charsetProp );
}
