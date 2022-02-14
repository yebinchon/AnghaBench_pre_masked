
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sort; int name; } ;
struct TYPE_7__ {int stateBits; int active; TYPE_1__* bundle; } ;
struct TYPE_6__ {void* shadowShader; void* defaultShader; int defaultImage; scalar_t__ numShaders; } ;
struct TYPE_5__ {int * image; } ;


 void* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void FUNC_3( void ) {
 VAR_6.numShaders = 0;


 FUNC_1( "<default>", VAR_1 );
 VAR_5[0].bundle[0].image[0] = VAR_6.defaultImage;
 VAR_5[0].active = VAR_3;
 VAR_5[0].stateBits = VAR_0;
 VAR_6.defaultShader = FUNC_0();


 FUNC_2( VAR_4.name, "<stencil shadow>", sizeof( VAR_4.name ) );
 VAR_4.sort = VAR_2;
 VAR_6.shadowShader = FUNC_0();
}
