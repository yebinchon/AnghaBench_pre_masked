
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_0( winding_t *VAR_4 ){
 int VAR_5, VAR_6;

 for ( VAR_5 = 0 ; VAR_5 < VAR_4->numpoints ; VAR_5++ )
 {
  for ( VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++ )
   if ( VAR_4->p[VAR_5][VAR_6] <= VAR_1 || VAR_4->p[VAR_5][VAR_6] >= VAR_0 ) {
    return VAR_3;
   }
 }
 return VAR_2;
}
