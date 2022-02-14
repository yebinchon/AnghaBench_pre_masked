
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int picoVec3_t ;
typedef int picoVec2_t ;
typedef int picoModel_t ;
typedef scalar_t__ picoIndex_t ;
typedef int picoColor_t ;
struct TYPE_12__ {int id; int normal; int xyz; } ;
typedef TYPE_1__ aseVertex_t ;
struct TYPE_13__ {int texcoord; } ;
typedef TYPE_2__ aseTexCoord_t ;
struct TYPE_14__ {int shader; } ;
typedef TYPE_3__ aseSubMaterial_t ;
typedef int aseMaterial_t ;
typedef TYPE_4__* aseFacesIter_t ;
struct TYPE_15__ {size_t* indices; scalar_t__ smoothingGroup; int subMaterialId; int materialId; } ;
typedef TYPE_4__ aseFace_t ;
struct TYPE_16__ {int color; } ;
typedef TYPE_6__ aseColor_t ;


 int FUNC_0 (int *,int **,int **,int,int **,int,int **,int ,scalar_t__*) ;
 TYPE_3__* FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2( picoModel_t* VAR_1, aseMaterial_t* VAR_2, aseVertex_t* VAR_3, aseTexCoord_t* VAR_4, aseColor_t* VAR_5, aseFace_t* VAR_6, int VAR_7 ){
 aseFacesIter_t VAR_8 = VAR_6, VAR_9 = VAR_6 + VAR_7;
 for (; VAR_8 != VAR_9; ++VAR_8 )
 {

  aseSubMaterial_t* VAR_10 = FUNC_1( VAR_2, ( *VAR_8 ).materialId, ( *VAR_8 ).subMaterialId );
  if ( VAR_10 == ((void*)0) ) {
   return;
  }

  {
   picoVec3_t* VAR_11[3];
   picoVec3_t* VAR_12[3];
   picoVec2_t* VAR_13[3];
   picoColor_t* VAR_14[3];
   picoIndex_t VAR_15[3];
   int VAR_16;

   for ( VAR_16 = 0 ; VAR_16 < 3 ; VAR_16++ )
   {
    VAR_11[VAR_16] = &VAR_3[( *VAR_8 ).indices[VAR_16]].xyz;
    VAR_12[VAR_16] = &VAR_3[( *VAR_8 ).indices[VAR_16]].normal;
    VAR_13[VAR_16] = &VAR_4[( *VAR_8 ).indices[VAR_16 + 3]].texcoord;

    if ( VAR_5 != ((void*)0) && ( *VAR_8 ).indices[VAR_16 + 6] >= 0 ) {
     VAR_14[VAR_16] = &VAR_5[( *VAR_8 ).indices[VAR_16 + 6]].color;
    }
    else
    {
     VAR_14[VAR_16] = &VAR_0;
    }

    VAR_15[VAR_16] = ( VAR_3[( *VAR_8 ).indices[VAR_16]].id * ( 1 << 16 ) ) + ( *VAR_8 ).smoothingGroup;

   }


   FUNC_0( VAR_1, VAR_11, VAR_12, 1, VAR_13, 1, VAR_14, VAR_10->shader, VAR_15 );
  }
 }
}
