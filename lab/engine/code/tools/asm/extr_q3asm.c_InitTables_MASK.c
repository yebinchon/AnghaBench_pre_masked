
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,int ,TYPE_1__*) ;
 void* FUNC_2 (int) ;
 int * VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;

void FUNC_3( void ) {
 int VAR_6;

 VAR_4 = FUNC_2(VAR_5);
 VAR_2 = FUNC_2(100);

 for ( VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++ ) {
  VAR_1[VAR_6] = FUNC_0( VAR_3[VAR_6].name );
  FUNC_1(VAR_2, VAR_1[VAR_6], VAR_3 + VAR_6);
 }
}
