
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct speeds {unsigned int nspeed; int speed; } ;
typedef int speed_t ;


 int VAR_0 ;
 struct speeds* VAR_1 ;

speed_t
FUNC_0(unsigned VAR_2)
{
  const struct speeds *VAR_3;

  for (VAR_3 = VAR_1; VAR_3->nspeed; VAR_3++) {
    if (VAR_3->nspeed == VAR_2) {
      return VAR_3->speed;
    }
  }
  return VAR_0;
}
