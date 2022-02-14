
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ deviceSupportsGamma; } ;
struct TYPE_13__ {float value; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int (* Cvar_Set ) (char*,char*) ;} ;
struct TYPE_8__ {int overbrightBits; float identityLight; int identityLightByte; } ;


 int FUNC_0 (int*,int*,int*) ;
 TYPE_7__ VAR_0 ;
 int FUNC_1 (int,float) ;
 TYPE_6__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_8 ;

void FUNC_5( void ) {
 int VAR_9, VAR_10;
 float VAR_11;
 int VAR_12;


 VAR_8.overbrightBits = VAR_4->integer;


 if ( VAR_8.overbrightBits > 2 ) {
  VAR_8.overbrightBits = 2;
 } else if ( VAR_8.overbrightBits < 0 ) {
  VAR_8.overbrightBits = 0;
 }


 if ( VAR_8.overbrightBits > VAR_3->integer ) {
  VAR_8.overbrightBits = VAR_3->integer;
 }

 VAR_8.identityLight = 1.0f / ( 1 << VAR_8.overbrightBits );
 VAR_8.identityLightByte = 255 * VAR_8.identityLight;


 if ( VAR_2->value <= 1 ) {
  VAR_5.Cvar_Set( "r_intensity", "1" );
 }

 if ( VAR_1->value < 0.5f ) {
  VAR_5.Cvar_Set( "r_gamma", "0.5" );
 } else if ( VAR_1->value > 3.0f ) {
  VAR_5.Cvar_Set( "r_gamma", "3.0" );
 }

 VAR_11 = VAR_1->value;

 for ( VAR_9 = 0; VAR_9 < 256; VAR_9++ ) {
  if ( VAR_11 == 1 ) {
   VAR_12 = VAR_9;
  } else {
   VAR_12 = 255 * FUNC_1 ( VAR_9/255.0f, 1.0f / VAR_11 ) + 0.5f;
  }

  if (VAR_12 < 0) {
   VAR_12 = 0;
  }
  if (VAR_12 > 255) {
   VAR_12 = 255;
  }
  VAR_6[VAR_9] = VAR_12;
 }

 for (VAR_9=0 ; VAR_9<256 ; VAR_9++) {
  VAR_10 = VAR_9 * VAR_2->value;
  if (VAR_10 > 255) {
   VAR_10 = 255;
  }
  VAR_7[VAR_9] = VAR_10;
 }

 if ( VAR_0.deviceSupportsGamma )
 {
  FUNC_0( VAR_6, VAR_6, VAR_6 );
 }
}
