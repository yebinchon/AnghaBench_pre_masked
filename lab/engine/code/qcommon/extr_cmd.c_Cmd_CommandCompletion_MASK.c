
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; struct TYPE_3__* next; } ;
typedef TYPE_1__ cmd_function_t ;


 TYPE_1__* VAR_0 ;

void FUNC_0( void(*VAR_1)(const char *VAR_2) ) {
 cmd_function_t *VAR_3;

 for (VAR_3=VAR_0 ; VAR_3 ; VAR_3=VAR_3->next) {
  VAR_1( VAR_3->name );
 }
}
