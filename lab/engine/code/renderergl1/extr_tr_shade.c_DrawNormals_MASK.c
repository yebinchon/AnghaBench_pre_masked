
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int numVertexes; int * normal; int * xyz; } ;
typedef TYPE_1__ shaderCommands_t ;
struct TYPE_5__ {int whiteImage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_8 (shaderCommands_t *VAR_4) {
 int VAR_5;
 vec3_t VAR_6;

 FUNC_0( VAR_3.whiteImage );
 FUNC_4 (1,1,1);
 FUNC_5( 0, 0 );
 FUNC_1( VAR_1 | VAR_0 );

 FUNC_3 (VAR_2);
 for (VAR_5 = 0 ; VAR_5 < VAR_4->numVertexes ; VAR_5++) {
  FUNC_7 (VAR_4->xyz[VAR_5]);
  FUNC_2 (VAR_4->xyz[VAR_5], 2, VAR_4->normal[VAR_5], VAR_6);
  FUNC_7 (VAR_6);
 }
 FUNC_6 ();

 FUNC_5( 0, 1 );
}
