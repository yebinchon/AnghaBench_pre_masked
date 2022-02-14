
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current; scalar_t__ dash; scalar_t__ expanded; } ;
typedef TYPE_1__ GScroll ;
typedef int GDash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;

int
FUNC_1 (GScroll * VAR_4, GDash * VAR_5, int VAR_6)
{
  int VAR_7 = 0;
  int VAR_8 = VAR_6 - VAR_2 - VAR_1 + 1;
  if (VAR_4->expanded) {
    VAR_7 = FUNC_0 (VAR_5, VAR_8);
  } else {
    VAR_8 += VAR_4->dash;
    VAR_7 = VAR_8 / VAR_0;
  }

  if (VAR_7 >= VAR_3)
    VAR_7 = VAR_3 - 1;
  else if (VAR_7 < 0)
    VAR_7 = 0;

  if ((int) VAR_4->current == VAR_7)
    return 1;

  VAR_4->current = VAR_7;
  return 0;
}
