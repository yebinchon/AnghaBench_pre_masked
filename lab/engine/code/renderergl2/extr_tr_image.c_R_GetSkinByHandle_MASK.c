
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int skin_t ;
typedef int qhandle_t ;
struct TYPE_2__ {int numSkins; int ** skins; } ;


 TYPE_1__ VAR_0 ;

skin_t *FUNC_0( qhandle_t VAR_1 ) {
 if ( VAR_1 < 1 || VAR_1 >= VAR_0.numSkins ) {
  return VAR_0.skins[0];
 }
 return VAR_0.skins[ VAR_1 ];
}
