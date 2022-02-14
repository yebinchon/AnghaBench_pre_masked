
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int* shaderRGBA; double radius; int origin; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_10__ {float endTime; float lifeRate; int* color; double radius; TYPE_2__ refEntity; } ;
typedef TYPE_3__ localEntity_t ;
struct TYPE_8__ {int vieworg; } ;
struct TYPE_11__ {float time; TYPE_1__ refdef; } ;


 int FUNC_0 (TYPE_3__*) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4( localEntity_t *VAR_1 ) {
 refEntity_t *VAR_2;
 float VAR_3;
 vec3_t VAR_4;
 float VAR_5;

 VAR_2 = &VAR_1->refEntity;


 VAR_3 = ( VAR_1->endTime - VAR_0.time ) * VAR_1->lifeRate;

 VAR_2->shaderRGBA[3] = 0xff * VAR_3 * VAR_1->color[3];
 VAR_2->radius = VAR_1->radius * ( 1.0 - VAR_3 ) + 8;



 FUNC_2( VAR_2->origin, VAR_0.refdef.vieworg, VAR_4 );
 VAR_5 = FUNC_1( VAR_4 );
 if ( VAR_5 < VAR_1->radius ) {
  FUNC_0( VAR_1 );
  return;
 }

 FUNC_3( VAR_2 );
}
