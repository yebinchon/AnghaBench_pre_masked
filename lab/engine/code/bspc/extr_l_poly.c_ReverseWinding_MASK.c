
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

winding_t *FUNC_2 (winding_t *VAR_0)
{
 int VAR_1;
 winding_t *VAR_2;

 VAR_2 = FUNC_0 (VAR_0->numpoints);
 for (VAR_1=0 ; VAR_1<VAR_0->numpoints ; VAR_1++)
 {
  FUNC_1 (VAR_0->p[VAR_0->numpoints-1-VAR_1], VAR_2->p[VAR_1]);
 }
 VAR_2->numpoints = VAR_0->numpoints;
 return VAR_2;
}
