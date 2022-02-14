
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int picoShader_t ;
struct TYPE_10__ {int subMtlId; struct TYPE_10__* next; int * shader; } ;
typedef TYPE_1__ aseSubMaterial_t ;
struct TYPE_11__ {TYPE_1__* subMtls; } ;
typedef TYPE_2__ aseMaterial_t ;


 TYPE_2__* FUNC_0 (TYPE_2__**,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_2 (int,int) ;

__attribute__((used)) static aseSubMaterial_t* FUNC_3( aseMaterial_t **VAR_0, int VAR_1, int VAR_2, picoShader_t* VAR_3 ){
 aseMaterial_t *VAR_4 = FUNC_1( *VAR_0, VAR_1 );
 aseSubMaterial_t *VAR_5 = FUNC_2( 1, sizeof( aseSubMaterial_t ) );

 if ( !VAR_4 ) {
  VAR_4 = FUNC_0( VAR_0, VAR_1 );
 }

 VAR_5->shader = VAR_3;
 VAR_5->subMtlId = VAR_2;
 VAR_5->next = VAR_4->subMtls;
 VAR_4->subMtls = VAR_5;

 return VAR_5;
}
