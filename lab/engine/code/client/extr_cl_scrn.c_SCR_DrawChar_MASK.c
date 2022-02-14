
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int charSetShader; } ;
struct TYPE_3__ {int (* DrawStretchPic ) (float,float,float,float,float,float,float,float,int ) ;} ;


 int FUNC_0 (float*,float*,float*,float*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (float,float,float,float,float,float,float,float,int ) ;

__attribute__((used)) static void FUNC_2( int VAR_2, int VAR_3, float VAR_4, int VAR_5 ) {
 int VAR_6, VAR_7;
 float VAR_8, VAR_9;
 float VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_5 &= 255;

 if ( VAR_5 == ' ' ) {
  return;
 }

 if ( VAR_3 < -VAR_4 ) {
  return;
 }

 VAR_10 = VAR_2;
 VAR_11 = VAR_3;
 VAR_12 = VAR_4;
 VAR_13 = VAR_4;
 FUNC_0( &VAR_10, &VAR_11, &VAR_12, &VAR_13 );

 VAR_6 = VAR_5>>4;
 VAR_7 = VAR_5&15;

 VAR_8 = VAR_6*0.0625;
 VAR_9 = VAR_7*0.0625;
 VAR_4 = 0.0625;

 VAR_1.DrawStretchPic( VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_9, VAR_8,
        VAR_9 + VAR_4, VAR_8 + VAR_4,
        VAR_0.charSetShader );
}
