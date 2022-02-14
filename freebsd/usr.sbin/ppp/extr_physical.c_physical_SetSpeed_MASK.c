
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int speed; } ;
struct physical {TYPE_1__ cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

int
FUNC_1(struct physical *VAR_1, unsigned VAR_2)
{
  if (FUNC_0(VAR_2) != VAR_0) {
      VAR_1->cfg.speed = VAR_2;
      return 1;
  }

  return 0;
}
