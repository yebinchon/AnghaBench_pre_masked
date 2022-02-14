
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct port_range {unsigned int nports; scalar_t__* port; } ;



int
FUNC_0(struct port_range *VAR_0, u_short VAR_1, u_short VAR_2)
{
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0->nports; VAR_3++)
    if (VAR_0->port[VAR_3] == VAR_1 || VAR_0->port[VAR_3] == VAR_2)
      return 1;

  return 0;
}
