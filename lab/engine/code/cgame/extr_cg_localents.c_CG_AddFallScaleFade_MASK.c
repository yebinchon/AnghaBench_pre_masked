
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {int* shaderRGBA; double radius; scalar_t__* origin; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_9__ {double* trDelta; scalar_t__* trBase; } ;
struct TYPE_12__ {float endTime; float lifeRate; int* color; double radius; TYPE_1__ pos; TYPE_3__ refEntity; } ;
typedef TYPE_4__ localEntity_t ;
struct TYPE_10__ {int vieworg; } ;
struct TYPE_13__ {float time; TYPE_2__ refdef; } ;


 int FUNC_0 (TYPE_4__*) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;
 TYPE_6__ VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( localEntity_t *VAR_1 ) {
 refEntity_t *VAR_2;
 float VAR_3;
 vec3_t VAR_4;
 float VAR_5;

 VAR_2 = &VAR_1->refEntity;


 VAR_3 = ( VAR_1->endTime - VAR_0.time ) * VAR_1->lifeRate;

 VAR_2->shaderRGBA[3] = 0xff * VAR_3 * VAR_1->color[3];

 VAR_2->origin[2] = VAR_1->pos.trBase[2] - ( 1.0 - VAR_3 ) * VAR_1->pos.trDelta[2];

 VAR_2->radius = VAR_1->radius * ( 1.0 - VAR_3 ) + 16;



 FUNC_2( VAR_2->origin, VAR_0.refdef.vieworg, VAR_4 );
 VAR_5 = FUNC_1( VAR_4 );
 if ( VAR_5 < VAR_1->radius ) {
  FUNC_0( VAR_1 );
  return;
 }

 FUNC_3( VAR_2 );
}
