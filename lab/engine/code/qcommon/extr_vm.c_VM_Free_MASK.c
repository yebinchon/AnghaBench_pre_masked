
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ instructionPointers; scalar_t__ dataBase; scalar_t__ codeBase; scalar_t__ dllHandle; int (* destroy ) (TYPE_1__*) ;int name; scalar_t__ callLevel; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6( vm_t *VAR_4 ) {

 if(!VAR_4) {
  return;
 }

 if(VAR_4->callLevel) {
  if(!VAR_2) {
   FUNC_0( VAR_0, "VM_Free(%s) on running vm", VAR_4->name );
   return;
  } else {
   FUNC_2( "forcefully unloading %s vm\n", VAR_4->name );
  }
 }

 if(VAR_4->destroy)
  VAR_4->destroy(VAR_4);

 if ( VAR_4->dllHandle ) {
  FUNC_3( VAR_4->dllHandle );
  FUNC_1( VAR_4, 0, sizeof( *VAR_4 ) );
 }
 FUNC_1( VAR_4, 0, sizeof( *VAR_4 ) );

 VAR_1 = ((void*)0);
 VAR_3 = ((void*)0);
}
