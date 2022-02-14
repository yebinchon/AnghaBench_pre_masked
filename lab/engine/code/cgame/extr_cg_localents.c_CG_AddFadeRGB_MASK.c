
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float* shaderRGBA; } ;
typedef TYPE_1__ refEntity_t ;
struct TYPE_7__ {float endTime; float lifeRate; float* color; TYPE_1__ refEntity; } ;
typedef TYPE_2__ localEntity_t ;
struct TYPE_8__ {float time; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( localEntity_t *VAR_1 ) {
 refEntity_t *VAR_2;
 float VAR_3;

 VAR_2 = &VAR_1->refEntity;

 VAR_3 = ( VAR_1->endTime - VAR_0.time ) * VAR_1->lifeRate;
 VAR_3 *= 0xff;

 VAR_2->shaderRGBA[0] = VAR_1->color[0] * VAR_3;
 VAR_2->shaderRGBA[1] = VAR_1->color[1] * VAR_3;
 VAR_2->shaderRGBA[2] = VAR_1->color[2] * VAR_3;
 VAR_2->shaderRGBA[3] = VAR_1->color[3] * VAR_3;

 FUNC_0( VAR_2 );
}
