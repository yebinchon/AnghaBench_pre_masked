
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct speeds {int nspeed; scalar_t__ speed; } ;
typedef scalar_t__ speed_t ;


 struct speeds* VAR_0 ;

unsigned
FUNC_0(speed_t VAR_1)
{
  const struct speeds *VAR_2;

  for (VAR_2 = VAR_0; VAR_2->nspeed; VAR_2++) {
    if (VAR_2->speed == VAR_1) {
      return VAR_2->nspeed;
    }
  }
  return 0;
}
