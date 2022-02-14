
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UBYTE ;
struct TYPE_3__ {size_t x; size_t y; } ;
struct TYPE_4__ {size_t w; size_t h; TYPE_1__ pos; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

UBYTE FUNC_0(UBYTE VAR_2, UBYTE VAR_3)
{
  UBYTE VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

  for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++)
  {
    VAR_5 = VAR_1[VAR_4].pos.x;
    VAR_6 = VAR_1[VAR_4].pos.y + 1;
    VAR_7 = VAR_5 + VAR_1[VAR_4].w;
    VAR_8 = VAR_6 + VAR_1[VAR_4].h - 1;

    if (VAR_2 >= VAR_5 && VAR_2 <= VAR_7 && VAR_3 >= VAR_6 && VAR_3 <= VAR_8)
    {
      return VAR_4;
    }
  }

  return VAR_0;
}
