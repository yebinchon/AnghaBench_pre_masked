
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ winding; } ;
typedef TYPE_1__ side_t ;
struct TYPE_5__ {int numsides; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(mapbrush_t *VAR_0)
{
 int VAR_1;
 side_t *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->numsides; VAR_1++)
 {
  VAR_2 = VAR_0->original_sides + VAR_1;

  if (VAR_2->winding) FUNC_0(VAR_2->winding);
 }
}
