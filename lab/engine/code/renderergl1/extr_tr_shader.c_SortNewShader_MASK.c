
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float sort; int sortedIndex; } ;
typedef TYPE_1__ shader_t ;
struct TYPE_4__ {int numShaders; TYPE_1__** sortedShaders; TYPE_1__** shaders; } ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1( void ) {
 int VAR_1;
 float VAR_2;
 shader_t *VAR_3;

 VAR_3 = VAR_0.shaders[ VAR_0.numShaders - 1 ];
 VAR_2 = VAR_3->sort;

 for ( VAR_1 = VAR_0.numShaders - 2 ; VAR_1 >= 0 ; VAR_1-- ) {
  if ( VAR_0.sortedShaders[ VAR_1 ]->sort <= VAR_2 ) {
   break;
  }
  VAR_0.sortedShaders[VAR_1+1] = VAR_0.sortedShaders[VAR_1];
  VAR_0.sortedShaders[VAR_1+1]->sortedIndex++;
 }



 FUNC_0( VAR_1+1 );

 VAR_3->sortedIndex = VAR_1+1;
 VAR_0.sortedShaders[VAR_1+1] = VAR_3;
}
