
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int powerups; } ;
typedef TYPE_1__ aas_entityinfo_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1(aas_entityinfo_t *VAR_3) {

 if (FUNC_0(VAR_3)) {
  return VAR_1;
 }
 if (VAR_3->powerups & (1 << VAR_0)) {
  return VAR_2;
 }
 return VAR_1;
}
