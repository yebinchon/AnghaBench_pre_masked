
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UBYTE ;
struct TYPE_2__ {size_t w; size_t h; size_t data_idx; scalar_t__ y; scalar_t__ x; } ;


 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int *) ;

void FUNC_1(UBYTE VAR_2)
{
  UBYTE VAR_3, VAR_4;

  for(VAR_3 = 0; VAR_3 < VAR_1[VAR_2].w; VAR_3++)
    for(VAR_4 = 0; VAR_4 < VAR_1[VAR_2].h; VAR_4++)
      FUNC_0(VAR_1[VAR_2].x + VAR_3,
    VAR_1[VAR_2].y + VAR_4,
    VAR_0[VAR_1[VAR_2].data_idx+(VAR_3<<1)+VAR_4],
    ((void*)0));
}
