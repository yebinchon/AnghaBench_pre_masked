
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cmds; scalar_t__ used; } ;
typedef TYPE_1__ renderCommandList_t ;
typedef scalar_t__ qboolean ;
struct TYPE_7__ {TYPE_1__ commands; } ;
struct TYPE_6__ {int integer; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_3( qboolean VAR_3 ) {
 renderCommandList_t *VAR_4;

 VAR_4 = &VAR_1->commands;
 FUNC_2(VAR_4);

 *(int *)(VAR_4->cmds + VAR_4->used) = VAR_0;


 VAR_4->used = 0;

 if ( VAR_3 ) {
  FUNC_1();
 }


 if ( !VAR_2->integer ) {

  FUNC_0( VAR_4->cmds );
 }
}
