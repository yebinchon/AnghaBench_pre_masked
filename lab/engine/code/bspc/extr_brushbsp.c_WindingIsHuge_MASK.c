
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int** p; } ;
typedef TYPE_1__ winding_t ;
typedef int qboolean ;


 int VAR_0 ;

qboolean FUNC_0 (winding_t *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2=0 ; VAR_2<VAR_1->numpoints ; VAR_2++)
 {
  for (VAR_3=0 ; VAR_3<3 ; VAR_3++)
   if (VAR_1->p[VAR_2][VAR_3] < -VAR_0+1 || VAR_1->p[VAR_2][VAR_3] > VAR_0-1)
    return 1;
 }
 return 0;
}
