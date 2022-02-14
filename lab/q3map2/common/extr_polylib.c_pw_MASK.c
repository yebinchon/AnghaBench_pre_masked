
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;


 int FUNC_0 (char*,int ,int ,int ) ;

void FUNC_1( winding_t *VAR_0 ){
 int VAR_1;
 for ( VAR_1 = 0 ; VAR_1 < VAR_0->numpoints ; VAR_1++ )
  FUNC_0( "(%5.1f, %5.1f, %5.1f)\n",VAR_0->p[VAR_1][0], VAR_0->p[VAR_1][1],VAR_0->p[VAR_1][2] );
}
