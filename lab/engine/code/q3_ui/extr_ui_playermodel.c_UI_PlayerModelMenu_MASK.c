
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t selectedmodel; int * pics; int menu; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;

void FUNC_3(void)
{
 FUNC_1();

 FUNC_2( &VAR_1.menu );

 FUNC_0( &VAR_1.menu, &VAR_1.pics[VAR_1.selectedmodel % VAR_0] );
}
