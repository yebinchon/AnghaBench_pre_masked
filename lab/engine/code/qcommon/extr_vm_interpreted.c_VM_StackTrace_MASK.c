
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dataBase; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2( vm_t *VAR_0, int VAR_1, int VAR_2 ) {
 int VAR_3;

 VAR_3 = 0;
 do {
  FUNC_0( "%s\n", FUNC_1( VAR_0, VAR_1 ) );
  VAR_2 = *(int *)&VAR_0->dataBase[VAR_2+4];
  VAR_1 = *(int *)&VAR_0->dataBase[VAR_2];
 } while ( VAR_1 != -1 && ++VAR_3 < 32 );

}
