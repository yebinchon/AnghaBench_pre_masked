
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* shaderRGBA; int radius; int origin; int reType; } ;
typedef TYPE_1__ refEntity_t ;
struct TYPE_7__ {float endTime; float startTime; float light; int * lightColor; TYPE_1__ refEntity; } ;
typedef TYPE_2__ localEntity_t ;
struct TYPE_8__ {float time; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ,float,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( localEntity_t *VAR_2 ) {
 refEntity_t VAR_3;
 float VAR_4;

 VAR_3 = VAR_2->refEntity;

 VAR_4 = ( VAR_2->endTime - VAR_1.time ) / ( float ) ( VAR_2->endTime - VAR_2->startTime );
 if ( VAR_4 > 1 ) {
  VAR_4 = 1.0;
 }

 VAR_3.shaderRGBA[0] = 0xff;
 VAR_3.shaderRGBA[1] = 0xff;
 VAR_3.shaderRGBA[2] = 0xff;
 VAR_3.shaderRGBA[3] = 0xff * VAR_4 * 0.33;

 VAR_3.reType = VAR_0;
 VAR_3.radius = 42 * ( 1.0 - VAR_4 ) + 30;

 FUNC_1( &VAR_3 );


 if ( VAR_2->light ) {
  float VAR_5;

  VAR_5 = (float)( VAR_1.time - VAR_2->startTime ) / ( VAR_2->endTime - VAR_2->startTime );
  if ( VAR_5 < 0.5 ) {
   VAR_5 = 1.0;
  } else {
   VAR_5 = 1.0 - ( VAR_5 - 0.5 ) * 2;
  }
  VAR_5 = VAR_2->light * VAR_5;
  FUNC_0(VAR_3.origin, VAR_5, VAR_2->lightColor[0], VAR_2->lightColor[1], VAR_2->lightColor[2] );
 }
}
