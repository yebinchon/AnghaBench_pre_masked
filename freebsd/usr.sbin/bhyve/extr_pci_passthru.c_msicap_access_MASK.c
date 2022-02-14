
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capoff; int msgctrl; } ;
struct passthru_softc {TYPE_1__ psc_msi; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct passthru_softc *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_0->psc_msi.capoff == 0)
  return (0);

 VAR_2 = FUNC_0(VAR_0->psc_msi.msgctrl);

 if (VAR_1 >= VAR_0->psc_msi.capoff && VAR_1 < VAR_0->psc_msi.capoff + VAR_2)
  return (1);
 else
  return (0);
}
