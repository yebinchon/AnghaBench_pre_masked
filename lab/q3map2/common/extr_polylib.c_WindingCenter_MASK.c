
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,float,int ) ;
 int VAR_0 ;

void FUNC_3( winding_t *VAR_1, vec3_t VAR_2 ){
 int VAR_3;
 float VAR_4;

 FUNC_1( VAR_0, VAR_2 );
 for ( VAR_3 = 0 ; VAR_3 < VAR_1->numpoints ; VAR_3++ )
  FUNC_0( VAR_1->p[VAR_3], VAR_2, VAR_2 );

 VAR_4 = 1.0 / VAR_1->numpoints;
 FUNC_2( VAR_2, VAR_4, VAR_2 );
}
