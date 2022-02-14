
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UBYTE ;
struct TYPE_3__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {TYPE_1__ pos; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 size_t VAR_7 ;
 scalar_t__* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

void FUNC_1()
{
  UBYTE VAR_10, VAR_11;


  if (VAR_9 != 0)
  {

    if (VAR_9 != VAR_3)
    {


      VAR_10 = VAR_6[VAR_7].pos.x - VAR_4;
      VAR_11 = VAR_6[VAR_7].pos.y - VAR_0 - VAR_5;


      if (VAR_9 < VAR_1)
      {
        VAR_11 += VAR_8[VAR_9];
      }


      FUNC_0(VAR_2, VAR_10, VAR_11);
    }
  }
}
