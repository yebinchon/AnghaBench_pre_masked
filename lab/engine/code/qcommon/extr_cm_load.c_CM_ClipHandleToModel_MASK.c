
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmodel_t ;
typedef size_t clipHandle_t ;
struct TYPE_2__ {size_t numSubModels; int * cmodels; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

cmodel_t *FUNC_1( clipHandle_t VAR_5 ) {
 if ( VAR_5 < 0 ) {
  FUNC_0( VAR_1, "CM_ClipHandleToModel: bad handle %i", VAR_5 );
 }
 if ( VAR_5 < VAR_4.numSubModels ) {
  return &VAR_4.cmodels[VAR_5];
 }
 if ( VAR_5 == VAR_0 ) {
  return &VAR_3;
 }
 if ( VAR_5 < VAR_2 ) {
  FUNC_0( VAR_1, "CM_ClipHandleToModel: bad handle %i < %i < %i",
   VAR_4.numSubModels, VAR_5, VAR_2 );
 }
 FUNC_0( VAR_1, "CM_ClipHandleToModel: bad handle %i", VAR_5 + VAR_2 );

 return ((void*)0);

}
