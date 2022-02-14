
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* ikey; TYPE_5__* key; } ;
struct TYPE_9__ {TYPE_5__* data; TYPE_5__* name; } ;
struct TYPE_8__ {TYPE_5__* vmap_name; } ;
struct TYPE_11__ {TYPE_3__ grad; TYPE_2__ proc; TYPE_1__ imap; } ;
struct TYPE_12__ {int type; TYPE_4__ param; struct TYPE_12__* ord; } ;
typedef TYPE_5__ lwTexture ;





 int FUNC_0 (TYPE_5__*) ;

void FUNC_1( lwTexture *VAR_0 ){
 if ( VAR_0 ) {
  if ( VAR_0->ord ) {
   FUNC_0( VAR_0->ord );
  }
  switch ( VAR_0->type ) {
  case 129:
   if ( VAR_0->param.imap.vmap_name ) {
    FUNC_0( VAR_0->param.imap.vmap_name );
   }
   break;
  case 128:
   if ( VAR_0->param.proc.name ) {
    FUNC_0( VAR_0->param.proc.name );
   }
   if ( VAR_0->param.proc.data ) {
    FUNC_0( VAR_0->param.proc.data );
   }
   break;
  case 130:
   if ( VAR_0->param.grad.key ) {
    FUNC_0( VAR_0->param.grad.key );
   }
   if ( VAR_0->param.grad.ikey ) {
    FUNC_0( VAR_0->param.grad.ikey );
   }
   break;
  }
  FUNC_0( VAR_0 );
 }
}
