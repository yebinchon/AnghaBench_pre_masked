
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t index; } ;
typedef TYPE_1__ model_t ;
struct TYPE_8__ {TYPE_1__* (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_7__ {size_t numModels; TYPE_1__** models; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 TYPE_2__ VAR_3 ;

model_t *FUNC_1( void ) {
 model_t *VAR_4;

 if ( VAR_3.numModels == VAR_0 ) {
  return ((void*)0);
 }

 VAR_4 = VAR_2.Hunk_Alloc( sizeof( *VAR_3.models[VAR_3.numModels] ), VAR_1 );
 VAR_4->index = VAR_3.numModels;
 VAR_3.models[VAR_3.numModels] = VAR_4;
 VAR_3.numModels++;

 return VAR_4;
}
