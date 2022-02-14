
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct port_range {unsigned int nports; scalar_t__* port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,unsigned int) ;

void
FUNC_2(struct port_range *VAR_1, u_short VAR_2)
{
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->nports; VAR_3++)
    if (VAR_1->port[VAR_3] == VAR_2) {
      if (VAR_3 + 1 != VAR_1->nports)
        FUNC_1(VAR_1->port + VAR_3, VAR_1->port + VAR_3 + 1,
                (VAR_1->nports - VAR_3 - 1) * sizeof(u_short));
      VAR_1->nports--;
      return;
    }

  if (VAR_3 == VAR_1->nports)
    FUNC_0(VAR_0, "%u: Port not set to urgent\n", VAR_2);
}
