
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int verbose; int progress; } ;


 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct transport *VAR_0, int VAR_1,
 int VAR_2)
{
 if (VAR_1 >= 1)
  VAR_0->verbose = VAR_1 <= 3 ? VAR_1 : 3;
 if (VAR_1 < 0)
  VAR_0->verbose = -1;
 if (VAR_2 >= 0)
  VAR_0->progress = !!VAR_2;
 else
  VAR_0->progress = VAR_1 >= 0 && FUNC_0(2);
}
