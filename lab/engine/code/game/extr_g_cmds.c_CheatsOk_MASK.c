
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {scalar_t__ health; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_6__ {int integer; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;

qboolean FUNC_1( gentity_t *VAR_4 ) {
 if ( !VAR_0.integer ) {
  FUNC_0( VAR_4-VAR_1, "print \"Cheats are not enabled on this server.\n\"");
  return VAR_2;
 }
 if ( VAR_4->health <= 0 ) {
  FUNC_0( VAR_4-VAR_1, "print \"You must be alive to use this command.\n\"");
  return VAR_2;
 }
 return VAR_3;
}
