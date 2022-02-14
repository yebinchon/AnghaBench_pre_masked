
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UBYTE ;
struct TYPE_2__ {scalar_t__ w; scalar_t__ h; scalar_t__ data_idx; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

void FUNC_4()
{
    UBYTE VAR_3, VAR_4, VAR_5;

    VAR_5 = 0;
    for(VAR_3 = 0; VAR_3 < VAR_1[VAR_0].w; VAR_3++)
 for(VAR_4 = 0; VAR_4 < VAR_1[VAR_0].h; VAR_4++) {
     FUNC_1(VAR_5,
       1,
       VAR_2[VAR_1[VAR_0].data_idx+VAR_5]);
     FUNC_3(VAR_5, VAR_5);
     FUNC_2(VAR_5, 0x10);
     VAR_5++;
 }

    for(; VAR_5 < 4; VAR_5++) {
 FUNC_0(VAR_5, 0, 0);
    }
}
