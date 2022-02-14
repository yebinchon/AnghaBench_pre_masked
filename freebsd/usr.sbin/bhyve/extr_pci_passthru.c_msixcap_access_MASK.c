
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capoff; } ;
struct passthru_softc {TYPE_1__ psc_msix; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct passthru_softc *VAR_1, int VAR_2)
{
 if (VAR_1->psc_msix.capoff == 0)
  return (0);

 return (VAR_2 >= VAR_1->psc_msix.capoff &&
         VAR_2 < VAR_1->psc_msix.capoff + VAR_0);
}
