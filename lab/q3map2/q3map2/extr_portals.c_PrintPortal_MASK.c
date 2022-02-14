
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_5__ {TYPE_1__* winding; } ;
typedef TYPE_2__ portal_t ;


 int FUNC_0 (char*,int ,int ,int ) ;

void FUNC_1( portal_t *VAR_0 ){
 int VAR_1;
 winding_t *VAR_2;

 VAR_2 = VAR_0->winding;
 for ( VAR_1 = 0 ; VAR_1 < VAR_2->numpoints ; VAR_1++ )
  FUNC_0( "(%5.0f,%5.0f,%5.0f)\n",VAR_2->p[VAR_1][0]
     , VAR_2->p[VAR_1][1], VAR_2->p[VAR_1][2] );
}
