
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct port_range {int nports; int maxports; scalar_t__* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(struct port_range *VAR_3, u_short VAR_4)
{
  u_short *VAR_5;
  unsigned VAR_6;

  if (VAR_3->nports == VAR_3->maxports) {
    VAR_3->maxports += 10;
    VAR_5 = (u_short *)FUNC_2(VAR_3->port,
                                 VAR_3->maxports * sizeof(u_short));
    if (VAR_5 == ((void*)0)) {
      FUNC_0(VAR_0, "ncp_AddUrgentPort: realloc: %s\n",
                 FUNC_3(VAR_2));
      VAR_3->maxports -= 10;
      return;
    }
    VAR_3->port = VAR_5;
  }

  for (VAR_6 = 0; VAR_6 < VAR_3->nports; VAR_6++)
    if (VAR_3->port[VAR_6] == VAR_4) {
      FUNC_0(VAR_1, "%u: Port already set to urgent\n", VAR_4);
      break;
    } else if (VAR_3->port[VAR_6] > VAR_4) {
      FUNC_1(VAR_3->port + VAR_6 + 1, VAR_3->port + VAR_6,
              (VAR_3->nports - VAR_6) * sizeof(u_short));
      VAR_3->port[VAR_6] = VAR_4;
      VAR_3->nports++;
      break;
    }

  if (VAR_6 == VAR_3->nports)
    VAR_3->port[VAR_3->nports++] = VAR_4;
}
