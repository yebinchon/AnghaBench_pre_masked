
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int powerups; } ;
typedef TYPE_1__ aas_entityinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_0(aas_entityinfo_t *VAR_5) {
 if ( VAR_5->powerups & ( 1 << VAR_2 ) )
  return VAR_4;
 if ( VAR_5->powerups & ( 1 << VAR_0 ) )
  return VAR_4;




 return VAR_3;
}
