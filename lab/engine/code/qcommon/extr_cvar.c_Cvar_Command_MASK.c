
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ cvar_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_6( void ) {
 cvar_t *VAR_2;


 VAR_2 = FUNC_3 (FUNC_2(0));
 if (!VAR_2) {
  return VAR_0;
 }


 if ( FUNC_0() == 1 ) {
  FUNC_4( VAR_2 );
  return VAR_1;
 }


 FUNC_5 (VAR_2->name, FUNC_1(), VAR_0);
 return VAR_1;
}
