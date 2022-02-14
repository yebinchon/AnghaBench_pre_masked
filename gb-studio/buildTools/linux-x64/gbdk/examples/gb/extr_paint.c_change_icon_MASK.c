
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UWORD ;
typedef size_t UBYTE ;
struct TYPE_2__ {size_t w; size_t h; size_t x; int data_idx; scalar_t__ y; } ;


 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (size_t,scalar_t__,int ,int *) ;

void FUNC_1(UBYTE VAR_3, UBYTE VAR_4)
{
  UBYTE VAR_5, VAR_6;

  for(VAR_5 = 0; VAR_5 < VAR_1[VAR_3].w; VAR_5++)
    for(VAR_6 = 0; VAR_6 < VAR_1[VAR_3].h; VAR_6++)
      FUNC_0(VAR_1[VAR_3].x + VAR_5,
    VAR_1[VAR_3].y + VAR_6,
    (VAR_4 ?
     VAR_2[VAR_1[VAR_3].data_idx+((UWORD)VAR_5<<1)+VAR_6] :
     VAR_0[VAR_1[VAR_3].data_idx+((UWORD)VAR_5<<1)+VAR_6]),
    ((void*)0));
}
