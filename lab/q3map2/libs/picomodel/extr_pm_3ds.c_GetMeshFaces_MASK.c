
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picoIndex_t ;
struct TYPE_6__ {int a; int c; int b; int visible; } ;
struct TYPE_5__ {int surface; } ;
typedef TYPE_1__ T3dsLoaderPers ;
typedef TYPE_2__ T3dsIndices ;


 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3( T3dsLoaderPers *VAR_0 ){
 int VAR_1;
 int VAR_2;


 VAR_1 = FUNC_0( VAR_0 );





 for ( VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ )
 {



  T3dsIndices VAR_3;
  VAR_3.a = FUNC_0( VAR_0 );
  VAR_3.c = FUNC_0( VAR_0 );
  VAR_3.b = FUNC_0( VAR_0 );
  VAR_3.visible = FUNC_0( VAR_0 );


  FUNC_1( VAR_0->surface, ( VAR_2 * 3 + 0 ), (picoIndex_t)VAR_3.a );
  FUNC_1( VAR_0->surface, ( VAR_2 * 3 + 1 ), (picoIndex_t)VAR_3.b );
  FUNC_1( VAR_0->surface, ( VAR_2 * 3 + 2 ), (picoIndex_t)VAR_3.c );




 }

 return 1;
}
