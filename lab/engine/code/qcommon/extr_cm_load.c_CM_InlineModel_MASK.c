
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int clipHandle_t ;
struct TYPE_2__ {int numSubModels; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

clipHandle_t FUNC_1( int VAR_2 ) {
 if ( VAR_2 < 0 || VAR_2 >= VAR_1.numSubModels ) {
  FUNC_0 (VAR_0, "CM_InlineModel: bad number");
 }
 return VAR_2;
}
