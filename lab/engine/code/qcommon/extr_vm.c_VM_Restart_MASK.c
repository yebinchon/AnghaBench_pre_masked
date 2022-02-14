
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {intptr_t (* systemCall ) (intptr_t*) ;int name; scalar_t__ dllHandle; } ;
typedef TYPE_1__ vm_t ;
typedef int vmHeader_t ;
typedef int qboolean ;
typedef int name ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (char*,intptr_t (*) (intptr_t*),int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;

vm_t *FUNC_7(vm_t *VAR_4, qboolean VAR_5)
{
 vmHeader_t *VAR_6;


 if ( VAR_4->dllHandle ) {
  char VAR_7[VAR_1];
  intptr_t (*VAR_8)( intptr_t *VAR_9 );

  VAR_8 = VAR_4->systemCall;
  FUNC_3( VAR_7, VAR_4->name, sizeof( VAR_7 ) );

  FUNC_5( VAR_4 );

  VAR_4 = FUNC_4( VAR_7, VAR_8, VAR_2 );
  return VAR_4;
 }


 FUNC_1("VM_Restart()\n");

 if(!(VAR_6 = FUNC_6(VAR_4, VAR_3, VAR_5)))
 {
  FUNC_0(VAR_0, "VM_Restart failed");
  return ((void*)0);
 }


 FUNC_2(VAR_6);

 return VAR_4;
}
