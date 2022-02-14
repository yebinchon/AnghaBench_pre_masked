
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_2__ {int w; int h; scalar_t__ hot_y; scalar_t__ hot_x; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,scalar_t__,scalar_t__) ;

void FUNC_1()
{
  UBYTE VAR_4, VAR_5;

  for(VAR_4 = 0; VAR_4 < VAR_3[VAR_0].w; VAR_4++)
    for(VAR_5 = 0; VAR_5 < VAR_3[VAR_0].h; VAR_5++)
      FUNC_0((VAR_4<<1)+VAR_5,
    VAR_1+8 - VAR_3[VAR_0].hot_x + (VAR_4<<3),
    VAR_2+16 - VAR_3[VAR_0].hot_y + (VAR_5<<3));
}
