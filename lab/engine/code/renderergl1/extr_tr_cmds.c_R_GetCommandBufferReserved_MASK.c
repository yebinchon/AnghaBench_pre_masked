
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used; void* cmds; } ;
typedef TYPE_1__ renderCommandList_t ;
struct TYPE_6__ {TYPE_1__ commands; } ;
struct TYPE_5__ {int (* Error ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,char*,int) ;

void *FUNC_2( int VAR_4, int VAR_5 ) {
 renderCommandList_t *VAR_6;

 VAR_6 = &VAR_2->commands;
 VAR_4 = FUNC_0(VAR_4, sizeof(void *));


 if ( VAR_6->used + VAR_4 + sizeof( int ) + VAR_5 > VAR_1 ) {
  if ( VAR_4 > VAR_1 - sizeof( int ) ) {
   VAR_3.Error( VAR_0, "R_GetCommandBuffer: bad size %i", VAR_4 );
  }

  return ((void*)0);
 }

 VAR_6->used += VAR_4;

 return VAR_6->cmds + VAR_6->used - VAR_4;
}
