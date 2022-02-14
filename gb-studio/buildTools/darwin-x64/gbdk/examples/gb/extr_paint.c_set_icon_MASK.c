
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UWORD ;
typedef size_t UBYTE ;
struct TYPE_2__ {size_t w; size_t h; size_t data_idx; size_t x; size_t y; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (size_t,size_t,int ,int ) ;

void FUNC_1(UBYTE VAR_4, UBYTE VAR_5)
{
    UBYTE VAR_6, VAR_7;

    for(VAR_6 = 0; VAR_6 < VAR_2[VAR_4].w; VAR_6++)
 for(VAR_7 = 0; VAR_7 < VAR_2[VAR_4].h; VAR_7++) {
     UWORD VAR_8 = VAR_2[VAR_4].data_idx+((UWORD)VAR_6<<1)+VAR_7;
     FUNC_0(VAR_2[VAR_4].x + VAR_6,
   VAR_2[VAR_4].y + VAR_7,
   VAR_5 ? VAR_3[VAR_8] : VAR_0[VAR_8],
   VAR_1[VAR_8]);
 }
}
