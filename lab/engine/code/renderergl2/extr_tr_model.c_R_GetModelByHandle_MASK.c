
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qhandle_t ;
typedef int model_t ;
struct TYPE_2__ {int numModels; int ** models; } ;


 TYPE_1__ VAR_0 ;

model_t *FUNC_0( qhandle_t VAR_1 ) {
 model_t *VAR_2;


 if ( VAR_1 < 1 || VAR_1 >= VAR_0.numModels ) {
  return VAR_0.models[0];
 }

 VAR_2 = VAR_0.models[VAR_1];

 return VAR_2;
}
